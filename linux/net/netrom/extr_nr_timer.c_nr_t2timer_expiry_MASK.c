
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct sock {int dummy; } ;
struct nr_sock {int condition; struct sock sock; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct nr_sock* FUNC_2 (int ,struct timer_list*,int ) ;
 struct nr_sock* VAR_1 ;
 int FUNC_3 (struct sock*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 struct nr_sock *VAR_4 = FUNC_2(VAR_4, VAR_3, VAR_2);
 struct sock *VAR_5 = &VAR_4->sock;

 FUNC_0(VAR_5);
 if (VAR_4->condition & VAR_0) {
  VAR_4->condition &= ~VAR_0;
  FUNC_3(VAR_5);
 }
 FUNC_1(VAR_5);
}
