
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_7__ {struct TYPE_7__* pRight; int v; } ;
struct TYPE_6__ {scalar_t__ pForest; int rsFlags; TYPE_4__* pEntry; } ;
typedef TYPE_1__ RowSet ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_4__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(RowSet *VAR_2, i64 *VAR_3){
  FUNC_0( VAR_2!=0 );
  FUNC_0( VAR_2->pForest==0 );


  if( (VAR_2->rsFlags & VAR_0)==0 ){
    if( (VAR_2->rsFlags & VAR_1)==0 ){
      VAR_2->pEntry = FUNC_1(VAR_2->pEntry);
    }
    VAR_2->rsFlags |= VAR_1|VAR_0;
  }


  if( VAR_2->pEntry ){
    *VAR_3 = VAR_2->pEntry->v;
    VAR_2->pEntry = VAR_2->pEntry->pRight;
    if( VAR_2->pEntry==0 ){

      FUNC_2(VAR_2);
    }
    return 1;
  }else{
    return 0;
  }
}
