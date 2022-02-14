
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Table ;
struct TYPE_5__ {int nVtabLock; int db; int ** apVtabLock; } ;
typedef TYPE_1__ Parse ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int ** FUNC_4 (int **,int) ;

void FUNC_5(Parse *VAR_0, Table *VAR_1){
  Parse *VAR_2 = FUNC_3(VAR_0);
  int VAR_3, VAR_4;
  Table **VAR_5;

  FUNC_1( FUNC_0(VAR_1) );
  for(VAR_3=0; VAR_3<VAR_2->nVtabLock; VAR_3++){
    if( VAR_1==VAR_2->apVtabLock[VAR_3] ) return;
  }
  VAR_4 = (VAR_2->nVtabLock+1)*sizeof(VAR_2->apVtabLock[0]);
  VAR_5 = FUNC_4(VAR_2->apVtabLock, VAR_4);
  if( VAR_5 ){
    VAR_2->apVtabLock = VAR_5;
    VAR_2->apVtabLock[VAR_2->nVtabLock++] = VAR_1;
  }else{
    FUNC_2(VAR_2->db);
  }
}
