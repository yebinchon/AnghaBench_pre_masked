
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_5__ {scalar_t__ oom; int aNode; } ;
typedef TYPE_1__ JsonParse ;
typedef int JsonNode ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,char const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  JsonParse VAR_3;
  JsonParse VAR_4;
  JsonNode *VAR_5;

  FUNC_0(VAR_1);
  if( FUNC_3(&VAR_3, VAR_0, (const char*)FUNC_7(VAR_2[0])) ) return;
  if( FUNC_3(&VAR_4, VAR_0, (const char*)FUNC_7(VAR_2[1])) ){
    FUNC_4(&VAR_3);
    return;
  }
  VAR_5 = FUNC_2(&VAR_3, 0, VAR_4.aNode);
  FUNC_1( VAR_5!=0 || VAR_3.oom );
  if( VAR_5 ){
    FUNC_5(VAR_5, VAR_0, 0);
  }else{
    FUNC_6(VAR_0);
  }
  FUNC_4(&VAR_3);
  FUNC_4(&VAR_4);
}
