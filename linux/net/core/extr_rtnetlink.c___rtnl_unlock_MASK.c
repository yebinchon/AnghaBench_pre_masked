
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct sk_buff* next; } ;


 int FUNC_0 () ;
 struct sk_buff* VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

void FUNC_3(void)
{
 struct sk_buff *VAR_2 = VAR_0;

 VAR_0 = ((void*)0);

 FUNC_2(&VAR_1);

 while (VAR_2) {
  struct sk_buff *VAR_3 = VAR_2->next;

  FUNC_1(VAR_2);
  FUNC_0();
  VAR_2 = VAR_3;
 }
}
