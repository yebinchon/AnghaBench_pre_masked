
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


struct TYPE_11__ {int (* xNext ) (int *,char const**,int*,int*,int*,int*) ;int (* xClose ) (int *) ;} ;
typedef TYPE_2__ sqlite3_tokenizer_module ;
typedef int sqlite3_tokenizer_cursor ;
struct TYPE_12__ {TYPE_2__* pModule; } ;
typedef TYPE_3__ sqlite3_tokenizer ;
typedef int sqlite3_int64 ;
struct TYPE_15__ {TYPE_5__* pPhrase; int eType; } ;
struct TYPE_14__ {int nToken; int iColumn; TYPE_1__* aToken; } ;
struct TYPE_13__ {int isNot; scalar_t__ bFts4; int iLangid; TYPE_3__* pTokenizer; } ;
struct TYPE_10__ {int n; char* z; int isPrefix; int bFirst; } ;
typedef TYPE_4__ ParseContext ;
typedef TYPE_5__ Fts3Phrase ;
typedef TYPE_6__ Fts3Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (TYPE_3__*,int ,char const*,int,int **) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,char const**,int*,int*,int*,int*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(
  ParseContext *VAR_5,
  int VAR_6,
  const char *VAR_7, int VAR_8,
  Fts3Expr **VAR_9,
  int *VAR_10
){
  sqlite3_tokenizer *VAR_11 = VAR_5->pTokenizer;
  sqlite3_tokenizer_module const *VAR_12 = VAR_11->pModule;
  int VAR_13;
  sqlite3_tokenizer_cursor *VAR_14;
  Fts3Expr *VAR_15 = 0;
  int VAR_16 = 0;


  for(VAR_16=0; VAR_16<VAR_8; VAR_16++){
    if( VAR_4 && (VAR_7[VAR_16]=='(' || VAR_7[VAR_16]==')') ) break;
    if( VAR_7[VAR_16]=='"' ) break;
  }

  *VAR_10 = VAR_16;
  VAR_13 = FUNC_2(VAR_11, VAR_5->iLangid, VAR_7, VAR_16, &VAR_14);
  if( VAR_13==VAR_3 ){
    const char *VAR_17;
    int VAR_18 = 0, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
    sqlite3_int64 VAR_22;

    VAR_13 = VAR_12->xNext(VAR_14, &VAR_17, &VAR_18, &VAR_19, &VAR_20, &VAR_21);
    if( VAR_13==VAR_3 ){
      VAR_22 = sizeof(Fts3Expr) + sizeof(Fts3Phrase) + VAR_18;
      VAR_15 = (Fts3Expr *)FUNC_0(VAR_22);
      if( !VAR_15 ){
        VAR_13 = VAR_2;
      }else{
        VAR_15->eType = VAR_0;
        VAR_15->pPhrase = (Fts3Phrase *)&VAR_15[1];
        VAR_15->pPhrase->nToken = 1;
        VAR_15->pPhrase->iColumn = VAR_6;
        VAR_15->pPhrase->aToken[0].n = VAR_18;
        VAR_15->pPhrase->aToken[0].z = (char *)&VAR_15->pPhrase[1];
        FUNC_1(VAR_15->pPhrase->aToken[0].z, VAR_17, VAR_18);

        if( VAR_20<VAR_8 && VAR_7[VAR_20]=='*' ){
          VAR_15->pPhrase->aToken[0].isPrefix = 1;
          VAR_20++;
        }

        while( 1 ){
          if( !VAR_4
           && VAR_19>0 && VAR_7[VAR_19-1]=='-'
          ){
            VAR_5->isNot = 1;
            VAR_19--;
          }else if( VAR_5->bFts4 && VAR_19>0 && VAR_7[VAR_19-1]=='^' ){
            VAR_15->pPhrase->aToken[0].bFirst = 1;
            VAR_19--;
          }else{
            break;
          }
        }

      }
      *VAR_10 = VAR_20;
    }else if( VAR_16 && VAR_13==VAR_1 ){
      VAR_13 = VAR_3;
    }

    VAR_12->xClose(VAR_14);
  }

  *VAR_9 = VAR_15;
  return VAR_13;
}
