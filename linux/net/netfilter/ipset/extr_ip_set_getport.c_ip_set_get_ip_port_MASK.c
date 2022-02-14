
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
typedef int __be16 ;






 int FUNC_0 (struct sk_buff const*,int,int *,int*) ;
 int FUNC_1 (struct sk_buff const*,int,int *,int*) ;

bool
FUNC_2(const struct sk_buff *VAR_0, u8 VAR_1, bool VAR_2, __be16 *VAR_3)
{
 bool VAR_4;
 u8 VAR_5;

 switch (VAR_1) {
 case 129:
  VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3, &VAR_5);
  break;
 case 128:
  VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3, &VAR_5);
  break;
 default:
  return 0;
 }
 if (!VAR_4)
  return VAR_4;
 switch (VAR_5) {
 case 131:
 case 130:
  return 1;
 default:
  return 0;
 }
}
