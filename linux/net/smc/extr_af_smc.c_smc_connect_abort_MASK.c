
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* lgr; } ;
struct smc_sock {scalar_t__ connect_nonblock; TYPE_2__ conn; } ;
struct TYPE_3__ {scalar_t__ is_smcd; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct smc_sock *VAR_3, int VAR_4,
        int VAR_5)
{
 if (VAR_5 == VAR_0)
  FUNC_2(VAR_3->conn.lgr);
 if (VAR_3->conn.lgr->is_smcd)

  FUNC_0(&VAR_2);
 else
  FUNC_0(&VAR_1);

 FUNC_1(&VAR_3->conn);
 VAR_3->connect_nonblock = 0;
 return VAR_4;
}
