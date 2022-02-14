
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ bCoreMutex; } ;
struct TYPE_6__ {void* (* xTask ) (void*) ;int done; void* pOut; int tid; void* pIn; } ;
typedef TYPE_1__ SQLiteThread ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int *,int ,void* (*) (void*),void*) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_4__ VAR_2 ;
 TYPE_1__* FUNC_4 (int) ;

int FUNC_5(
  SQLiteThread **VAR_3,
  void *(*VAR_4)(void*),
  void *VAR_5
){
  SQLiteThread *VAR_6;
  int VAR_7;

  FUNC_0( VAR_3!=0 );
  FUNC_0( VAR_4!=0 );

  FUNC_0( VAR_2.bCoreMutex!=0 );

  *VAR_3 = 0;
  VAR_6 = FUNC_4(sizeof(*VAR_6));
  if( VAR_6==0 ) return VAR_0;
  FUNC_1(VAR_6, 0, sizeof(*VAR_6));
  VAR_6->xTask = VAR_4;
  VAR_6->pIn = VAR_5;




  if( FUNC_3(200) ){
    VAR_7 = 1;
  }else{
    VAR_7 = FUNC_2(&VAR_6->tid, 0, VAR_4, VAR_5);
  }
  if( VAR_7 ){
    VAR_6->done = 1;
    VAR_6->pOut = VAR_4(VAR_5);
  }
  *VAR_3 = VAR_6;
  return VAR_1;
}
