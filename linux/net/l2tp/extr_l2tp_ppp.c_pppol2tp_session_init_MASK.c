
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pppol2tp_session {int owner; int sk_lock; } ;
struct l2tp_session {int show; int recv_skb; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 struct pppol2tp_session* FUNC_1 (struct l2tp_session*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct l2tp_session *VAR_4)
{
 struct pppol2tp_session *VAR_5;

 VAR_4->recv_skb = VAR_2;
 if (FUNC_0(VAR_0))
  VAR_4->show = VAR_3;

 VAR_5 = FUNC_1(VAR_4);
 FUNC_2(&VAR_5->sk_lock);
 VAR_5->owner = VAR_1->pid;
}
