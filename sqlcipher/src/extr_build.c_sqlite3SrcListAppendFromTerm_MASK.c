
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct SrcList_item {scalar_t__ zName; int * pUsing; int * pOn; int * pSelect; int zAlias; } ;
typedef int sqlite3 ;
struct TYPE_20__ {scalar_t__ n; scalar_t__ z; } ;
typedef TYPE_1__ Token ;
struct TYPE_22__ {int * db; } ;
struct TYPE_21__ {int nSrc; struct SrcList_item* a; } ;
typedef TYPE_2__ SrcList ;
typedef int Select ;
typedef TYPE_3__ Parse ;
typedef int IdList ;
typedef int Expr ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,char*,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*,scalar_t__,TYPE_1__*) ;
 int FUNC_7 (int *,int *) ;
 TYPE_2__* FUNC_8 (TYPE_3__*,TYPE_2__*,TYPE_1__*,TYPE_1__*) ;

SrcList *FUNC_9(
  Parse *VAR_1,
  SrcList *VAR_2,
  Token *VAR_3,
  Token *VAR_4,
  Token *VAR_5,
  Select *VAR_6,
  Expr *VAR_7,
  IdList *VAR_8
){
  struct SrcList_item *VAR_9;
  sqlite3 *VAR_10 = VAR_1->db;
  if( !VAR_2 && (VAR_7 || VAR_8) ){
    FUNC_2(VAR_1, "a JOIN clause is required before %s",
      (VAR_7 ? "ON" : "USING")
    );
    goto append_from_error;
  }
  VAR_2 = FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4);
  if( VAR_2==0 ){
    goto append_from_error;
  }
  FUNC_1( VAR_2->nSrc>0 );
  VAR_9 = &VAR_2->a[VAR_2->nSrc-1];
  FUNC_1( (VAR_3==0)==(VAR_4==0) );
  FUNC_1( VAR_9->zName==0 || VAR_4!=0 );
  if( VAR_0 && VAR_9->zName ){
    Token *VAR_11 = (FUNC_0(VAR_4) && VAR_4->z) ? VAR_4 : VAR_3;
    FUNC_6(VAR_1, VAR_9->zName, VAR_11);
  }
  FUNC_1( VAR_5!=0 );
  if( VAR_5->n ){
    VAR_9->zAlias = FUNC_5(VAR_10, VAR_5);
  }
  VAR_9->pSelect = VAR_6;
  VAR_9->pOn = VAR_7;
  VAR_9->pUsing = VAR_8;
  return VAR_2;

 append_from_error:
  FUNC_1( VAR_2==0 );
  FUNC_3(VAR_10, VAR_7);
  FUNC_4(VAR_10, VAR_8);
  FUNC_7(VAR_10, VAR_6);
  return 0;
}
