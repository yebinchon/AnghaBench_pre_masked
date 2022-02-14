
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VdbeCursor ;
struct TYPE_4__ {int nCursor; int ** apCsr; } ;
typedef TYPE_1__ Vdbe ;


 int FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_1(Vdbe *VAR_0){
  if( VAR_0->apCsr ){
    int VAR_1;
    for(VAR_1=0; VAR_1<VAR_0->nCursor; VAR_1++){
      VdbeCursor *VAR_2 = VAR_0->apCsr[VAR_1];
      if( VAR_2 ){
        FUNC_0(VAR_0, VAR_2);
        VAR_0->apCsr[VAR_1] = 0;
      }
    }
  }
}
