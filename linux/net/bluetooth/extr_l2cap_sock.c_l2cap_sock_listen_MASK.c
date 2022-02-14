
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; scalar_t__ sk_type; int sk_max_ack_backlog; scalar_t__ sk_ack_backlog; } ;
struct l2cap_chan {int mode; void* state; int nesting; } ;
struct TYPE_2__ {struct l2cap_chan* chan; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct sock*,int) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int VAR_8 ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_9, int VAR_10)
{
 struct sock *VAR_11 = VAR_9->sk;
 struct l2cap_chan *VAR_12 = FUNC_2(VAR_11)->chan;
 int VAR_13 = 0;

 FUNC_0("sk %p backlog %d", VAR_11, VAR_10);

 FUNC_3(VAR_11);

 if (VAR_11->sk_state != VAR_0) {
  VAR_13 = -VAR_2;
  goto done;
 }

 if (VAR_11->sk_type != VAR_6 && VAR_11->sk_type != VAR_7) {
  VAR_13 = -VAR_3;
  goto done;
 }

 switch (VAR_12->mode) {
 case 131:
 case 129:
  break;
 case 130:
 case 128:
  if (!VAR_8)
   break;

 default:
  VAR_13 = -VAR_4;
  goto done;
 }

 VAR_11->sk_max_ack_backlog = VAR_10;
 VAR_11->sk_ack_backlog = 0;





 FUNC_1(&VAR_12->nesting, VAR_5);

 VAR_12->state = VAR_1;
 VAR_11->sk_state = VAR_1;

done:
 FUNC_4(VAR_11);
 return VAR_13;
}
