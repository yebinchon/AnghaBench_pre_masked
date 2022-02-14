
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct snippetMatch {scalar_t__ snStatus; int iTerm; int iCol; int iStart; int nByte; } ;
struct TYPE_12__ {int nMatch; int nSnippet; int zSnippet; struct snippetMatch* aMatch; } ;
struct TYPE_11__ {int nTerms; } ;
struct TYPE_13__ {TYPE_2__ snippet; int pStmt; TYPE_1__ q; } ;
typedef TYPE_3__ fulltext_cursor ;
struct TYPE_14__ {int len; int s; } ;
typedef TYPE_4__ StringBuffer ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_4__*,char const*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,char const*,int) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int,char const*,int,struct snippetMatch*,int,int) ;

__attribute__((used)) static void FUNC_9(
  fulltext_cursor *VAR_2,
  const char *VAR_3,
  const char *VAR_4,
  const char *VAR_5
){
  int VAR_6, VAR_7;
  struct snippetMatch *VAR_8;
  int VAR_9;
  int VAR_10;
  StringBuffer VAR_11;
  int VAR_12;
  int VAR_13;
  int VAR_14;
  int VAR_15;
  const char *VAR_16;
  int VAR_17, VAR_18;
  int VAR_19 = 0;
  int VAR_20;


  FUNC_2(VAR_2->snippet.zSnippet);
  VAR_2->snippet.zSnippet = 0;
  VAR_8 = VAR_2->snippet.aMatch;
  VAR_9 = VAR_2->snippet.nMatch;
  FUNC_3(&VAR_11);

  for(VAR_6=0; VAR_6<VAR_9; VAR_6++){
    VAR_8[VAR_6].snStatus = VAR_1;
  }
  VAR_10 = 0;
  for(VAR_6=0; VAR_6<VAR_2->q.nTerms; VAR_6++){
    for(VAR_7=0; VAR_7<VAR_9; VAR_7++){
      if( VAR_8[VAR_7].iTerm==VAR_6 ){
        VAR_8[VAR_7].snStatus = VAR_0;
        VAR_10++;
        break;
      }
    }
  }

  VAR_20 = 0;
  VAR_12 = -1;
  VAR_13 = 0;
  for(VAR_6=0; VAR_6<VAR_9 && VAR_10>0; VAR_6++){
    if( VAR_8[VAR_6].snStatus!=VAR_0 ) continue;
    VAR_10--;
    VAR_14 = VAR_8[VAR_6].iCol;
    VAR_16 = (const char*)FUNC_6(VAR_2->pStmt, VAR_14+1);
    VAR_15 = FUNC_5(VAR_2->pStmt, VAR_14+1);
    VAR_17 = VAR_8[VAR_6].iStart - 40;
    VAR_17 = FUNC_8(VAR_17, VAR_16, VAR_15, VAR_8, VAR_9, VAR_14);
    if( VAR_17<=10 ){
      VAR_17 = 0;
    }
    if( VAR_14==VAR_12 && VAR_17<=VAR_13+20 ){
      VAR_17 = VAR_13;
    }
    if( (VAR_14!=VAR_12 && VAR_12>=0) || VAR_17!=VAR_13 ){
      FUNC_7(&VAR_11);
      FUNC_1(&VAR_11);
      FUNC_0(&VAR_11, VAR_5);
      FUNC_1(&VAR_11);
    }
    VAR_18 = VAR_8[VAR_6].iStart + VAR_8[VAR_6].nByte + 40;
    VAR_18 = FUNC_8(VAR_18, VAR_16, VAR_15, VAR_8, VAR_9, VAR_14);
    if( VAR_18>=VAR_15-10 ){
      VAR_18 = VAR_15;
      VAR_19 = 0;
    }else{
      VAR_19 = 1;
    }
    while( VAR_20<VAR_9 && VAR_8[VAR_20].iCol<VAR_14 ){ VAR_20++; }
    while( VAR_17<VAR_18 ){
      while( VAR_20<VAR_9 && VAR_8[VAR_20].iStart<VAR_17
             && VAR_8[VAR_20].iCol<=VAR_14 ){
        VAR_20++;
      }
      if( VAR_20<VAR_9 && VAR_8[VAR_20].iStart<VAR_18
             && VAR_8[VAR_20].iCol==VAR_14 ){
        FUNC_4(&VAR_11, &VAR_16[VAR_17], VAR_8[VAR_20].iStart - VAR_17);
        VAR_17 = VAR_8[VAR_20].iStart;
        FUNC_0(&VAR_11, VAR_3);
        FUNC_4(&VAR_11, &VAR_16[VAR_17], VAR_8[VAR_20].nByte);
        FUNC_0(&VAR_11, VAR_4);
        VAR_17 += VAR_8[VAR_20].nByte;
        for(VAR_7=VAR_20+1; VAR_7<VAR_9; VAR_7++){
          if( VAR_8[VAR_7].iTerm==VAR_8[VAR_20].iTerm
              && VAR_8[VAR_7].snStatus==VAR_0 ){
            VAR_10--;
            VAR_8[VAR_7].snStatus = VAR_1;
          }
        }
      }else{
        FUNC_4(&VAR_11, &VAR_16[VAR_17], VAR_18 - VAR_17);
        VAR_17 = VAR_18;
      }
    }
    VAR_12 = VAR_14;
    VAR_13 = VAR_18;
  }
  FUNC_7(&VAR_11);
  if( VAR_19 ){
    FUNC_1(&VAR_11);
    FUNC_0(&VAR_11, VAR_5);
  }
  VAR_2->snippet.zSnippet = VAR_11.s;
  VAR_2->snippet.nSnippet = VAR_11.len;
}
