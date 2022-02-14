
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_connection {int send_lock; TYPE_1__* lgr; } ;
struct TYPE_2__ {scalar_t__ is_smcd; } ;


 int FUNC_0 (struct smc_connection*) ;
 int FUNC_1 (struct smc_connection*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct smc_connection *VAR_0)
{
 int VAR_1;

 if (VAR_0->lgr->is_smcd) {
  FUNC_2(&VAR_0->send_lock);
  VAR_1 = FUNC_0(VAR_0);
  FUNC_3(&VAR_0->send_lock);
 } else {
  VAR_1 = FUNC_1(VAR_0);
 }

 return VAR_1;
}
