
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* lgr; } ;
struct smc_sock {TYPE_2__ conn; } ;
struct smc_link {int dummy; } ;
struct smc_clc_msg_accept_confirm {int dummy; } ;
struct TYPE_3__ {struct smc_link* lnk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct smc_link*) ;
 int FUNC_1 (struct smc_link*,struct smc_clc_msg_accept_confirm*) ;
 int FUNC_2 (struct smc_sock*,int,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,struct smc_clc_msg_accept_confirm*) ;
 int FUNC_4 (struct smc_sock*) ;

__attribute__((used)) static int FUNC_5(struct smc_sock *VAR_4,
      struct smc_clc_msg_accept_confirm *VAR_5,
      int VAR_6)
{
 struct smc_link *VAR_7 = &VAR_4->conn.lgr->lnk[VAR_3];
 int VAR_8 = 0;

 if (VAR_6 == VAR_2)
  FUNC_1(VAR_7, VAR_5);

 if (FUNC_3(&VAR_4->conn, VAR_5)) {
  VAR_8 = VAR_1;
  goto decline;
 }

 if (VAR_6 == VAR_2) {
  if (FUNC_0(VAR_7)) {
   VAR_8 = VAR_0;
   goto decline;
  }

  VAR_8 = FUNC_4(VAR_4);
  if (VAR_8)
   goto decline;
 }
 return 0;

decline:
 FUNC_2(VAR_4, VAR_8, VAR_6);
 return VAR_8;
}
