
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u32 ;
typedef int sqlite3_value ;
typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3_context ;
struct TYPE_8__ {scalar_t__ eType; int jnFlags; size_t n; } ;
struct TYPE_7__ {int nNode; TYPE_2__* aNode; } ;
typedef TYPE_1__ JsonParse ;
typedef TYPE_2__ JsonNode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,char const*,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 TYPE_1__* FUNC_3 (int *,int **,int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  JsonParse *VAR_5;
  sqlite3_int64 VAR_6 = 0;
  u32 VAR_7;
  JsonNode *VAR_8;

  VAR_5 = FUNC_3(VAR_2, VAR_4, VAR_2);
  if( VAR_5==0 ) return;
  FUNC_0( VAR_5->nNode );
  if( VAR_3==2 ){
    const char *VAR_9 = (const char*)FUNC_5(VAR_4[1]);
    VAR_8 = FUNC_1(VAR_5, VAR_9, 0, VAR_2);
  }else{
    VAR_8 = VAR_5->aNode;
  }
  if( VAR_8==0 ){
    return;
  }
  if( VAR_8->eType==VAR_1 ){
    FUNC_0( (VAR_8->jnFlags & VAR_0)==0 );
    for(VAR_7=1; VAR_7<=VAR_8->n; VAR_6++){
      VAR_7 += FUNC_2(&VAR_8[VAR_7]);
    }
  }
  FUNC_4(VAR_2, VAR_6);
}
