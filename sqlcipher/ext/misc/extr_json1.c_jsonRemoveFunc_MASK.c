
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u32 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_10__ {int jnFlags; } ;
struct TYPE_9__ {int jnFlags; } ;
struct TYPE_8__ {TYPE_3__* aNode; scalar_t__ nErr; int nNode; } ;
typedef TYPE_1__ JsonParse ;
typedef TYPE_2__ JsonNode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,char const*,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_3__*,int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  JsonParse VAR_4;
  JsonNode *VAR_5;
  const char *VAR_6;
  u32 VAR_7;

  if( VAR_2<1 ) return;
  if( FUNC_2(&VAR_4, VAR_1, (const char*)FUNC_5(VAR_3[0])) ) return;
  FUNC_0( VAR_4.nNode );
  for(VAR_7=1; VAR_7<(u32)VAR_2; VAR_7++){
    VAR_6 = (const char*)FUNC_5(VAR_3[VAR_7]);
    if( VAR_6==0 ) goto remove_done;
    VAR_5 = FUNC_1(&VAR_4, VAR_6, 0, VAR_1);
    if( VAR_4.nErr ) goto remove_done;
    if( VAR_5 ) VAR_5->jnFlags |= VAR_0;
  }
  if( (VAR_4.aNode[0].jnFlags & VAR_0)==0 ){
    FUNC_4(VAR_4.aNode, VAR_1, 0);
  }
remove_done:
  FUNC_3(&VAR_4);
}
