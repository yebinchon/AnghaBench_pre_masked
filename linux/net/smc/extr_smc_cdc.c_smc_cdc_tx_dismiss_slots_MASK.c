
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_link {int dummy; } ;
struct smc_connection {TYPE_1__* lgr; } ;
struct TYPE_2__ {struct smc_link* lnk; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct smc_link*,int ,int ,int ,unsigned long) ;

void FUNC_1(struct smc_connection *VAR_4)
{
 struct smc_link *VAR_5 = &VAR_4->lgr->lnk[VAR_1];

 FUNC_0(VAR_5, VAR_0,
    VAR_3, VAR_2,
    (unsigned long)VAR_4);
}
