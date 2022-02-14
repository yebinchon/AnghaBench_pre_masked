
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_11__ {size_t iReplace; } ;
struct TYPE_14__ {int jnFlags; TYPE_2__ u; } ;
struct TYPE_10__ {int iReplace; } ;
struct TYPE_13__ {TYPE_1__ u; int jnFlags; } ;
struct TYPE_12__ {TYPE_5__* aNode; scalar_t__ nErr; scalar_t__ oom; int nNode; } ;
typedef TYPE_3__ JsonParse ;
typedef TYPE_4__ JsonNode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (TYPE_3__*,char const*,int*,int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *,char const*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_5__*,int *,int **) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  JsonParse VAR_4;
  JsonNode *VAR_5;
  const char *VAR_6;
  u32 VAR_7;
  int VAR_8;
  int VAR_9 = *(int*)FUNC_8(VAR_1);

  if( VAR_2<1 ) return;
  if( (VAR_2&1)==0 ) {
    FUNC_5(VAR_1, VAR_9 ? "set" : "insert");
    return;
  }
  if( FUNC_2(&VAR_4, VAR_1, (const char*)FUNC_9(VAR_3[0])) ) return;
  FUNC_0( VAR_4.nNode );
  for(VAR_7=1; VAR_7<(u32)VAR_2; VAR_7+=2){
    VAR_6 = (const char*)FUNC_9(VAR_3[VAR_7]);
    VAR_8 = 0;
    VAR_5 = FUNC_1(&VAR_4, VAR_6, &VAR_8, VAR_1);
    if( VAR_4.oom ){
      FUNC_6(VAR_1);
      goto jsonSetDone;
    }else if( VAR_4.nErr ){
      goto jsonSetDone;
    }else if( VAR_5 && (VAR_8 || VAR_9) ){
      VAR_5->jnFlags |= (u8)VAR_0;
      VAR_5->u.iReplace = VAR_7 + 1;
    }
  }
  if( VAR_4.aNode[0].jnFlags & VAR_0 ){
    FUNC_7(VAR_1, VAR_3[VAR_4.aNode[0].u.iReplace]);
  }else{
    FUNC_4(VAR_4.aNode, VAR_1, VAR_3);
  }
jsonSetDone:
  FUNC_3(&VAR_4);
}
