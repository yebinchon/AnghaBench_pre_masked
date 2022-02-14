
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ieee802154_ptr; } ;
struct ieee802154_addr {int pan_id; int extended_addr; int mode; } ;
struct genl_info {int * attrs; } ;
struct TYPE_4__ {int (* assoc_resp ) (struct net_device*,struct ieee802154_addr*,int ,int ) ;} ;
struct TYPE_3__ {int pan_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct genl_info*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct net_device*,struct ieee802154_addr*,int ,int ) ;

int FUNC_9(struct sk_buff *VAR_7, struct genl_info *VAR_8)
{
 struct net_device *VAR_9;
 struct ieee802154_addr VAR_10;
 int VAR_11 = -VAR_2;

 if (!VAR_8->attrs[VAR_6] ||
     !VAR_8->attrs[VAR_4] ||
     !VAR_8->attrs[VAR_5])
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_8);
 if (!VAR_9)
  return -VAR_1;
 if (!FUNC_1(VAR_9)->assoc_resp)
  goto out;

 VAR_10.mode = VAR_3;
 VAR_10.extended_addr = FUNC_3(
   VAR_8->attrs[VAR_4]);
 FUNC_6();
 VAR_10.pan_id = VAR_9->ieee802154_ptr->pan_id;
 FUNC_7();

 VAR_11 = FUNC_1(VAR_9)->assoc_resp(VAR_9, &VAR_10,
  FUNC_4(VAR_8->attrs[VAR_5]),
  FUNC_5(VAR_8->attrs[VAR_6]));

out:
 FUNC_0(VAR_9);
 return VAR_11;
}
