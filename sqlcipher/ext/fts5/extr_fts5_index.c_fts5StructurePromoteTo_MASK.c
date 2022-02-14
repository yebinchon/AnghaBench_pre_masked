
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ rc; } ;
struct TYPE_8__ {int nLevel; TYPE_1__* aLevel; } ;
struct TYPE_7__ {scalar_t__ nMerge; int nSeg; int * aSeg; } ;
typedef int Fts5StructureSegment ;
typedef TYPE_1__ Fts5StructureLevel ;
typedef TYPE_2__ Fts5Structure ;
typedef TYPE_3__ Fts5Index ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*,TYPE_2__*,int,int,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void FUNC_3(
  Fts5Index *VAR_0,
  int VAR_1,
  int VAR_2,
  Fts5Structure *VAR_3
){
  int VAR_4, VAR_5;
  Fts5StructureLevel *VAR_6 = &VAR_3->aLevel[VAR_1];

  if( VAR_6->nMerge==0 ){
    for(VAR_4=VAR_1+1; VAR_4<VAR_3->nLevel; VAR_4++){
      Fts5StructureLevel *VAR_7 = &VAR_3->aLevel[VAR_4];
      if( VAR_7->nMerge ) return;
      for(VAR_5=VAR_7->nSeg-1; VAR_5>=0; VAR_5--){
        int VAR_8 = FUNC_0(&VAR_7->aSeg[VAR_5]);
        if( VAR_8>VAR_2 ) return;
        FUNC_1(&VAR_0->rc, VAR_3, VAR_1, 1, 1);
        if( VAR_0->rc ) return;
        FUNC_2(VAR_6->aSeg, &VAR_7->aSeg[VAR_5], sizeof(Fts5StructureSegment));
        VAR_6->nSeg++;
        VAR_7->nSeg--;
      }
    }
  }
}
