
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct wireless_dev {int netdev; TYPE_2__* wiphy; } ;
struct TYPE_3__ {scalar_t__ vendor_id; scalar_t__ subcmd; } ;
struct wiphy_vendor_command {int flags; int (* doit ) (TYPE_2__*,struct wireless_dev*,void*,int) ;TYPE_1__ info; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int extack; scalar_t__* attrs; struct cfg80211_registered_device** user_ptr; } ;
struct TYPE_4__ {int n_vendor_commands; struct wiphy_vendor_command* vendor_commands; } ;
struct cfg80211_registered_device {struct genl_info* cur_cmd_info; TYPE_2__ wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct wireless_dev*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct wireless_dev*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct wireless_dev* FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (struct genl_info*) ;
 int FUNC_4 (struct wiphy_vendor_command const*,scalar_t__,int ) ;
 void* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_2__*,struct wireless_dev*,void*,int) ;
 int FUNC_9 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct cfg80211_registered_device *VAR_11 = VAR_10->user_ptr[0];
 struct wireless_dev *VAR_12 =
  FUNC_2(FUNC_3(VAR_10), VAR_10->attrs);
 int VAR_13, VAR_14;
 u32 VAR_15, VAR_16;

 if (!VAR_11->wiphy.vendor_commands)
  return -VAR_2;

 if (FUNC_0(VAR_12)) {
  VAR_14 = FUNC_1(VAR_12);
  if (VAR_14 != -VAR_0)
   return VAR_14;
  VAR_12 = ((void*)0);
 } else if (VAR_12->wiphy != &VAR_11->wiphy) {
  return -VAR_0;
 }

 if (!VAR_10->attrs[VAR_4] ||
     !VAR_10->attrs[VAR_5])
  return -VAR_0;

 VAR_15 = FUNC_6(VAR_10->attrs[VAR_4]);
 VAR_16 = FUNC_6(VAR_10->attrs[VAR_5]);
 for (VAR_13 = 0; VAR_13 < VAR_11->wiphy.n_vendor_commands; VAR_13++) {
  const struct wiphy_vendor_command *VAR_17;
  void *VAR_18 = ((void*)0);
  int VAR_19 = 0;

  VAR_17 = &VAR_11->wiphy.vendor_commands[VAR_13];

  if (VAR_17->info.vendor_id != VAR_15 || VAR_17->info.subcmd != VAR_16)
   continue;

  if (VAR_17->flags & (VAR_8 |
       VAR_6)) {
   if (!VAR_12)
    return -VAR_0;
   if (VAR_17->flags & VAR_6 &&
       !VAR_12->netdev)
    return -VAR_0;

   if (VAR_17->flags & VAR_7) {
    if (!FUNC_9(VAR_12))
     return -VAR_1;
   }

   if (!VAR_17->doit)
    return -VAR_2;
  } else {
   VAR_12 = ((void*)0);
  }

  if (VAR_10->attrs[VAR_3]) {
   VAR_18 = FUNC_5(VAR_10->attrs[VAR_3]);
   VAR_19 = FUNC_7(VAR_10->attrs[VAR_3]);

   VAR_14 = FUNC_4(VAR_17,
     VAR_10->attrs[VAR_3],
     VAR_10->extack);
   if (VAR_14)
    return VAR_14;
  }

  VAR_11->cur_cmd_info = VAR_10;
  VAR_14 = VAR_17->doit(&VAR_11->wiphy, VAR_12, VAR_18, VAR_19);
  VAR_11->cur_cmd_info = ((void*)0);
  return VAR_14;
 }

 return -VAR_2;
}
