
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_4__ {scalar_t__ pCache; int szPage; int szExtra; int szSpill; } ;
typedef TYPE_1__ PCache ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(PCache *VAR_0, int VAR_1){
  int VAR_2;
  FUNC_0( VAR_0->pCache!=0 );
  if( VAR_1 ){
    if( VAR_1<0 ){
      VAR_1 = (int)((-1024*(i64)VAR_1)/(VAR_0->szPage+VAR_0->szExtra));
    }
    VAR_0->szSpill = VAR_1;
  }
  VAR_2 = FUNC_1(VAR_0);
  if( VAR_2<VAR_0->szSpill ) VAR_2 = VAR_0->szSpill;
  return VAR_2;
}
