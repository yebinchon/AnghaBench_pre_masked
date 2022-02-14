
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static void *FUNC_4(struct sk_buff *VAR_0,
        unsigned int VAR_1, unsigned int VAR_2,
        unsigned int VAR_3)
{
 int VAR_4 = FUNC_2(VAR_0);
 int VAR_5 = VAR_1 + VAR_3;

 if (!FUNC_0(VAR_0, VAR_2 + VAR_4) || (VAR_2 < VAR_5) ||
     FUNC_3(VAR_0, VAR_5 + VAR_4))
  return ((void*)0);
 else
  return (void *)(FUNC_1(VAR_0) + VAR_1);
}
