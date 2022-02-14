
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_7__ {size_t eType; } ;
struct TYPE_6__ {TYPE_2__* aNode; } ;
typedef TYPE_1__ JsonParse ;
typedef TYPE_2__ JsonNode ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,char const*,int ,int *) ;
 TYPE_1__* FUNC_1 (int *,int **,int *) ;
 int * VAR_1 ;
 int FUNC_2 (int *,int ,int,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  JsonParse *VAR_5;
  const char *VAR_6;
  JsonNode *VAR_7;

  VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_2);
  if( VAR_5==0 ) return;
  if( VAR_3==2 ){
    VAR_6 = (const char*)FUNC_3(VAR_4[1]);
    VAR_7 = FUNC_0(VAR_5, VAR_6, 0, VAR_2);
  }else{
    VAR_7 = VAR_5->aNode;
  }
  if( VAR_7 ){
    FUNC_2(VAR_2, VAR_1[VAR_7->eType], -1, VAR_0);
  }
}
