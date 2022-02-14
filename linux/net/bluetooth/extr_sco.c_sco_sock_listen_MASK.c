
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; scalar_t__ sk_type; int sk_max_ack_backlog; scalar_t__ sk_ack_backlog; } ;
typedef int bdaddr_t ;
struct TYPE_4__ {int src; } ;
struct TYPE_3__ {int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct sock*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 TYPE_2__* FUNC_4 (struct sock*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct socket *VAR_7, int VAR_8)
{
 struct sock *VAR_9 = VAR_7->sk;
 bdaddr_t *VAR_10 = &FUNC_4(VAR_9)->src;
 int VAR_11 = 0;

 FUNC_0("sk %p backlog %d", VAR_9, VAR_8);

 FUNC_2(VAR_9);

 if (VAR_9->sk_state != VAR_0) {
  VAR_11 = -VAR_3;
  goto done;
 }

 if (VAR_9->sk_type != VAR_5) {
  VAR_11 = -VAR_4;
  goto done;
 }

 FUNC_5(&VAR_6.lock);

 if (FUNC_1(VAR_10)) {
  VAR_11 = -VAR_2;
  goto unlock;
 }

 VAR_9->sk_max_ack_backlog = VAR_8;
 VAR_9->sk_ack_backlog = 0;

 VAR_9->sk_state = VAR_1;

unlock:
 FUNC_6(&VAR_6.lock);

done:
 FUNC_3(VAR_9);
 return VAR_11;
}
