
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int state; struct sock* sk; } ;
struct sock {scalar_t__ sk_state; } ;


 int FUNC_0 (char*,struct sock*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int *) ;
 struct sock* FUNC_3 (struct sock*,struct socket*) ;
 int VAR_6 ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (long) ;
 long FUNC_10 (struct sock*,int) ;
 int VAR_7 ;
 long FUNC_11 (int *,int ,long) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_12(struct socket *VAR_9, struct socket *VAR_10,
      int VAR_11, bool VAR_12)
{
 FUNC_1(VAR_7, VAR_8);
 struct sock *VAR_13 = VAR_9->sk, *VAR_14;
 long VAR_15;
 int VAR_16 = 0;

 FUNC_4(VAR_13);

 VAR_15 = FUNC_10(VAR_13, VAR_11 & VAR_3);

 FUNC_0("sk %p timeo %ld", VAR_13, VAR_15);


 FUNC_2(FUNC_8(VAR_13), &VAR_7);
 while (1) {
  if (VAR_13->sk_state != VAR_0) {
   VAR_16 = -VAR_2;
   break;
  }

  VAR_14 = FUNC_3(VAR_13, VAR_10);
  if (VAR_14)
   break;

  if (!VAR_15) {
   VAR_16 = -VAR_1;
   break;
  }

  if (FUNC_7(VAR_6)) {
   VAR_16 = FUNC_9(VAR_15);
   break;
  }

  FUNC_5(VAR_13);

  VAR_15 = FUNC_11(&VAR_7, VAR_5, VAR_15);
  FUNC_4(VAR_13);
 }
 FUNC_6(FUNC_8(VAR_13), &VAR_7);

 if (VAR_16)
  goto done;

 VAR_10->state = VAR_4;

 FUNC_0("new socket %p", VAR_14);

done:
 FUNC_5(VAR_13);
 return VAR_16;
}
