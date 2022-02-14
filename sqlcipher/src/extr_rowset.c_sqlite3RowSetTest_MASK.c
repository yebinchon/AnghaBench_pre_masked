
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct RowSetEntry {scalar_t__ v; struct RowSetEntry* pLeft; struct RowSetEntry* pRight; } ;
typedef scalar_t__ sqlite3_int64 ;
struct TYPE_4__ {int rsFlags; int iBatch; struct RowSetEntry* pForest; scalar_t__ pLast; struct RowSetEntry* pEntry; } ;
typedef TYPE_1__ RowSet ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct RowSetEntry* FUNC_1 (TYPE_1__*) ;
 struct RowSetEntry* FUNC_2 (struct RowSetEntry*,struct RowSetEntry*) ;
 struct RowSetEntry* FUNC_3 (struct RowSetEntry*) ;
 void* FUNC_4 (struct RowSetEntry*) ;
 int FUNC_5 (struct RowSetEntry*,struct RowSetEntry**,struct RowSetEntry**) ;

int FUNC_6(RowSet *VAR_2, int VAR_3, sqlite3_int64 VAR_4){
  struct RowSetEntry *VAR_5, *VAR_6;


  FUNC_0( VAR_2!=0 && (VAR_2->rsFlags & VAR_0)==0 );




  if( VAR_3!=VAR_2->iBatch ){
    VAR_5 = VAR_2->pEntry;
    if( VAR_5 ){
      struct RowSetEntry **VAR_7 = &VAR_2->pForest;
      if( (VAR_2->rsFlags & VAR_1)==0 ){

        VAR_5 = FUNC_3(VAR_5);
      }
      for(VAR_6 = VAR_2->pForest; VAR_6; VAR_6=VAR_6->pRight){
        VAR_7 = &VAR_6->pRight;
        if( VAR_6->pLeft==0 ){
          VAR_6->pLeft = FUNC_4(VAR_5);
          break;
        }else{
          struct RowSetEntry *VAR_8, *VAR_9;
          FUNC_5(VAR_6->pLeft, &VAR_8, &VAR_9);
          VAR_6->pLeft = 0;
          VAR_5 = FUNC_2(VAR_8, VAR_5);
        }
      }
      if( VAR_6==0 ){
        *VAR_7 = VAR_6 = FUNC_1(VAR_2);
        if( VAR_6 ){
          VAR_6->v = 0;
          VAR_6->pRight = 0;
          VAR_6->pLeft = FUNC_4(VAR_5);
        }
      }
      VAR_2->pEntry = 0;
      VAR_2->pLast = 0;
      VAR_2->rsFlags |= VAR_1;
    }
    VAR_2->iBatch = VAR_3;
  }




  for(VAR_6 = VAR_2->pForest; VAR_6; VAR_6=VAR_6->pRight){
    VAR_5 = VAR_6->pLeft;
    while( VAR_5 ){
      if( VAR_5->v<VAR_4 ){
        VAR_5 = VAR_5->pRight;
      }else if( VAR_5->v>VAR_4 ){
        VAR_5 = VAR_5->pLeft;
      }else{
        return 1;
      }
    }
  }
  return 0;
}
