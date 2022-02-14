
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nExtension; int * aExtension; int pVfs; int mutex; } ;
typedef TYPE_1__ sqlite3 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(sqlite3 *VAR_0){
  int VAR_1;
  FUNC_0( FUNC_3(VAR_0->mutex) );
  for(VAR_1=0; VAR_1<VAR_0->nExtension; VAR_1++){
    FUNC_2(VAR_0->pVfs, VAR_0->aExtension[VAR_1]);
  }
  FUNC_1(VAR_0, VAR_0->aExtension);
}
