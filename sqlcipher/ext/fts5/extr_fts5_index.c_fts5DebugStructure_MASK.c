
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nLevel; TYPE_2__* aLevel; } ;
struct TYPE_6__ {int nSeg; TYPE_1__* aSeg; int nMerge; } ;
struct TYPE_5__ {int pgnoLast; int pgnoFirst; int iSegid; } ;
typedef TYPE_1__ Fts5StructureSegment ;
typedef TYPE_2__ Fts5StructureLevel ;
typedef TYPE_3__ Fts5Structure ;
typedef int Fts5Buffer ;


 int FUNC_0 (int*,int *,char*,...) ;

__attribute__((used)) static void FUNC_1(
  int *VAR_0,
  Fts5Buffer *VAR_1,
  Fts5Structure *VAR_2
){
  int VAR_3, VAR_4;

  for(VAR_3=0; VAR_3<VAR_2->nLevel; VAR_3++){
    Fts5StructureLevel *VAR_5 = &VAR_2->aLevel[VAR_3];
    FUNC_0(VAR_0, VAR_1,
        " {lvl=%d nMerge=%d nSeg=%d", VAR_3, VAR_5->nMerge, VAR_5->nSeg
    );
    for(VAR_4=0; VAR_4<VAR_5->nSeg; VAR_4++){
      Fts5StructureSegment *VAR_6 = &VAR_5->aSeg[VAR_4];
      FUNC_0(VAR_0, VAR_1, " {id=%d leaves=%d..%d}",
          VAR_6->iSegid, VAR_6->pgnoFirst, VAR_6->pgnoLast
      );
    }
    FUNC_0(VAR_0, VAR_1, "}");
  }
}
