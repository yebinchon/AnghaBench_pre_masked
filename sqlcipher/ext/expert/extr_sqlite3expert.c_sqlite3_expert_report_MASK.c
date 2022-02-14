
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bRun; char* zCandidates; TYPE_2__* pStatement; } ;
typedef TYPE_1__ sqlite3expert ;
struct TYPE_5__ {int iId; char* zSql; char* zIdx; char* zEQP; struct TYPE_5__* pNext; } ;
typedef TYPE_2__ IdxStatement ;







const char *FUNC_0(sqlite3expert *VAR_0, int VAR_1, int VAR_2){
  const char *VAR_3 = 0;
  IdxStatement *VAR_4;

  if( VAR_0->bRun==0 ) return 0;
  for(VAR_4=VAR_0->pStatement; VAR_4 && VAR_4->iId!=VAR_1; VAR_4=VAR_4->pNext);
  switch( VAR_2 ){
    case 128:
      if( VAR_4 ) VAR_3 = VAR_4->zSql;
      break;
    case 130:
      if( VAR_4 ) VAR_3 = VAR_4->zIdx;
      break;
    case 129:
      if( VAR_4 ) VAR_3 = VAR_4->zEQP;
      break;
    case 131:
      VAR_3 = VAR_0->zCandidates;
      break;
  }
  return VAR_3;
}
