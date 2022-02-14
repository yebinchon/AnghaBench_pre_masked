
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; unsigned int len; int csum; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (struct sk_buff*,unsigned int,int,int ) ;

int FUNC_3(struct sk_buff *VAR_1, unsigned int VAR_2)
{
 if (VAR_1->ip_summed == VAR_0) {
  int VAR_3 = VAR_1->len - VAR_2;

  VAR_1->csum = FUNC_1(VAR_1->csum,
        FUNC_2(VAR_1, VAR_2, VAR_3, 0),
        VAR_2);
 }
 return FUNC_0(VAR_1, VAR_2);
}
