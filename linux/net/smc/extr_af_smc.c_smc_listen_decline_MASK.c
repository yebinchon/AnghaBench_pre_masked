
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lgr; } ;
struct smc_sock {int fallback_rsn; TYPE_1__ conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct smc_sock*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct smc_sock*) ;
 int FUNC_4 (struct smc_sock*) ;
 int FUNC_5 (struct smc_sock*) ;

__attribute__((used)) static void FUNC_6(struct smc_sock *VAR_2, int VAR_3,
          int VAR_4)
{

 if (VAR_4 == VAR_1)
  FUNC_2(VAR_2->conn.lgr);
 if (VAR_3 < 0) {
  FUNC_4(VAR_2);
  return;
 }
 FUNC_1(&VAR_2->conn);
 FUNC_5(VAR_2);
 VAR_2->fallback_rsn = VAR_3;
 if (VAR_3 && VAR_3 != VAR_0) {
  if (FUNC_0(VAR_2, VAR_3) < 0) {
   FUNC_4(VAR_2);
   return;
  }
 }
 FUNC_3(VAR_2);
}
