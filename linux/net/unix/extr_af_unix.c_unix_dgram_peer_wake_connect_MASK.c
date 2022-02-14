
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct TYPE_4__ {struct sock* private; } ;
struct unix_sock {TYPE_1__ peer_wait; TYPE_2__ peer_wake; } ;
struct sock {int dummy; } ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct unix_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_0, struct sock *VAR_1)
{
 struct unix_sock *VAR_2, *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_3(VAR_0);
 VAR_3 = FUNC_3(VAR_1);
 VAR_4 = 0;
 FUNC_1(&VAR_3->peer_wait.lock);

 if (!VAR_2->peer_wake.private) {
  VAR_2->peer_wake.private = VAR_1;
  FUNC_0(&VAR_3->peer_wait, &VAR_2->peer_wake);

  VAR_4 = 1;
 }

 FUNC_2(&VAR_3->peer_wait.lock);
 return VAR_4;
}
