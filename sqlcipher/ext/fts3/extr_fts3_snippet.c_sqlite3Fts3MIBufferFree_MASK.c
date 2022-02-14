
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* aRef; } ;
typedef TYPE_1__ MatchinfoBuffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(MatchinfoBuffer *VAR_0){
  if( VAR_0 ){
    FUNC_0( VAR_0->aRef[0]==1 );
    VAR_0->aRef[0] = 0;
    if( VAR_0->aRef[0]==0 && VAR_0->aRef[1]==0 && VAR_0->aRef[2]==0 ){
      FUNC_1(VAR_0);
    }
  }
}
