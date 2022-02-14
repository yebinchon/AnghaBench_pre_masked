
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int isMultiWrite; int writeMask; } ;
typedef TYPE_1__ Parse ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

void FUNC_3(Parse *VAR_0, int VAR_1, int VAR_2){
  Parse *VAR_3 = FUNC_2(VAR_0);
  FUNC_1(VAR_0, VAR_2);
  FUNC_0(VAR_3->writeMask, VAR_2);
  VAR_3->isMultiWrite |= VAR_1;
}
