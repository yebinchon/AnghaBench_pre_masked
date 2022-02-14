
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_atmsvc {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_err_soft; } ;
struct atm_vcc {int flags; } ;


 struct atm_vcc* FUNC_0 (struct socket*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *) ;
 int VAR_5 ;
 int FUNC_9 (struct atm_vcc*,int ,int *,int *,struct sockaddr_atmsvc*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (int ,int *) ;
 int VAR_6 ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(struct socket *VAR_7, struct sockaddr *VAR_8,
   int VAR_9, int VAR_10)
{
 FUNC_1(VAR_6);
 struct sock *VAR_11 = VAR_7->sk;
 struct atm_vcc *VAR_12 = FUNC_0(VAR_7);
 int VAR_13;

 FUNC_3(VAR_11);
 FUNC_8(VAR_0, &VAR_12->flags);
 FUNC_9(VAR_12, VAR_4, ((void*)0), ((void*)0),
   (struct sockaddr_atmsvc *) VAR_8);
 if (VAR_10 & VAR_2) {
  VAR_13 = -VAR_1;
  goto out;
 }
 FUNC_4("added wait queue\n");
 for (;;) {
  FUNC_5(FUNC_10(VAR_11), &VAR_6, VAR_3);
  if (!FUNC_11(VAR_0, &VAR_12->flags) || !VAR_5)
   break;
  FUNC_7();
 }
 FUNC_2(FUNC_10(VAR_11), &VAR_6);
 VAR_13 = -FUNC_12(&VAR_11->sk_err_soft, 0);
out:
 FUNC_6(VAR_11);
 return VAR_13;
}
