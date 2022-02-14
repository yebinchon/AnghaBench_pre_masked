
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_3__* ieee80211_ptr; int wiphy; TYPE_1__* ops; } ;
struct TYPE_10__ {scalar_t__ mode; } ;
struct key_parse {scalar_t__ idx; TYPE_5__ p; int def_multi; scalar_t__ def_uni; scalar_t__ defmgmt; scalar_t__ def; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_3__* ieee80211_ptr; int wiphy; TYPE_1__* ops; } ;
struct TYPE_8__ {scalar_t__ default_key; scalar_t__ default_mgmt_key; } ;
struct TYPE_9__ {TYPE_2__ wext; } ;
struct TYPE_7__ {int set_default_mgmt_key; int set_default_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct genl_info*,struct key_parse*) ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct net_device*,struct net_device*,int,int ,int *,TYPE_5__*) ;
 int FUNC_4 (struct net_device*,struct net_device*,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (struct net_device*,struct net_device*,scalar_t__) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct cfg80211_registered_device *VAR_8 = VAR_7->user_ptr[0];
 struct key_parse VAR_9;
 int VAR_10;
 struct net_device *VAR_11 = VAR_7->user_ptr[1];

 VAR_10 = FUNC_1(VAR_7, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9.idx < 0)
  return -VAR_0;




 if (!VAR_9.def && !VAR_9.defmgmt &&
     !(VAR_9.p.mode == VAR_5))
  return -VAR_0;

 FUNC_6(VAR_11->ieee80211_ptr);

 if (VAR_9.def) {
  if (!VAR_8->ops->set_default_key) {
   VAR_10 = -VAR_1;
   goto out;
  }

  VAR_10 = FUNC_0(VAR_11->ieee80211_ptr);
  if (VAR_10)
   goto out;

  VAR_10 = FUNC_4(VAR_8, VAR_11, VAR_9.idx,
       VAR_9.def_uni, VAR_9.def_multi);

  if (VAR_10)
   goto out;




 } else if (VAR_9.defmgmt) {
  if (VAR_9.def_uni || !VAR_9.def_multi) {
   VAR_10 = -VAR_0;
   goto out;
  }

  if (!VAR_8->ops->set_default_mgmt_key) {
   VAR_10 = -VAR_1;
   goto out;
  }

  VAR_10 = FUNC_0(VAR_11->ieee80211_ptr);
  if (VAR_10)
   goto out;

  VAR_10 = FUNC_5(VAR_8, VAR_11, VAR_9.idx);
  if (VAR_10)
   goto out;




 } else if (VAR_9.p.mode == VAR_5 &&
     FUNC_8(&VAR_8->wiphy,
        VAR_3)) {
  u8 *VAR_12 = ((void*)0);

  if (VAR_7->attrs[VAR_2])
   VAR_12 = FUNC_2(VAR_7->attrs[VAR_2]);

  if (!VAR_12 || VAR_9.idx < 0 || VAR_9.idx > 1) {
   VAR_10 = -VAR_0;
   goto out;
  }

  VAR_10 = FUNC_3(VAR_8, VAR_11, VAR_9.idx,
       VAR_4,
       VAR_12, &VAR_9.p);
 } else {
  VAR_10 = -VAR_0;
 }
 out:
 FUNC_7(VAR_11->ieee80211_ptr);

 return VAR_10;
}
