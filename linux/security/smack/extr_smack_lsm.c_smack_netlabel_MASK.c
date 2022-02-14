
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_smack {struct smack_known* smk_out; } ;
struct sock {int sk_family; struct socket_smack* sk_security; } ;
struct smack_known {int smk_netlabel; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ,int *) ;
 struct smack_known* VAR_1 ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_2, int VAR_3)
{
 struct smack_known *VAR_4;
 struct socket_smack *VAR_5 = VAR_2->sk_security;
 int VAR_6 = 0;
 FUNC_2();
 FUNC_0(VAR_2);

 if (VAR_5->smk_out == VAR_1 ||
     VAR_3 == VAR_0)
  FUNC_4(VAR_2);
 else {
  VAR_4 = VAR_5->smk_out;
  VAR_6 = FUNC_5(VAR_2, VAR_2->sk_family, &VAR_4->smk_netlabel);
 }

 FUNC_1(VAR_2);
 FUNC_3();

 return VAR_6;
}
