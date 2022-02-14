
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_err_soft; } ;
struct atm_vcc {int flags; } ;


 struct atm_vcc* FUNC_0 (struct socket*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 int VAR_4 ;
 int FUNC_8 (struct atm_vcc*,int ,int *,int *,int *,int *,int) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (int ,int *) ;
 int VAR_5 ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static int FUNC_12(struct socket *VAR_6, int VAR_7)
{
 FUNC_1(VAR_5);
 struct sock *VAR_8 = VAR_6->sk;
 struct atm_vcc *VAR_9 = FUNC_0(VAR_6);
 int VAR_10;

 FUNC_3(VAR_8);
 FUNC_7(VAR_0, &VAR_9->flags);
 FUNC_8(VAR_9, VAR_3, ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_7);
 for (;;) {
  FUNC_4(FUNC_9(VAR_8), &VAR_5, VAR_2);
  if (!FUNC_10(VAR_0, &VAR_9->flags) || !VAR_4)
   break;
  FUNC_6();
 }
 FUNC_2(FUNC_9(VAR_8), &VAR_5);
 if (!VAR_4) {
  VAR_10 = -VAR_1;
  goto out;
 }
 VAR_10 = -FUNC_11(&VAR_8->sk_err_soft, 0);
out:
 FUNC_5(VAR_8);
 return VAR_10;
}
