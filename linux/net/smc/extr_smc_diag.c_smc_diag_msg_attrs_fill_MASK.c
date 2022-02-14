
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct sock {int sk_shutdown; } ;
struct smc_diag_msg {int diag_inode; int diag_uid; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct user_namespace*,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_1, struct sk_buff *VAR_2,
       struct smc_diag_msg *VAR_3,
       struct user_namespace *VAR_4)
{
 if (FUNC_1(VAR_2, VAR_0, VAR_1->sk_shutdown))
  return 1;

 VAR_3->diag_uid = FUNC_0(VAR_4, FUNC_3(VAR_1));
 VAR_3->diag_inode = FUNC_2(VAR_1);
 return 0;
}
