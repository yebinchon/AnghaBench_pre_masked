
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {scalar_t__ type; int state; struct sock* sk; } ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {struct sock* sk; } ;
struct TYPE_2__ {int peer_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct sock*,int ,int,int*) ;
 int FUNC_2 (struct sock*,struct socket*) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct socket*,struct socket*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct socket *VAR_7, struct socket *VAR_8, int VAR_9,
         bool VAR_10)
{
 struct sock *VAR_11 = VAR_7->sk;
 struct sock *VAR_12;
 struct sk_buff *VAR_13;
 int VAR_14;

 VAR_14 = -VAR_1;
 if (VAR_7->type != VAR_4 && VAR_7->type != VAR_3)
  goto out;

 VAR_14 = -VAR_0;
 if (VAR_11->sk_state != VAR_6)
  goto out;





 VAR_13 = FUNC_1(VAR_11, 0, VAR_9&VAR_2, &VAR_14);
 if (!VAR_13) {

  if (VAR_14 == 0)
   VAR_14 = -VAR_0;
  goto out;
 }

 VAR_12 = VAR_13->sk;
 FUNC_0(VAR_11, VAR_13);
 FUNC_7(&FUNC_3(VAR_11)->peer_wait);


 FUNC_5(VAR_12);
 VAR_8->state = VAR_5;
 FUNC_4(VAR_7, VAR_8);
 FUNC_2(VAR_12, VAR_8);
 FUNC_6(VAR_12);
 return 0;

out:
 return VAR_14;
}
