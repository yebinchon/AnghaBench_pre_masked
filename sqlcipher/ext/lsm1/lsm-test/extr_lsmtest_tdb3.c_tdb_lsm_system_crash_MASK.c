
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_3__ {int bCrashed; } ;
typedef TYPE_1__ LsmDb ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(TestDb *VAR_0){
  if( FUNC_1(VAR_0) ){
    LsmDb *VAR_1 = (LsmDb *)VAR_0;
    VAR_1->bCrashed = 1;
    FUNC_0(VAR_1);
  }
}
