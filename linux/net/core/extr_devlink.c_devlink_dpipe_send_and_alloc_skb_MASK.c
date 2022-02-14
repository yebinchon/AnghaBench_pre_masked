
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff*,struct genl_info*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff **VAR_3,
         struct genl_info *VAR_4)
{
 int VAR_5;

 if (*VAR_3) {
  VAR_5 = FUNC_1(*VAR_3, VAR_4);
  if (VAR_5)
   return VAR_5;
 }
 *VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!*VAR_3)
  return -VAR_0;
 return 0;
}
