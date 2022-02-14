
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_19__ {scalar_t__ mallocFailed; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_20__ {int nCte; TYPE_1__* a; } ;
typedef TYPE_3__ With ;
typedef int Token ;
struct TYPE_21__ {TYPE_2__* db; } ;
struct TYPE_18__ {char* zName; scalar_t__ zCteErr; int * pCols; int * pSelect; } ;
typedef int Select ;
typedef TYPE_4__ Parse ;
typedef int ExprList ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_4 (TYPE_4__*,char*,char*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 char* FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_8 (char*,char*) ;

With *FUNC_9(
  Parse *VAR_0,
  With *VAR_1,
  Token *VAR_2,
  ExprList *VAR_3,
  Select *VAR_4
){
  sqlite3 *VAR_5 = VAR_0->db;
  With *VAR_6;
  char *VAR_7;



  VAR_7 = FUNC_6(VAR_0->db, VAR_2);
  if( VAR_7 && VAR_1 ){
    int VAR_8;
    for(VAR_8=0; VAR_8<VAR_1->nCte; VAR_8++){
      if( FUNC_8(VAR_7, VAR_1->a[VAR_8].zName)==0 ){
        FUNC_4(VAR_0, "duplicate WITH table name: %s", VAR_7);
      }
    }
  }

  if( VAR_1 ){
    sqlite3_int64 VAR_9 = sizeof(*VAR_1) + (sizeof(VAR_1->a[1]) * VAR_1->nCte);
    VAR_6 = FUNC_3(VAR_5, VAR_1, VAR_9);
  }else{
    VAR_6 = FUNC_2(VAR_5, sizeof(*VAR_1));
  }
  FUNC_0( (VAR_6!=0 && VAR_7!=0) || VAR_5->mallocFailed );

  if( VAR_5->mallocFailed ){
    FUNC_5(VAR_5, VAR_3);
    FUNC_7(VAR_5, VAR_4);
    FUNC_1(VAR_5, VAR_7);
    VAR_6 = VAR_1;
  }else{
    VAR_6->a[VAR_6->nCte].pSelect = VAR_4;
    VAR_6->a[VAR_6->nCte].pCols = VAR_3;
    VAR_6->a[VAR_6->nCte].zName = VAR_7;
    VAR_6->a[VAR_6->nCte].zCteErr = 0;
    VAR_6->nCte++;
  }

  return VAR_6;
}
