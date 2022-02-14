
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data_len; scalar_t__ end; scalar_t__ tail; int truesize; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;

void FUNC_4(struct sk_buff *VAR_0)
{
 if (VAR_0->data_len) {
  if (VAR_0->data_len > VAR_0->end - VAR_0->tail ||
      FUNC_2(VAR_0))
   return;


  FUNC_1(VAR_0, VAR_0->data_len);
 }







 VAR_0->truesize = FUNC_0(FUNC_3(VAR_0));
}
