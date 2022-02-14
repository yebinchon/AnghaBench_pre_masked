
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_4__ {int nWord; int iLang; TYPE_1__* pCurrent; } ;
typedef TYPE_2__ amatch_cursor ;
struct TYPE_3__ {int rCost; int zWord; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab_cursor *VAR_2, sqlite3_context *VAR_3, int VAR_4){
  amatch_cursor *VAR_5 = (amatch_cursor*)VAR_2;
  switch( VAR_4 ){
    case 128: {
      FUNC_2(VAR_3, VAR_5->pCurrent->zWord+2, -1, VAR_1);
      break;
    }
    case 131: {
      FUNC_0(VAR_3, VAR_5->pCurrent->rCost);
      break;
    }
    case 130: {
      FUNC_0(VAR_3, VAR_5->iLang);
      break;
    }
    case 129: {
      FUNC_0(VAR_3, VAR_5->nWord);
      break;
    }
    default: {
      FUNC_1(VAR_3);
      break;
    }
  }
  return VAR_0;
}
