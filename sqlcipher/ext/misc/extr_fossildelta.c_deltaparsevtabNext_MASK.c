
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_2__ {int iCursor; int iNext; char* aDelta; size_t a1; unsigned int a2; int nDelta; int eOp; } ;
typedef TYPE_1__ deltaparsevtab_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (char const**,int*) ;

__attribute__((used)) static int FUNC_1(sqlite3_vtab_cursor *VAR_6){
  deltaparsevtab_cursor *VAR_7 = (deltaparsevtab_cursor*)VAR_6;
  const char *VAR_8;
  int VAR_9 = 0;

  VAR_7->iCursor = VAR_7->iNext;
  VAR_8 = VAR_7->aDelta + VAR_7->iCursor;
  VAR_7->a1 = FUNC_0(&VAR_8, &VAR_9);
  switch( VAR_8[0] ){
    case '@': {
      VAR_8++;
      VAR_7->a2 = FUNC_0(&VAR_8, &VAR_9);
      VAR_7->eOp = VAR_1;
      VAR_7->iNext = (int)(&VAR_8[1] - VAR_7->aDelta);
      break;
    }
    case ':': {
      VAR_8++;
      VAR_7->a2 = (unsigned int)(VAR_8 - VAR_7->aDelta);
      VAR_7->eOp = VAR_4;
      VAR_7->iNext = (int)(&VAR_8[VAR_7->a1] - VAR_7->aDelta);
      break;
    }
    case ';': {
      VAR_7->eOp = VAR_0;
      VAR_7->iNext = VAR_7->nDelta;
      break;
    }
    default: {
      if( VAR_7->iNext==VAR_7->nDelta ){
        VAR_7->eOp = VAR_2;
      }else{
        VAR_7->eOp = VAR_3;
        VAR_7->iNext = VAR_7->nDelta;
      }
      break;
    }
  }
  return VAR_5;
}
