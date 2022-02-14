
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tid; void* pOut; scalar_t__ done; } ;
typedef TYPE_1__ SQLiteThread ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,void**) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(SQLiteThread *VAR_3, void **VAR_4){
  int VAR_5;

  FUNC_1( VAR_4!=0 );
  if( FUNC_0(VAR_3==0) ) return VAR_1;
  if( VAR_3->done ){
    *VAR_4 = VAR_3->pOut;
    VAR_5 = VAR_2;
  }else{
    VAR_5 = FUNC_2(VAR_3->tid, VAR_4) ? VAR_0 : VAR_2;
  }
  FUNC_3(VAR_3);
  return VAR_5;
}
