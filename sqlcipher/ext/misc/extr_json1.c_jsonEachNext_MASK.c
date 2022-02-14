
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
typedef int sqlite3_vtab_cursor ;
struct TYPE_7__ {size_t* aUp; TYPE_3__* aNode; } ;
struct TYPE_9__ {size_t i; size_t iEnd; scalar_t__ eType; int iRowid; TYPE_2__ sParse; scalar_t__ bRecursive; } ;
struct TYPE_6__ {scalar_t__ iKey; } ;
struct TYPE_8__ {int jnFlags; scalar_t__ eType; TYPE_1__ u; } ;
typedef TYPE_3__ JsonNode ;
typedef TYPE_4__ JsonEachCursor ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab_cursor *VAR_2){
  JsonEachCursor *VAR_3 = (JsonEachCursor*)VAR_2;
  if( VAR_3->bRecursive ){
    if( VAR_3->sParse.aNode[VAR_3->i].jnFlags & VAR_0 ) VAR_3->i++;
    VAR_3->i++;
    VAR_3->iRowid++;
    if( VAR_3->i<VAR_3->iEnd ){
      u32 VAR_4 = VAR_3->sParse.aUp[VAR_3->i];
      JsonNode *VAR_5 = &VAR_3->sParse.aNode[VAR_4];
      VAR_3->eType = VAR_5->eType;
      if( VAR_5->eType==129 ){
        if( VAR_4==VAR_3->i-1 ){
          VAR_5->u.iKey = 0;
        }else{
          VAR_5->u.iKey++;
        }
      }
    }
  }else{
    switch( VAR_3->eType ){
      case 129: {
        VAR_3->i += FUNC_0(&VAR_3->sParse.aNode[VAR_3->i]);
        VAR_3->iRowid++;
        break;
      }
      case 128: {
        VAR_3->i += 1 + FUNC_0(&VAR_3->sParse.aNode[VAR_3->i+1]);
        VAR_3->iRowid++;
        break;
      }
      default: {
        VAR_3->i = VAR_3->iEnd;
        break;
      }
    }
  }
  return VAR_1;
}
