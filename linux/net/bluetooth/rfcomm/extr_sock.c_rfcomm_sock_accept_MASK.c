
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int state; struct sock* sk; } ;
struct sock {scalar_t__ sk_type; scalar_t__ sk_state; } ;


 int FUNC_0 (char*,struct sock*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int *) ;
 struct sock* FUNC_3 (struct sock*,struct socket*) ;
 int VAR_9 ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (long) ;
 long FUNC_10 (struct sock*,int) ;
 int VAR_10 ;
 long FUNC_11 (int *,int ,long) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_12(struct socket *VAR_12, struct socket *VAR_13, int VAR_14,
         bool VAR_15)
{
 FUNC_1(VAR_10, VAR_11);
 struct sock *VAR_16 = VAR_12->sk, *VAR_17;
 long VAR_18;
 int VAR_19 = 0;

 FUNC_4(VAR_16, VAR_5);

 if (VAR_16->sk_type != VAR_6) {
  VAR_19 = -VAR_3;
  goto done;
 }

 VAR_18 = FUNC_10(VAR_16, VAR_14 & VAR_4);

 FUNC_0("sk %p timeo %ld", VAR_16, VAR_18);


 FUNC_2(FUNC_8(VAR_16), &VAR_10);
 while (1) {
  if (VAR_16->sk_state != VAR_0) {
   VAR_19 = -VAR_2;
   break;
  }

  VAR_17 = FUNC_3(VAR_16, VAR_13);
  if (VAR_17)
   break;

  if (!VAR_18) {
   VAR_19 = -VAR_1;
   break;
  }

  if (FUNC_7(VAR_9)) {
   VAR_19 = FUNC_9(VAR_18);
   break;
  }

  FUNC_5(VAR_16);

  VAR_18 = FUNC_11(&VAR_10, VAR_8, VAR_18);

  FUNC_4(VAR_16, VAR_5);
 }
 FUNC_6(FUNC_8(VAR_16), &VAR_10);

 if (VAR_19)
  goto done;

 VAR_13->state = VAR_7;

 FUNC_0("new socket %p", VAR_17);

done:
 FUNC_5(VAR_16);
 return VAR_19;
}
