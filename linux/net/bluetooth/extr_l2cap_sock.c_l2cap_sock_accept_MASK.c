
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
 int VAR_6 ;
 int FUNC_2 (int ,int *) ;
 struct sock* FUNC_3 (struct sock*,struct socket*) ;
 int VAR_7 ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (long) ;
 long FUNC_10 (struct sock*,int) ;
 int VAR_8 ;
 long FUNC_11 (int *,int ,long) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_12(struct socket *VAR_10, struct socket *VAR_11,
        int VAR_12, bool VAR_13)
{
 FUNC_1(VAR_8, VAR_9);
 struct sock *VAR_14 = VAR_10->sk, *VAR_15;
 long VAR_16;
 int VAR_17 = 0;

 FUNC_4(VAR_14, VAR_3);

 VAR_16 = FUNC_10(VAR_14, VAR_12 & VAR_4);

 FUNC_0("sk %p timeo %ld", VAR_14, VAR_16);


 FUNC_2(FUNC_8(VAR_14), &VAR_8);
 while (1) {
  if (VAR_14->sk_state != VAR_0) {
   VAR_17 = -VAR_2;
   break;
  }

  VAR_15 = FUNC_3(VAR_14, VAR_11);
  if (VAR_15)
   break;

  if (!VAR_16) {
   VAR_17 = -VAR_1;
   break;
  }

  if (FUNC_7(VAR_7)) {
   VAR_17 = FUNC_9(VAR_16);
   break;
  }

  FUNC_5(VAR_14);

  VAR_16 = FUNC_11(&VAR_8, VAR_6, VAR_16);

  FUNC_4(VAR_14, VAR_3);
 }
 FUNC_6(FUNC_8(VAR_14), &VAR_8);

 if (VAR_17)
  goto done;

 VAR_11->state = VAR_5;

 FUNC_0("new socket %p", VAR_15);

done:
 FUNC_5(VAR_14);
 return VAR_17;
}
