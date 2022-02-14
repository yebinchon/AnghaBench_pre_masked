
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
typedef int __le16 ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline bool FUNC_7(struct sk_buff *VAR_0)
{
 __le16 VAR_1 = FUNC_0(VAR_0);


 if (!FUNC_1(VAR_1) ||
     !FUNC_2(VAR_1, VAR_0))
  return 0;


 if (FUNC_6(!VAR_0->len))
  return 0;

 if (FUNC_3(*FUNC_5(VAR_0)) ||
     FUNC_4(*FUNC_5(VAR_0)))
  return 0;

 return 1;
}
