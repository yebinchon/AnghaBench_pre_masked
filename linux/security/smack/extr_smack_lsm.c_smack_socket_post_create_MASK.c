
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket_smack {int * smk_out; int * smk_in; } ;
struct socket {TYPE_1__* sk; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {struct socket_smack* sk_security; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_5, int VAR_6,
        int VAR_7, int VAR_8, int VAR_9)
{
 struct socket_smack *VAR_10;

 if (VAR_5->sk == ((void*)0))
  return 0;




 if (FUNC_1(VAR_3->flags & VAR_1)) {
  VAR_10 = VAR_5->sk->sk_security;
  VAR_10->smk_in = &VAR_4;
  VAR_10->smk_out = &VAR_4;
 }

 if (VAR_6 != VAR_0)
  return 0;



 return FUNC_0(VAR_5->sk, VAR_2);
}
