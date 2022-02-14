
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket_smack {int * smk_packet; struct smack_known* smk_out; struct smack_known* smk_in; } ;
struct sock {struct socket_smack* sk_security; } ;
struct smack_known {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct socket_smack* FUNC_0 (int,int ) ;
 struct smack_known VAR_3 ;
 struct smack_known* FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_4, int VAR_5, gfp_t VAR_6)
{
 struct smack_known *VAR_7 = FUNC_1();
 struct socket_smack *VAR_8;

 VAR_8 = FUNC_0(sizeof(struct socket_smack), VAR_6);
 if (VAR_8 == ((void*)0))
  return -VAR_0;




 if (FUNC_2(VAR_2->flags & VAR_1)) {
  VAR_8->smk_in = &VAR_3;
  VAR_8->smk_out = &VAR_3;
 } else {
  VAR_8->smk_in = VAR_7;
  VAR_8->smk_out = VAR_7;
 }
 VAR_8->smk_packet = ((void*)0);

 VAR_4->sk_security = VAR_8;

 return 0;
}
