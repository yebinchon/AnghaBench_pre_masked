
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sock {int dummy; } ;
struct rose_sock {int state; int condition; TYPE_1__* neighbour; struct sock sock; } ;
struct TYPE_2__ {int use; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 struct rose_sock* FUNC_2 (int ,struct timer_list*,int ) ;
 struct rose_sock* VAR_3 ;
 int FUNC_3 (struct sock*,int ,int,int) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_5)
{
 struct rose_sock *VAR_6 = FUNC_2(VAR_6, VAR_5, VAR_4);
 struct sock *VAR_7 = &VAR_6->sock;

 FUNC_0(VAR_7);
 switch (VAR_6->state) {
 case 131:
 case 128:
  FUNC_6(VAR_7, VAR_1);
  VAR_6->state = 130;
  FUNC_5(VAR_7);
  break;

 case 130:
  VAR_6->neighbour->use--;
  FUNC_3(VAR_7, VAR_0, -1, -1);
  break;

 case 129:
  if (VAR_6->condition & VAR_2) {
   VAR_6->condition &= ~VAR_2;
   FUNC_4(VAR_7);
  }
  break;
 }
 FUNC_1(VAR_7);
}
