
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3 ;
typedef size_t i16 ;
struct TYPE_10__ {TYPE_1__* aCol; } ;
typedef TYPE_4__ Table ;
struct TYPE_11__ {char* zColAff; int nColumn; size_t* aiColumn; TYPE_3__* aColExpr; TYPE_4__* pTable; } ;
struct TYPE_9__ {TYPE_2__* a; } ;
struct TYPE_8__ {int pExpr; } ;
struct TYPE_7__ {char affinity; } ;
typedef TYPE_5__ Index ;


 char VAR_0 ;
 char VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 char FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

const char *FUNC_4(sqlite3 *VAR_4, Index *VAR_5){
  if( !VAR_5->zColAff ){
    int VAR_6;
    Table *VAR_7 = VAR_5->pTable;
    VAR_5->zColAff = (char *)FUNC_1(0, VAR_5->nColumn+1);
    if( !VAR_5->zColAff ){
      FUNC_3(VAR_4);
      return 0;
    }
    for(VAR_6=0; VAR_6<VAR_5->nColumn; VAR_6++){
      i16 VAR_8 = VAR_5->aiColumn[VAR_6];
      if( VAR_8>=0 ){
        VAR_5->zColAff[VAR_6] = VAR_7->aCol[VAR_8].affinity;
      }else if( VAR_8==VAR_3 ){
        VAR_5->zColAff[VAR_6] = VAR_1;
      }else{
        char VAR_9;
        FUNC_0( VAR_8==VAR_2 );
        FUNC_0( VAR_5->aColExpr!=0 );
        VAR_9 = FUNC_2(VAR_5->aColExpr->a[VAR_6].pExpr);
        if( VAR_9==0 ) VAR_9 = VAR_0;
        VAR_5->zColAff[VAR_6] = VAR_9;
      }
    }
    VAR_5->zColAff[VAR_6] = 0;
  }

  return VAR_5->zColAff;
}
