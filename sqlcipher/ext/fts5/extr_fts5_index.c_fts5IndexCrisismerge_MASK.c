
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ rc; TYPE_2__* pConfig; } ;
struct TYPE_13__ {int nLevel; TYPE_1__* aLevel; } ;
struct TYPE_12__ {int nCrisisMerge; } ;
struct TYPE_11__ {int const nSeg; } ;
typedef TYPE_3__ Fts5Structure ;
typedef TYPE_4__ Fts5Index ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__**,int,int ) ;
 int FUNC_2 (TYPE_4__*,int,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(
  Fts5Index *VAR_1,
  Fts5Structure **VAR_2
){
  const int VAR_3 = VAR_1->pConfig->nCrisisMerge;
  Fts5Structure *VAR_4 = *VAR_2;
  int VAR_5 = 0;

  FUNC_0( VAR_1->rc!=VAR_0 || VAR_4->nLevel>0 );
  while( VAR_1->rc==VAR_0 && VAR_4->aLevel[VAR_5].nSeg>=VAR_3 ){
    FUNC_1(VAR_1, &VAR_4, VAR_5, 0);
    FUNC_0( VAR_1->rc!=VAR_0 || VAR_4->nLevel>(VAR_5+1) );
    FUNC_2(VAR_1, VAR_5+1, VAR_4);
    VAR_5++;
  }
  *VAR_2 = VAR_4;
}
