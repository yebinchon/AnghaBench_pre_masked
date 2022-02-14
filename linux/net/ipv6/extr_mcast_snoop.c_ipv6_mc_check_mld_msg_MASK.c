
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mld_msg {int mld_type; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2)
{
 unsigned int VAR_3 = FUNC_4(VAR_2) + sizeof(struct mld_msg);
 struct mld_msg *VAR_4;

 if (!FUNC_2(VAR_2, VAR_3))
  return -VAR_0;

 VAR_4 = (struct mld_msg *)FUNC_3(VAR_2);

 switch (VAR_4->mld_type) {
 case 130:
 case 129:
  return 0;
 case 128:
  return FUNC_1(VAR_2);
 case 131:
  return FUNC_0(VAR_2);
 default:
  return -VAR_1;
 }
}
