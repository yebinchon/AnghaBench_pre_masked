
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;


 int FUNC_0 (struct sk_buff*,unsigned int) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0,
    unsigned int VAR_1,
    unsigned int VAR_2)
{
 if (VAR_1)
  FUNC_1(VAR_0, VAR_0->len - VAR_1);
 FUNC_0(VAR_0, VAR_2);
}
