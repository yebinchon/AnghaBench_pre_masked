
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dbSize; scalar_t__ eState; } ;
typedef scalar_t__ Pgno ;
typedef TYPE_1__ Pager ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(Pager *VAR_1, Pgno VAR_2){
  FUNC_0( VAR_1->dbSize>=VAR_2 );
  FUNC_0( VAR_1->eState>=VAR_0 );
  VAR_1->dbSize = VAR_2;
}
