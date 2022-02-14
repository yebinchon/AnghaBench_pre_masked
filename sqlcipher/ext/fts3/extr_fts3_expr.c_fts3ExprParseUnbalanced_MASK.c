
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_tokenizer ;
struct TYPE_4__ {int iLangid; char const** azCol; int nCol; int iDefaultCol; int bFts4; scalar_t__ nNest; int * pTokenizer; } ;
typedef TYPE_1__ ParseContext ;
typedef int Fts3Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char const*,int,int **,int*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(
  sqlite3_tokenizer *VAR_2,
  int VAR_3,
  char **VAR_4,
  int VAR_5,
  int VAR_6,
  int VAR_7,
  const char *VAR_8, int VAR_9,
  Fts3Expr **VAR_10
){
  int VAR_11;
  int VAR_12;
  ParseContext VAR_13;

  FUNC_2(&VAR_13, 0, sizeof(ParseContext));
  VAR_13.pTokenizer = VAR_2;
  VAR_13.iLangid = VAR_3;
  VAR_13.azCol = (const char **)VAR_4;
  VAR_13.nCol = VAR_6;
  VAR_13.iDefaultCol = VAR_7;
  VAR_13.bFts4 = VAR_5;
  if( VAR_8==0 ){
    *VAR_10 = 0;
    return VAR_1;
  }
  if( VAR_9<0 ){
    VAR_9 = (int)FUNC_3(VAR_8);
  }
  VAR_12 = FUNC_1(&VAR_13, VAR_8, VAR_9, VAR_10, &VAR_11);
  FUNC_0( VAR_12==VAR_1 || *VAR_10==0 );


  if( VAR_12==VAR_1 && VAR_13.nNest ){
    VAR_12 = VAR_0;
  }

  return VAR_12;
}
