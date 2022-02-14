
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; TYPE_1__* sk_prot; int (* sk_state_change ) (struct sock*) ;int sk_shutdown; } ;
struct smc_sock {int conn; int use_fallback; scalar_t__ clcsock; struct sock sk; } ;
struct TYPE_2__ {int (* unhash ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct smc_sock*) ;
 int FUNC_4 (struct smc_sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct smc_sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,int ) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;

__attribute__((used)) static int FUNC_11(struct smc_sock *VAR_6)
{
 struct sock *VAR_7 = &VAR_6->sk;
 int VAR_8 = 0;

 if (!VAR_6->use_fallback) {
  VAR_8 = FUNC_4(VAR_6);
  FUNC_8(VAR_7, VAR_5);
  VAR_7->sk_shutdown |= VAR_0;
 } else {
  if (VAR_7->sk_state != VAR_4 && VAR_7->sk_state != VAR_3)
   FUNC_7(VAR_7);
  if (VAR_7->sk_state == VAR_4) {

   VAR_8 = FUNC_0(VAR_6->clcsock, VAR_1);
  }
  VAR_7->sk_state = VAR_2;
  VAR_7->sk_state_change(VAR_7);
  FUNC_6(VAR_6);
 }

 VAR_7->sk_prot->unhash(VAR_7);

 if (VAR_7->sk_state == VAR_2) {
  if (VAR_6->clcsock) {
   FUNC_2(VAR_7);
   FUNC_3(VAR_6);
   FUNC_1(VAR_7);
  }
  if (!VAR_6->use_fallback)
   FUNC_5(&VAR_6->conn);
 }

 return VAR_8;
}
