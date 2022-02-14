
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;
struct TYPE_8__ {size_t* aUp; char const* zJson; TYPE_3__* aNode; } ;
struct TYPE_10__ {size_t i; size_t eType; size_t iBegin; char* zRoot; TYPE_2__ sParse; int bRecursive; int iRowid; } ;
struct TYPE_7__ {int zJContent; int iKey; } ;
struct TYPE_9__ {int jnFlags; size_t eType; TYPE_1__ u; int n; } ;
typedef int JsonString ;
typedef TYPE_3__ JsonNode ;
typedef TYPE_4__ JsonEachCursor ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (TYPE_4__*,int *,size_t) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int,int *,char*,int ,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int *,int ) ;
 char const** VAR_5 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,char const*,int,int ) ;
 scalar_t__ FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(
  sqlite3_vtab_cursor *VAR_6,
  sqlite3_context *VAR_7,
  int VAR_8
){
  JsonEachCursor *VAR_9 = (JsonEachCursor*)VAR_6;
  JsonNode *VAR_10 = &VAR_9->sParse.aNode[VAR_9->i];
  switch( VAR_8 ){
    case 132: {
      if( VAR_9->i==0 ) break;
      if( VAR_9->eType==VAR_2 ){
        FUNC_7(VAR_10, VAR_7, 0);
      }else if( VAR_9->eType==VAR_1 ){
        u32 VAR_11;
        if( VAR_9->bRecursive ){
          if( VAR_9->iRowid==0 ) break;
          VAR_11 = VAR_9->sParse.aNode[VAR_9->sParse.aUp[VAR_9->i]].u.iKey;
        }else{
          VAR_11 = VAR_9->iRowid;
        }
        FUNC_8(VAR_7, (sqlite3_int64)VAR_11);
      }
      break;
    }
    case 128: {
      if( VAR_10->jnFlags & VAR_0 ) VAR_10++;
      FUNC_7(VAR_10, VAR_7, 0);
      break;
    }
    case 129: {
      if( VAR_10->jnFlags & VAR_0 ) VAR_10++;
      FUNC_9(VAR_7, VAR_5[VAR_10->eType], -1, VAR_4);
      break;
    }
    case 136: {
      if( VAR_10->jnFlags & VAR_0 ) VAR_10++;
      if( VAR_10->eType>=VAR_1 ) break;
      FUNC_7(VAR_10, VAR_7, 0);
      break;
    }
    case 134: {
      FUNC_8(VAR_7,
         (sqlite3_int64)VAR_9->i + ((VAR_10->jnFlags & VAR_0)!=0));
      break;
    }
    case 131: {
      if( VAR_9->i>VAR_9->iBegin && VAR_9->bRecursive ){
        FUNC_8(VAR_7, (sqlite3_int64)VAR_9->sParse.aUp[VAR_9->i]);
      }
      break;
    }
    case 135: {
      JsonString VAR_12;
      FUNC_4(&VAR_12, VAR_7);
      if( VAR_9->bRecursive ){
        FUNC_3(VAR_9, &VAR_12, VAR_9->i);
      }else{
        if( VAR_9->zRoot ){
          FUNC_2(&VAR_12, VAR_9->zRoot, (int)FUNC_10(VAR_9->zRoot));
        }else{
          FUNC_1(&VAR_12, '$');
        }
        if( VAR_9->eType==VAR_1 ){
          FUNC_5(30, &VAR_12, "[%d]", VAR_9->iRowid);
        }else if( VAR_9->eType==VAR_2 ){
          FUNC_5(VAR_10->n, &VAR_12, ".%.*s", VAR_10->n-2, VAR_10->u.zJContent+1);
        }
      }
      FUNC_6(&VAR_12);
      break;
    }
    case 130: {
      if( VAR_9->bRecursive ){
        JsonString VAR_13;
        FUNC_4(&VAR_13, VAR_7);
        FUNC_3(VAR_9, &VAR_13, VAR_9->sParse.aUp[VAR_9->i]);
        FUNC_6(&VAR_13);
        break;
      }


    }
    default: {
      const char *VAR_14 = VAR_9->zRoot;
      if( VAR_14==0 ) VAR_14 = "$";
      FUNC_9(VAR_7, VAR_14, -1, VAR_4);
      break;
    }
    case 133: {
      FUNC_0( VAR_8==133 );
      FUNC_9(VAR_7, VAR_9->sParse.zJson, -1, VAR_4);
      break;
    }
  }
  return VAR_3;
}
