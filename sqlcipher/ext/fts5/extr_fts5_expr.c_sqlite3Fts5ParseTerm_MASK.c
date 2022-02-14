
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int sqlite3_int64 ;
struct TYPE_14__ {int rc; TYPE_4__* pPhrase; } ;
typedef TYPE_2__ TokenCtx ;
struct TYPE_16__ {int nTerm; TYPE_1__* aTerm; } ;
struct TYPE_15__ {int rc; int nPhrase; TYPE_4__** apPhrase; int * pConfig; } ;
struct TYPE_13__ {scalar_t__ bPrefix; } ;
typedef int Fts5Token ;
typedef TYPE_3__ Fts5Parse ;
typedef TYPE_4__ Fts5ExprPhrase ;
typedef int Fts5Config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *,char**) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (char*) ;
 TYPE_4__* FUNC_4 (int*,int) ;
 int FUNC_5 (int *,int,char*,int,TYPE_2__*,int ) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (TYPE_4__**,int) ;
 scalar_t__ FUNC_8 (char*) ;

Fts5ExprPhrase *FUNC_9(
  Fts5Parse *VAR_5,
  Fts5ExprPhrase *VAR_6,
  Fts5Token *VAR_7,
  int VAR_8
){
  Fts5Config *VAR_9 = VAR_5->pConfig;
  TokenCtx VAR_10;
  int VAR_11;
  char *VAR_12 = 0;

  FUNC_2(&VAR_10, 0, sizeof(TokenCtx));
  VAR_10.pPhrase = VAR_6;

  VAR_11 = FUNC_1(VAR_7, &VAR_12);
  if( VAR_11==VAR_3 ){
    int VAR_13 = VAR_1 | (VAR_8 ? VAR_0 : 0);
    int VAR_14;
    FUNC_3(VAR_12);
    VAR_14 = (int)FUNC_8(VAR_12);
    VAR_11 = FUNC_5(VAR_9, VAR_13, VAR_12, VAR_14, &VAR_10, VAR_4);
  }
  FUNC_6(VAR_12);
  if( VAR_11 || (VAR_11 = VAR_10.rc) ){
    VAR_5->rc = VAR_11;
    FUNC_0(VAR_10.pPhrase);
    VAR_10.pPhrase = 0;
  }else{

    if( VAR_6==0 ){
      if( (VAR_5->nPhrase % 8)==0 ){
        sqlite3_int64 VAR_15 = sizeof(Fts5ExprPhrase*) * (VAR_5->nPhrase + 8);
        Fts5ExprPhrase **VAR_16;
        VAR_16 = (Fts5ExprPhrase**)FUNC_7(VAR_5->apPhrase, VAR_15);
        if( VAR_16==0 ){
          VAR_5->rc = VAR_2;
          FUNC_0(VAR_10.pPhrase);
          return 0;
        }
        VAR_5->apPhrase = VAR_16;
      }
      VAR_5->nPhrase++;
    }

    if( VAR_10.pPhrase==0 ){


      VAR_10.pPhrase = FUNC_4(&VAR_5->rc, sizeof(Fts5ExprPhrase));
    }else if( VAR_10.pPhrase->nTerm ){
      VAR_10.pPhrase->aTerm[VAR_10.pPhrase->nTerm-1].bPrefix = (u8)VAR_8;
    }
    VAR_5->apPhrase[VAR_5->nPhrase-1] = VAR_10.pPhrase;
  }

  return VAR_10.pPhrase;
}
