
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_6__ {size_t* aUp; TYPE_3__* aNode; } ;
struct TYPE_9__ {TYPE_1__ sParse; } ;
struct TYPE_7__ {scalar_t__ zJContent; int iKey; } ;
struct TYPE_8__ {scalar_t__ eType; int jnFlags; int n; TYPE_2__ u; } ;
typedef int JsonString ;
typedef TYPE_3__ JsonNode ;
typedef TYPE_4__ JsonEachCursor ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int,int *,char*,int,...) ;

__attribute__((used)) static void FUNC_3(
  JsonEachCursor *VAR_4,
  JsonString *VAR_5,
  u32 VAR_6
){
  JsonNode *VAR_7, *VAR_8;
  u32 VAR_9;
  if( VAR_6==0 ){
    FUNC_1(VAR_5, '$');
    return;
  }
  VAR_9 = VAR_4->sParse.aUp[VAR_6];
  FUNC_3(VAR_4, VAR_5, VAR_9);
  VAR_7 = &VAR_4->sParse.aNode[VAR_6];
  VAR_8 = &VAR_4->sParse.aNode[VAR_9];
  if( VAR_8->eType==VAR_1 ){
    FUNC_2(30, VAR_5, "[%d]", VAR_8->u.iKey);
  }else{
    FUNC_0( VAR_8->eType==VAR_2 );
    if( (VAR_7->jnFlags & VAR_0)==0 ) VAR_7--;
    FUNC_0( VAR_7->eType==VAR_3 );
    FUNC_0( VAR_7->jnFlags & VAR_0 );
    FUNC_2(VAR_7->n+1, VAR_5, ".%.*s", VAR_7->n-2, VAR_7->u.zJContent+1);
  }
}
