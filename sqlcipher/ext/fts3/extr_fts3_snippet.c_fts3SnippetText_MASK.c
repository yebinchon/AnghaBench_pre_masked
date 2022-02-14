
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_11__ {int (* xNext ) (int *,char const**,int*,int*,int*,int*) ;int (* xClose ) (int *) ;} ;
typedef TYPE_2__ sqlite3_tokenizer_module ;
typedef int sqlite3_tokenizer_cursor ;
struct TYPE_15__ {scalar_t__ pModule; } ;
struct TYPE_10__ {scalar_t__ pVtab; } ;
struct TYPE_14__ {int iLangid; int pStmt; TYPE_1__ base; } ;
struct TYPE_13__ {TYPE_6__* pTokenizer; } ;
struct TYPE_12__ {int iPos; int hlmask; int iCol; } ;
typedef int StrBuffer ;
typedef TYPE_3__ SnippetFragment ;
typedef TYPE_4__ Fts3Table ;
typedef TYPE_5__ Fts3Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ,int,char const*,int,int*,int*) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (TYPE_6__*,int ,char const*,int,int **) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int *,char const**,int*,int*,int*,int*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(
  Fts3Cursor *VAR_4,
  SnippetFragment *VAR_5,
  int VAR_6,
  int VAR_7,
  int VAR_8,
  const char *VAR_9,
  const char *VAR_10,
  const char *VAR_11,
  StrBuffer *VAR_12
){
  Fts3Table *VAR_13 = (Fts3Table *)VAR_4->base.pVtab;
  int VAR_14;
  const char *VAR_15;
  int VAR_16;
  int VAR_17 = 0;
  int VAR_18 = 0;
  int VAR_19 = 0;
  int VAR_20 = VAR_5->iPos;
  u64 VAR_21 = VAR_5->hlmask;
  int VAR_22 = VAR_5->iCol+1;
  sqlite3_tokenizer_module *VAR_23;
  sqlite3_tokenizer_cursor *VAR_24;

  VAR_15 = (const char *)FUNC_4(VAR_4->pStmt, VAR_22);
  if( VAR_15==0 ){
    if( FUNC_5(VAR_4->pStmt, VAR_22)!=VAR_2 ){
      return VAR_1;
    }
    return VAR_3;
  }
  VAR_16 = FUNC_3(VAR_4->pStmt, VAR_22);


  VAR_23 = (sqlite3_tokenizer_module *)VAR_13->pTokenizer->pModule;
  VAR_14 = FUNC_2(VAR_13->pTokenizer, VAR_4->iLangid, VAR_15,VAR_16,&VAR_24);
  if( VAR_14!=VAR_3 ){
    return VAR_14;
  }

  while( VAR_14==VAR_3 ){
    const char *VAR_25;
    int VAR_26 = -1;
    int VAR_27 = 0;
    int VAR_28 = 0;
    int VAR_29 = 0;
    VAR_14 = VAR_23->xNext(VAR_24, &VAR_25, &VAR_26, &VAR_27, &VAR_28, &VAR_17);
    if( VAR_14!=VAR_3 ){
      if( VAR_14==VAR_0 ){




        VAR_14 = FUNC_1(VAR_12, &VAR_15[VAR_18], -1);
      }
      break;
    }
    if( VAR_17<VAR_20 ){ continue; }

    if( !VAR_19 ){
      int VAR_30 = VAR_16 - VAR_27;
      VAR_14 = FUNC_0(
          VAR_13, VAR_4->iLangid, VAR_8, &VAR_15[VAR_27], VAR_30, &VAR_20, &VAR_21
      );
      VAR_19 = 1;





      if( VAR_14==VAR_3 ){
        if( VAR_20>0 || VAR_6>0 ){
          VAR_14 = FUNC_1(VAR_12, VAR_11, -1);
        }else if( VAR_27 ){
          VAR_14 = FUNC_1(VAR_12, VAR_15, VAR_27);
        }
      }
      if( VAR_14!=VAR_3 || VAR_17<VAR_20 ) continue;
    }

    if( VAR_17>=(VAR_20+VAR_8) ){
      if( VAR_7 ){
        VAR_14 = FUNC_1(VAR_12, VAR_11, -1);
      }
      break;
    }


    VAR_29 = (VAR_21 & ((u64)1 << (VAR_17-VAR_20)))!=0;

    if( VAR_17>VAR_20 ) VAR_14 = FUNC_1(VAR_12, &VAR_15[VAR_18], VAR_27-VAR_18);
    if( VAR_14==VAR_3 && VAR_29 ) VAR_14 = FUNC_1(VAR_12, VAR_9, -1);
    if( VAR_14==VAR_3 ) VAR_14 = FUNC_1(VAR_12, &VAR_15[VAR_27], VAR_28-VAR_27);
    if( VAR_14==VAR_3 && VAR_29 ) VAR_14 = FUNC_1(VAR_12, VAR_10, -1);

    VAR_18 = VAR_28;
  }

  VAR_23->xClose(VAR_24);
  return VAR_14;
}
