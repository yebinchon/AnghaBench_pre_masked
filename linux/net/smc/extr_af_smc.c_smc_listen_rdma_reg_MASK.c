
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rmb_desc; TYPE_1__* lgr; } ;
struct smc_sock {TYPE_2__ conn; } ;
struct smc_link {int dummy; } ;
struct TYPE_3__ {struct smc_link* lnk; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct smc_link*,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct smc_sock *VAR_3, int VAR_4)
{
 struct smc_link *VAR_5 = &VAR_3->conn.lgr->lnk[VAR_2];

 if (VAR_4 != VAR_1) {
  if (FUNC_0(VAR_5, VAR_3->conn.rmb_desc, 1))
   return VAR_0;
 }
 FUNC_1(&VAR_3->conn);

 return 0;
}
