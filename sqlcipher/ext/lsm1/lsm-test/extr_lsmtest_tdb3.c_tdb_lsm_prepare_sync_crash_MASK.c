
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_2__ {int nAutoCrash; int bPrepareCrash; } ;
typedef TYPE_1__ LsmDb ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(TestDb *VAR_0, int VAR_1){
  FUNC_0( VAR_1>0 );
  if( FUNC_1(VAR_0) ){
    LsmDb *VAR_2 = (LsmDb *)VAR_0;
    VAR_2->nAutoCrash = VAR_1;
    VAR_2->bPrepareCrash = 1;
  }
}
