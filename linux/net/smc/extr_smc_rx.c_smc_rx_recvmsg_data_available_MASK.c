
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_connection {scalar_t__ urg_state; } ;
struct smc_sock {struct smc_connection conn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct smc_connection*) ;
 int FUNC_1 (struct smc_sock*,int ) ;

__attribute__((used)) static bool FUNC_2(struct smc_sock *VAR_1)
{
 struct smc_connection *VAR_2 = &VAR_1->conn;

 if (FUNC_0(VAR_2))
  return 1;
 else if (VAR_2->urg_state == VAR_0)

  FUNC_1(VAR_1, 0);
 return 0;
}
