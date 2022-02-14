
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** apHash; int nHash; } ;
struct TYPE_5__ {scalar_t__ iPg; struct TYPE_5__* pHashNext; } ;
typedef TYPE_1__ Page ;
typedef scalar_t__ LsmPgno ;
typedef TYPE_2__ FileSystem ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static Page *FUNC_1(FileSystem *VAR_0, LsmPgno VAR_1, int *VAR_2){
  Page *VAR_3;
  int VAR_4 = FUNC_0(VAR_0->nHash, VAR_1);

  if( VAR_2 ) *VAR_2 = VAR_4;
  for(VAR_3=VAR_0->apHash[VAR_4]; VAR_3; VAR_3=VAR_3->pHashNext){
    if( VAR_3->iPg==VAR_1) break;
  }
  return VAR_3;
}
