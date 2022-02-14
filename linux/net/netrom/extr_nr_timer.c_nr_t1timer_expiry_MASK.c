
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sock {int dummy; } ;
struct nr_sock {int state; int n2count; int n2; struct sock sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct nr_sock* FUNC_2 (int ,struct timer_list*,int ) ;
 struct nr_sock* VAR_3 ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_5)
{
 struct nr_sock *VAR_6 = FUNC_2(VAR_6, VAR_5, VAR_4);
 struct sock *VAR_7 = &VAR_6->sock;

 FUNC_0(VAR_7);
 switch (VAR_6->state) {
 case 130:
  if (VAR_6->n2count == VAR_6->n2) {
   FUNC_3(VAR_7, VAR_0);
   FUNC_1(VAR_7);
   return;
  } else {
   VAR_6->n2count++;
   FUNC_6(VAR_7, VAR_1);
  }
  break;

 case 129:
  if (VAR_6->n2count == VAR_6->n2) {
   FUNC_3(VAR_7, VAR_0);
   FUNC_1(VAR_7);
   return;
  } else {
   VAR_6->n2count++;
   FUNC_6(VAR_7, VAR_2);
  }
  break;

 case 128:
  if (VAR_6->n2count == VAR_6->n2) {
   FUNC_3(VAR_7, VAR_0);
   FUNC_1(VAR_7);
   return;
  } else {
   VAR_6->n2count++;
   FUNC_4(VAR_7);
  }
  break;
 }

 FUNC_5(VAR_7);
 FUNC_1(VAR_7);
}
