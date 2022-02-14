
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int net_dev; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int ** attrs; } ;
struct device {int dummy; } ;
typedef enum wimax_rf_state { ____Placeholder_wimax_rf_state } wimax_rf_state ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int,int *,char*,struct sk_buff*,struct genl_info*,int) ;
 int FUNC_1 (int,int *,char*,struct sk_buff*,struct genl_info*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 struct wimax_dev* FUNC_6 (struct genl_info*,int) ;
 struct device* FUNC_7 (struct wimax_dev*) ;
 int FUNC_8 (struct wimax_dev*,int) ;

int FUNC_9(struct sk_buff *VAR_4, struct genl_info *VAR_5)
{
 int VAR_6, VAR_7;
 struct wimax_dev *VAR_8;
 struct device *VAR_9;
 enum wimax_rf_state VAR_10;

 FUNC_1(3, ((void*)0), "(skb %p info %p)\n", VAR_4, VAR_5);
 VAR_6 = -VAR_1;
 if (VAR_5->attrs[VAR_2] == ((void*)0)) {
  FUNC_5("WIMAX_GNL_OP_RFKILL: can't find IFIDX attribute\n");
  goto error_no_wimax_dev;
 }
 VAR_7 = FUNC_4(VAR_5->attrs[VAR_2]);
 VAR_8 = FUNC_6(VAR_5, VAR_7);
 if (VAR_8 == ((void*)0))
  goto error_no_wimax_dev;
 VAR_9 = FUNC_7(VAR_8);
 VAR_6 = -VAR_0;
 if (VAR_5->attrs[VAR_3] == ((void*)0)) {
  FUNC_2(VAR_9, "WIMAX_GNL_RFKILL: can't find RFKILL_STATE "
   "attribute\n");
  goto error_no_pid;
 }
 VAR_10 = FUNC_4(VAR_5->attrs[VAR_3]);


 VAR_6 = FUNC_8(VAR_8, VAR_10);
error_no_pid:
 FUNC_3(VAR_8->net_dev);
error_no_wimax_dev:
 FUNC_0(3, ((void*)0), "(skb %p info %p) = %d\n", VAR_4, VAR_5, VAR_6);
 return VAR_6;
}
