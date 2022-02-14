
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ i64 ;
struct TYPE_5__ {scalar_t__ pCompress; scalar_t__ nMap; int pDb; TYPE_1__* pMapped; int * pMap; int fdDb; int pEnv; } ;
struct TYPE_4__ {int aData; struct TYPE_4__* pMappedNext; } ;
typedef TYPE_1__ Page ;
typedef TYPE_2__ FileSystem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,scalar_t__,int **,scalar_t__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(
  FileSystem *VAR_2,
  i64 VAR_3,
  int *VAR_4
){
  FUNC_0( VAR_2->pCompress==0 );
  FUNC_0( VAR_1==4 );

  if( *VAR_4==VAR_0 && VAR_3>VAR_2->nMap ){
    int VAR_5;
    u8 *VAR_6 = VAR_2->pMap;
    VAR_5 = FUNC_1(VAR_2->pEnv, VAR_2->fdDb, VAR_3, &VAR_2->pMap, &VAR_2->nMap);
    if( VAR_5==VAR_0 && VAR_2->pMap!=VAR_6 ){
      Page *VAR_7;
      i64 VAR_8 = (u8 *)VAR_2->pMap - VAR_6;
      for(VAR_7=VAR_2->pMapped; VAR_7; VAR_7=VAR_7->pMappedNext){
        VAR_7->aData += VAR_8;
      }
      FUNC_2(VAR_2->pDb);
    }
    *VAR_4 = VAR_5;
  }
}
