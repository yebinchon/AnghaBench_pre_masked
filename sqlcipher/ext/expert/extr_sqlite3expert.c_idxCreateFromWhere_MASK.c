
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sqlite3expert ;
struct TYPE_11__ {struct TYPE_11__* pLink; struct TYPE_11__* pNext; } ;
struct TYPE_10__ {TYPE_2__* pRange; TYPE_2__* pEq; } ;
typedef TYPE_1__ IdxScan ;
typedef TYPE_2__ IdxConstraint ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(
  sqlite3expert *VAR_1,
  IdxScan *VAR_2,
  IdxConstraint *VAR_3
){
  IdxConstraint *VAR_4 = 0;
  IdxConstraint *VAR_5;
  int VAR_6;


  for(VAR_5=VAR_2->pEq; VAR_5; VAR_5=VAR_5->pNext){
    if( !FUNC_2(VAR_4, VAR_5) && !FUNC_2(VAR_3, VAR_5) ){
      VAR_5->pLink = VAR_4;
      VAR_4 = VAR_5;
    }
  }



  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_4, VAR_3);



  if( VAR_3==0 ){
    for(VAR_5=VAR_2->pRange; VAR_6==VAR_0 && VAR_5; VAR_5=VAR_5->pNext){
      FUNC_0( VAR_5->pLink==0 );
      if( !FUNC_2(VAR_4, VAR_5) && !FUNC_2(VAR_3, VAR_5) ){
        VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_4, VAR_5);
      }
    }
  }

  return VAR_6;
}
