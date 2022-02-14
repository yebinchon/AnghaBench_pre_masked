
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_vacuums; scalar_t__ num_vacuums; scalar_t__ cycle_ctr; } ;
typedef TYPE_1__ BTVacInfo ;
typedef scalar_t__ BTCycleId ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*,int ,int*) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;

void
FUNC_4(void)
{
 bool VAR_3;

 VAR_2 = (BTVacInfo *) FUNC_2("BTree Vacuum State",
             FUNC_1(),
             &VAR_3);

 if (!VAR_0)
 {

  FUNC_0(!VAR_3);






  VAR_2->cycle_ctr = (BTCycleId) FUNC_3(((void*)0));

  VAR_2->num_vacuums = 0;
  VAR_2->max_vacuums = VAR_1;
 }
 else
  FUNC_0(VAR_3);
}
