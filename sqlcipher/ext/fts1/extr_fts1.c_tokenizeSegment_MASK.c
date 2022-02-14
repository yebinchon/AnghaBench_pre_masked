
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int (* xOpen ) (TYPE_4__*,char const*,int,TYPE_3__**) ;int (* xNext ) (TYPE_3__*,char const**,int*,int*,int*,int*) ;int (* xClose ) (TYPE_3__*) ;} ;
typedef TYPE_2__ sqlite3_tokenizer_module ;
struct TYPE_15__ {TYPE_4__* pTokenizer; } ;
typedef TYPE_3__ sqlite3_tokenizer_cursor ;
struct TYPE_16__ {TYPE_2__* pModule; } ;
typedef TYPE_4__ sqlite3_tokenizer ;
struct TYPE_17__ {int nTerms; int nextColumn; int nextIsOr; TYPE_1__* pTerms; int pFts; } ;
struct TYPE_13__ {int isNot; int iPhrase; int nPhrase; } ;
typedef TYPE_5__ Query ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (TYPE_5__*,char const*,int) ;
 int FUNC_2 (TYPE_4__*,char const*,int,TYPE_3__**) ;
 int FUNC_3 (TYPE_3__*,char const**,int*,int*,int*,int*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(
  sqlite3_tokenizer *VAR_1,
  const char *VAR_2, int VAR_3,
  int VAR_4,
  Query *VAR_5
){
  const sqlite3_tokenizer_module *VAR_6 = VAR_1->pModule;
  sqlite3_tokenizer_cursor *VAR_7;
  int VAR_8 = VAR_5->nTerms;
  int VAR_9;
  int VAR_10 = 1;

  int VAR_11 = VAR_6->xOpen(VAR_1, VAR_2, VAR_3, &VAR_7);
  if( VAR_11!=VAR_0 ) return VAR_11;
  VAR_7->pTokenizer = VAR_1;

  while( 1 ){
    const char *VAR_12;
    int VAR_13, VAR_14, VAR_15, VAR_16;

    VAR_11 = VAR_6->xNext(VAR_7,
                        &VAR_12, &VAR_13,
                        &VAR_14, &VAR_15, &VAR_16);
    if( VAR_11!=VAR_0 ) break;
    if( !VAR_4 &&
        VAR_2[VAR_15]==':' &&
         (VAR_9 = FUNC_0(VAR_5->pFts, VAR_12, VAR_13))>=0 ){
      VAR_5->nextColumn = VAR_9;
      continue;
    }
    if( !VAR_4 && VAR_5->nTerms>0 && VAR_13==2
         && VAR_2[VAR_14]=='O' && VAR_2[VAR_14+1]=='R' ){
      VAR_5->nextIsOr = 1;
      continue;
    }
    FUNC_1(VAR_5, VAR_12, VAR_13);
    if( !VAR_4 && VAR_14>0 && VAR_2[VAR_14-1]=='-' ){
      VAR_5->pTerms[VAR_5->nTerms-1].isNot = 1;
    }
    VAR_5->pTerms[VAR_5->nTerms-1].iPhrase = VAR_10;
    if( VAR_4 ){
      VAR_10++;
    }
  }

  if( VAR_4 && VAR_5->nTerms>VAR_8 ){
    VAR_5->pTerms[VAR_8].nPhrase = VAR_5->nTerms - VAR_8 - 1;
  }

  return VAR_6->xClose(VAR_7);
}
