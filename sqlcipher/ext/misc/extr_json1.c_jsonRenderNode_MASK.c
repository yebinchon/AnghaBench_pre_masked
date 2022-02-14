
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
typedef int sqlite3_value ;
struct TYPE_5__ {size_t iReplace; char* zJContent; size_t iAppend; TYPE_2__* pPatch; } ;
struct TYPE_6__ {int jnFlags; int eType; int n; TYPE_1__ u; } ;
typedef int JsonString ;
typedef TYPE_2__ JsonNode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;




 int FUNC_0 (int) ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int *) ;
 size_t FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_7(
  JsonNode *VAR_6,
  JsonString *VAR_7,
  sqlite3_value **VAR_8
){
  if( VAR_6->jnFlags & (VAR_4|VAR_1) ){
    if( VAR_6->jnFlags & VAR_4 ){
      FUNC_5(VAR_7, VAR_8[VAR_6->u.iReplace]);
      return;
    }
    VAR_6 = VAR_6->u.pPatch;
  }
  switch( VAR_6->eType ){
    default: {
      FUNC_0( VAR_6->eType==VAR_5 );
      FUNC_2(VAR_7, "null", 4);
      break;
    }
    case 128: {
      FUNC_2(VAR_7, "true", 4);
      break;
    }
    case 133: {
      FUNC_2(VAR_7, "false", 5);
      break;
    }
    case 129: {
      if( VAR_6->jnFlags & VAR_2 ){
        FUNC_4(VAR_7, VAR_6->u.zJContent, VAR_6->n);
        break;
      }

    }
    case 130:
    case 132: {
      FUNC_2(VAR_7, VAR_6->u.zJContent, VAR_6->n);
      break;
    }
    case 134: {
      u32 VAR_9 = 1;
      FUNC_1(VAR_7, '[');
      for(;;){
        while( VAR_9<=VAR_6->n ){
          if( (VAR_6[VAR_9].jnFlags & VAR_3)==0 ){
            FUNC_3(VAR_7);
            FUNC_7(&VAR_6[VAR_9], VAR_7, VAR_8);
          }
          VAR_9 += FUNC_6(&VAR_6[VAR_9]);
        }
        if( (VAR_6->jnFlags & VAR_0)==0 ) break;
        VAR_6 = &VAR_6[VAR_6->u.iAppend];
        VAR_9 = 1;
      }
      FUNC_1(VAR_7, ']');
      break;
    }
    case 131: {
      u32 VAR_10 = 1;
      FUNC_1(VAR_7, '{');
      for(;;){
        while( VAR_10<=VAR_6->n ){
          if( (VAR_6[VAR_10+1].jnFlags & VAR_3)==0 ){
            FUNC_3(VAR_7);
            FUNC_7(&VAR_6[VAR_10], VAR_7, VAR_8);
            FUNC_1(VAR_7, ':');
            FUNC_7(&VAR_6[VAR_10+1], VAR_7, VAR_8);
          }
          VAR_10 += 1 + FUNC_6(&VAR_6[VAR_10+1]);
        }
        if( (VAR_6->jnFlags & VAR_0)==0 ) break;
        VAR_6 = &VAR_6[VAR_6->u.iAppend];
        VAR_10 = 1;
      }
      FUNC_1(VAR_7, '}');
      break;
    }
  }
}
