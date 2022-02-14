
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int *) ;
 int FUNC_1 (struct sk_buff*,int *) ;
 int FUNC_2 (struct sk_buff*,int *) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static bool
FUNC_4(struct sk_buff *VAR_2, __be16 VAR_3, __be32 *VAR_4,
     u8 *VAR_5, __be32 *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_7 != VAR_0)
  return 0;

 VAR_7 = FUNC_3(VAR_2);
 if (VAR_7 != VAR_1)
  return 0;

 if (!FUNC_1(VAR_2, VAR_6))
  return 0;

 if (!FUNC_2(VAR_2, VAR_5))
  return 0;

 return 1;
}
