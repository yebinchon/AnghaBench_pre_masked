
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ynVar ;
typedef scalar_t__ u32 ;
struct TYPE_11__ {int* aLimit; } ;
typedef TYPE_2__ sqlite3 ;
typedef int i64 ;
struct TYPE_10__ {char* zToken; } ;
struct TYPE_13__ {int iColumn; TYPE_1__ u; } ;
struct TYPE_12__ {int nVar; int pVList; TYPE_2__* db; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,int*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_2__*,int ,char const*,scalar_t__,int) ;
 scalar_t__ FUNC_6 (int ,char const*,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int) ;
 int FUNC_8 (int) ;

void FUNC_9(Parse *VAR_5, Expr *VAR_6, u32 VAR_7){
  sqlite3 *VAR_8 = VAR_5->db;
  const char *VAR_9;
  ynVar VAR_10;

  if( VAR_6==0 ) return;
  FUNC_1( !FUNC_0(VAR_6, VAR_0|VAR_1|VAR_2) );
  VAR_9 = VAR_6->u.zToken;
  FUNC_1( VAR_9!=0 );
  FUNC_1( VAR_9[0]!=0 );
  FUNC_1( VAR_7==(u32)FUNC_4(VAR_9) );
  if( VAR_9[1]==0 ){

    FUNC_1( VAR_9[0]=='?' );
    VAR_10 = (ynVar)(++VAR_5->nVar);
  }else{
    int VAR_11 = 0;
    if( VAR_9[0]=='?' ){


      i64 VAR_12;
      int VAR_13;
      if( VAR_7==2 ){
        VAR_12 = VAR_9[1]-'0';
        VAR_13 = 1;
      }else{
        VAR_13 = 0==FUNC_2(&VAR_9[1], &VAR_12, VAR_7-1, VAR_4);
      }
      FUNC_8( VAR_12==0 );
      FUNC_8( VAR_12==1 );
      FUNC_8( VAR_12==VAR_8->aLimit[VAR_3]-1 );
      FUNC_8( VAR_12==VAR_8->aLimit[VAR_3] );
      if( VAR_13==0 || VAR_12<1 || VAR_12>VAR_8->aLimit[VAR_3] ){
        FUNC_3(VAR_5, "variable number must be between ?1 and ?%d",
            VAR_8->aLimit[VAR_3]);
        return;
      }
      VAR_10 = (ynVar)VAR_12;
      if( VAR_10>VAR_5->nVar ){
        VAR_5->nVar = (int)VAR_10;
        VAR_11 = 1;
      }else if( FUNC_7(VAR_5->pVList, VAR_10)==0 ){
        VAR_11 = 1;
      }
    }else{




      VAR_10 = (ynVar)FUNC_6(VAR_5->pVList, VAR_9, VAR_7);
      if( VAR_10==0 ){
        VAR_10 = (ynVar)(++VAR_5->nVar);
        VAR_11 = 1;
      }
    }
    if( VAR_11 ){
      VAR_5->pVList = FUNC_5(VAR_8, VAR_5->pVList, VAR_9, VAR_7, VAR_10);
    }
  }
  VAR_6->iColumn = VAR_10;
  if( VAR_10>VAR_8->aLimit[VAR_3] ){
    FUNC_3(VAR_5, "too many SQL variables");
  }
}
