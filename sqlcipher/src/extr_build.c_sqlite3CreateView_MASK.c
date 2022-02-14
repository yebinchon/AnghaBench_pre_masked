
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_27__ {scalar_t__ mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_28__ {char* z; int n; } ;
typedef TYPE_2__ Token ;
struct TYPE_29__ {int pCheck; int * pSelect; int pSchema; } ;
typedef TYPE_3__ Table ;
struct TYPE_30__ {scalar_t__ nVar; TYPE_2__ sLastToken; scalar_t__ nErr; TYPE_3__* pNewTable; TYPE_1__* db; } ;
typedef int Select ;
typedef TYPE_4__ Parse ;
typedef int ExprList ;
typedef int DbFixer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,int ,TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 int FUNC_5 (int *,TYPE_4__*,int,char*,TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (char const) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int * FUNC_11 (TYPE_1__*,int *,int ) ;
 int FUNC_12 (TYPE_4__*,TYPE_2__*,TYPE_2__*,int,int,int ,int) ;
 int FUNC_13 (TYPE_4__*,TYPE_2__*,TYPE_2__*,TYPE_2__**) ;

void FUNC_14(
  Parse *VAR_2,
  Token *VAR_3,
  Token *VAR_4,
  Token *VAR_5,
  ExprList *VAR_6,
  Select *VAR_7,
  int VAR_8,
  int VAR_9
){
  Table *VAR_10;
  int VAR_11;
  const char *VAR_12;
  Token VAR_13;
  DbFixer VAR_14;
  Token *VAR_15 = 0;
  int VAR_16;
  sqlite3 *VAR_17 = VAR_2->db;

  if( VAR_2->nVar>0 ){
    FUNC_2(VAR_2, "parameters are not allowed in views");
    goto create_view_fail;
  }
  FUNC_12(VAR_2, VAR_4, VAR_5, VAR_8, 1, 0, VAR_9);
  VAR_10 = VAR_2->pNewTable;
  if( VAR_10==0 || VAR_2->nErr ) goto create_view_fail;
  FUNC_13(VAR_2, VAR_4, VAR_5, &VAR_15);
  VAR_16 = FUNC_9(VAR_17, VAR_10->pSchema);
  FUNC_5(&VAR_14, VAR_2, VAR_16, "view", VAR_15);
  if( FUNC_6(&VAR_14, VAR_7) ) goto create_view_fail;






  if( VAR_1 ){
    VAR_10->pSelect = VAR_7;
    VAR_7 = 0;
  }else{
    VAR_10->pSelect = FUNC_11(VAR_17, VAR_7, VAR_0);
  }
  VAR_10->pCheck = FUNC_4(VAR_17, VAR_6, VAR_0);
  if( VAR_17->mallocFailed ) goto create_view_fail;




  VAR_13 = VAR_2->sLastToken;
  FUNC_0( VAR_13.z[0]!=0 || VAR_13.n==0 );
  if( VAR_13.z[0]!=';' ){
    VAR_13.z += VAR_13.n;
  }
  VAR_13.n = 0;
  VAR_11 = (int)(VAR_13.z - VAR_3->z);
  FUNC_0( VAR_11>0 );
  VAR_12 = VAR_3->z;
  while( FUNC_7(VAR_12[VAR_11-1]) ){ VAR_11--; }
  VAR_13.z = &VAR_12[VAR_11-1];
  VAR_13.n = 1;


  FUNC_1(VAR_2, 0, &VAR_13, 0, 0);

create_view_fail:
  FUNC_10(VAR_17, VAR_7);
  if( VAR_1 ){
    FUNC_8(VAR_2, VAR_6);
  }
  FUNC_3(VAR_17, VAR_6);
  return;
}
