
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_28__ {int nDb; scalar_t__ nSqlExec; TYPE_1__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_29__ {scalar_t__ n; } ;
typedef TYPE_3__ Token ;
typedef int Table ;
struct TYPE_31__ {int * pTable; } ;
struct TYPE_30__ {TYPE_2__* db; } ;
struct TYPE_27__ {char* zDbSName; } ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ Index ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*,int *,TYPE_5__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 TYPE_5__* FUNC_6 (TYPE_2__*,char*,char*) ;
 int * FUNC_7 (TYPE_4__*) ;
 int * FUNC_8 (TYPE_4__*,int ,char*,char*) ;
 char* FUNC_9 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,TYPE_3__*,TYPE_3__*,TYPE_3__**) ;
 int FUNC_12 (int *,int ) ;

void FUNC_13(Parse *VAR_2, Token *VAR_3, Token *VAR_4){
  sqlite3 *VAR_5 = VAR_2->db;
  int VAR_6;
  int VAR_7;
  char *VAR_8, *VAR_9;
  Table *VAR_10;
  Index *VAR_11;
  Token *VAR_12;
  Vdbe *VAR_13;



  FUNC_2( FUNC_3(VAR_2->db) );
  if( VAR_1!=FUNC_10(VAR_2) ){
    return;
  }

  FUNC_2( VAR_4!=0 || VAR_3==0 );
  if( VAR_3==0 ){

    for(VAR_7=0; VAR_7<VAR_5->nDb; VAR_7++){
      if( VAR_7==1 ) continue;
      FUNC_0(VAR_2, VAR_7);
    }
  }else if( VAR_4->n==0 && (VAR_6 = FUNC_5(VAR_5, VAR_3))>=0 ){

    FUNC_0(VAR_2, VAR_6);
  }else{

    VAR_6 = FUNC_11(VAR_2, VAR_3, VAR_4, &VAR_12);
    if( VAR_6>=0 ){
      VAR_9 = VAR_4->n ? VAR_5->aDb[VAR_6].zDbSName : 0;
      VAR_8 = FUNC_9(VAR_5, VAR_12);
      if( VAR_8 ){
        if( (VAR_11 = FUNC_6(VAR_5, VAR_8, VAR_9))!=0 ){
          FUNC_1(VAR_2, VAR_11->pTable, VAR_11);
        }else if( (VAR_10 = FUNC_8(VAR_2, 0, VAR_8, VAR_9))!=0 ){
          FUNC_1(VAR_2, VAR_10, 0);
        }
        FUNC_4(VAR_5, VAR_8);
      }
    }
  }
  if( VAR_5->nSqlExec==0 && (VAR_13 = FUNC_7(VAR_2))!=0 ){
    FUNC_12(VAR_13, VAR_0);
  }
}
