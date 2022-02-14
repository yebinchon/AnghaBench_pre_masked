
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sk_state; } ;
struct smc_sock {TYPE_1__ sk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct smc_sock*,int) ;
 int FUNC_1 (struct smc_sock*,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct smc_sock *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3 < 0) {
  if (VAR_2->sk.sk_state == VAR_1)
   FUNC_2(&VAR_2->sk);
  return VAR_3;
 }
 if (VAR_3 != VAR_0) {
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  if (VAR_4 < 0) {
   if (VAR_2->sk.sk_state == VAR_1)
    FUNC_2(&VAR_2->sk);
   return VAR_4;
  }
 }
 return FUNC_1(VAR_2, VAR_3);
}
