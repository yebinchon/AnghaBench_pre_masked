
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int function; } ;
struct sock {TYPE_1__ sk_timer; } ;
struct nr_sock {int idletimer; int t4timer; int t2timer; int t1timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nr_sock* FUNC_0 (struct sock*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int ) ;

void FUNC_2(struct sock *VAR_5)
{
 struct nr_sock *VAR_6 = FUNC_0(VAR_5);

 FUNC_1(&VAR_6->t1timer, VAR_2, 0);
 FUNC_1(&VAR_6->t2timer, VAR_3, 0);
 FUNC_1(&VAR_6->t4timer, VAR_4, 0);
 FUNC_1(&VAR_6->idletimer, VAR_1, 0);


 VAR_5->sk_timer.function = VAR_0;
}
