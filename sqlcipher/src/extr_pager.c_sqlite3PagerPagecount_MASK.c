
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ eState; scalar_t__ dbSize; } ;
typedef TYPE_1__ Pager ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

void FUNC_1(Pager *VAR_2, int *VAR_3){
  FUNC_0( VAR_2->eState>=VAR_0 );
  FUNC_0( VAR_2->eState!=VAR_1 );
  *VAR_3 = (int)VAR_2->dbSize;
}
