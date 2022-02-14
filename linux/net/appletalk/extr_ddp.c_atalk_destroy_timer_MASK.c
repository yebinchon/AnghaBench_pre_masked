
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct sock {TYPE_1__ sk_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct sock* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 struct sock* VAR_2 ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int VAR_3 ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_4)
{
 struct sock *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);

 if (FUNC_2(VAR_5)) {
  VAR_5->sk_timer.expires = VAR_1 + VAR_0;
  FUNC_0(&VAR_5->sk_timer);
 } else
  FUNC_3(VAR_5);
}
