
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_4__ {scalar_t__ nErr; } ;
typedef int JsonString ;
typedef TYPE_1__ JsonParse ;
typedef int JsonNode ;


 int VAR_0 ;
 int FUNC_0 (int *,char) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (TYPE_1__*,char const*,int ,int *) ;
 TYPE_1__* FUNC_5 (int *,int **,int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  JsonParse *VAR_4;
  JsonNode *VAR_5;
  const char *VAR_6;
  JsonString VAR_7;
  int VAR_8;

  if( VAR_2<2 ) return;
  VAR_4 = FUNC_5(VAR_1, VAR_3, VAR_1);
  if( VAR_4==0 ) return;
  FUNC_3(&VAR_7, VAR_1);
  FUNC_0(&VAR_7, '[');
  for(VAR_8=1; VAR_8<VAR_2; VAR_8++){
    VAR_6 = (const char*)FUNC_11(VAR_3[VAR_8]);
    VAR_5 = FUNC_4(VAR_4, VAR_6, 0, VAR_1);
    if( VAR_4->nErr ) break;
    if( VAR_2>2 ){
      FUNC_2(&VAR_7);
      if( VAR_5 ){
        FUNC_6(VAR_5, &VAR_7, 0);
      }else{
        FUNC_1(&VAR_7, "null", 4);
      }
    }else if( VAR_5 ){
      FUNC_9(VAR_5, VAR_1, 0);
    }
  }
  if( VAR_2>2 && VAR_8==VAR_2 ){
    FUNC_0(&VAR_7, ']');
    FUNC_8(&VAR_7);
    FUNC_10(VAR_1, VAR_0);
  }
  FUNC_7(&VAR_7);
}
