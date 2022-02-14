
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct genl_info*) ;
 int FUNC_1 (struct sk_buff*,struct genl_info*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3, struct genl_info *VAR_4)
{
 struct sk_buff *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_2, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_5, VAR_4);
 if (VAR_6)
  goto free_msg;

 return FUNC_0(VAR_5, VAR_4);

free_msg:
 FUNC_2(VAR_5);
 return VAR_6;
}
