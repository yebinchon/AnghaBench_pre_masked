
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_tokenizer ;
typedef int Fts3Expr ;


 int VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int **,char const*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,int,char**,int,int,int,char const*,int,int **) ;
 int FUNC_3 (char**,char*,char const*) ;
 int FUNC_4 (int *) ;

int FUNC_5(
  sqlite3_tokenizer *VAR_4,
  int VAR_5,
  char **VAR_6,
  int VAR_7,
  int VAR_8,
  int VAR_9,
  const char *VAR_10, int VAR_11,
  Fts3Expr **VAR_12,
  char **VAR_13
){
  int VAR_14 = FUNC_2(
      VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12
  );



  if( VAR_14==VAR_2 && *VAR_12 ){
    VAR_14 = FUNC_0(VAR_12, VAR_1);
    if( VAR_14==VAR_2 ){
      VAR_14 = FUNC_1(*VAR_12, VAR_1);
    }
  }

  if( VAR_14!=VAR_2 ){
    FUNC_4(*VAR_12);
    *VAR_12 = 0;
    if( VAR_14==VAR_3 ){
      FUNC_3(VAR_13,
          "FTS expression tree is too large (maximum depth %d)",
          VAR_1
      );
      VAR_14 = VAR_0;
    }else if( VAR_14==VAR_0 ){
      FUNC_3(VAR_13, "malformed MATCH expression: [%s]", VAR_10);
    }
  }

  return VAR_14;
}
