
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int state; struct sock* sk; } ;
struct sock {scalar_t__ sk_state; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int *) ;
 int VAR_8 ;
 struct sock* FUNC_2 (struct sock*,struct socket*) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int ,int *) ;
 long FUNC_6 (long) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (long) ;
 long FUNC_11 (struct sock*,int) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_12(struct socket *VAR_10, struct socket *VAR_11,
       int VAR_12, bool VAR_13)
{
 FUNC_0(VAR_9, VAR_8);
 struct sock *VAR_14 = VAR_10->sk, *VAR_15;
 long VAR_16;
 int VAR_17 = 0;

 FUNC_3(VAR_14, VAR_4);

 if (VAR_14->sk_state != VAR_2) {
  VAR_17 = -VAR_1;
  goto done;
 }

 VAR_16 = FUNC_11(VAR_14, VAR_12 & VAR_3);


 FUNC_1(FUNC_9(VAR_14), &VAR_9);
 while (!(VAR_15 = FUNC_2(VAR_14, VAR_11))) {
  FUNC_7(VAR_6);
  if (!VAR_16) {
   VAR_17 = -VAR_0;
   break;
  }

  FUNC_4(VAR_14);
  VAR_16 = FUNC_6(VAR_16);
  FUNC_3(VAR_14, VAR_4);

  if (VAR_14->sk_state != VAR_2) {
   VAR_17 = -VAR_1;
   break;
  }

  if (FUNC_8(VAR_8)) {
   VAR_17 = FUNC_10(VAR_16);
   break;
  }
 }

 FUNC_7(VAR_7);
 FUNC_5(FUNC_9(VAR_14), &VAR_9);

 if (VAR_17)
  goto done;

 VAR_11->state = VAR_5;

done:
 FUNC_4(VAR_14);
 return VAR_17;
}
