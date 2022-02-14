
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_context ;
struct TYPE_4__ {int nErr; } ;
typedef TYPE_1__ JsonParse ;
typedef int JsonNode ;


 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_1__*,int ,char const*,int*,char const**) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static JsonNode *FUNC_6(
  JsonParse *VAR_0,
  const char *VAR_1,
  int *VAR_2,
  sqlite3_context *VAR_3
){
  const char *VAR_4 = 0;
  JsonNode *VAR_5 = 0;
  char *VAR_6;

  if( VAR_1==0 ) return 0;
  if( VAR_1[0]!='$' ){
    VAR_4 = VAR_1;
    goto lookup_err;
  }
  VAR_1++;
  VAR_5 = FUNC_1(VAR_0, 0, VAR_1, VAR_2, &VAR_4);
  if( VAR_4==0 ) return VAR_5;

lookup_err:
  VAR_0->nErr++;
  FUNC_0( VAR_4!=0 && VAR_3!=0 );
  VAR_6 = FUNC_2(VAR_4);
  if( VAR_6 ){
    FUNC_4(VAR_3, VAR_6, -1);
    FUNC_3(VAR_6);
  }else{
    FUNC_5(VAR_3);
  }
  return 0;
}
