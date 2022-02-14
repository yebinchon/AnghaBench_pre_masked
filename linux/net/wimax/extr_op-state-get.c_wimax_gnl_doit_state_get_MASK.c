
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int net_dev; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int ** attrs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,int *,char*,struct sk_buff*,struct genl_info*,int) ;
 int FUNC_1 (int,int *,char*,struct sk_buff*,struct genl_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 struct wimax_dev* FUNC_5 (struct genl_info*,int) ;
 int FUNC_6 (struct wimax_dev*) ;

int FUNC_7(struct sk_buff *VAR_2, struct genl_info *VAR_3)
{
 int VAR_4, VAR_5;
 struct wimax_dev *VAR_6;

 FUNC_1(3, ((void*)0), "(skb %p info %p)\n", VAR_2, VAR_3);
 VAR_4 = -VAR_0;
 if (VAR_3->attrs[VAR_1] == ((void*)0)) {
  FUNC_4("WIMAX_GNL_OP_STATE_GET: can't find IFIDX attribute\n");
  goto error_no_wimax_dev;
 }
 VAR_5 = FUNC_3(VAR_3->attrs[VAR_1]);
 VAR_6 = FUNC_5(VAR_3, VAR_5);
 if (VAR_6 == ((void*)0))
  goto error_no_wimax_dev;

 VAR_4 = FUNC_6(VAR_6);
 FUNC_2(VAR_6->net_dev);
error_no_wimax_dev:
 FUNC_0(3, ((void*)0), "(skb %p info %p) = %d\n", VAR_2, VAR_3, VAR_4);
 return VAR_4;
}
