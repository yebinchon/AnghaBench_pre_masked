
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_11__ {int rc; } ;
struct TYPE_10__ {int nSegment; int nLevel; int nRef; TYPE_1__* aLevel; int nWriteCounter; } ;
struct TYPE_9__ {int nSeg; int nMerge; int * aSeg; } ;
typedef int Fts5StructureSegment ;
typedef TYPE_1__ Fts5StructureLevel ;
typedef TYPE_2__ Fts5Structure ;
typedef TYPE_3__ Fts5Index ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static Fts5Structure *FUNC_4(
  Fts5Index *VAR_0,
  Fts5Structure *VAR_1
){
  Fts5Structure *VAR_2 = 0;
  sqlite3_int64 VAR_3 = sizeof(Fts5Structure);
  int VAR_4 = VAR_1->nSegment;
  int VAR_5;
  if( VAR_4<2 ) return 0;
  for(VAR_5=0; VAR_5<VAR_1->nLevel; VAR_5++){
    int VAR_6 = VAR_1->aLevel[VAR_5].nSeg;
    if( VAR_6==VAR_4 || (VAR_6==VAR_4-1 && VAR_1->aLevel[VAR_5].nMerge==VAR_6) ){
      FUNC_1(VAR_1);
      return VAR_1;
    }
    FUNC_0( VAR_1->aLevel[VAR_5].nMerge<=VAR_6 );
  }

  VAR_3 += (VAR_1->nLevel+1) * sizeof(Fts5StructureLevel);
  VAR_2 = (Fts5Structure*)FUNC_2(&VAR_0->rc, VAR_3);

  if( VAR_2 ){
    Fts5StructureLevel *VAR_7;
    VAR_3 = VAR_4 * sizeof(Fts5StructureSegment);
    VAR_2->nLevel = VAR_1->nLevel+1;
    VAR_2->nRef = 1;
    VAR_2->nWriteCounter = VAR_1->nWriteCounter;
    VAR_7 = &VAR_2->aLevel[VAR_1->nLevel];
    VAR_7->aSeg = (Fts5StructureSegment*)FUNC_2(&VAR_0->rc, VAR_3);
    if( VAR_7->aSeg ){
      int VAR_8, VAR_9;
      int VAR_10 = 0;



      for(VAR_8=VAR_1->nLevel-1; VAR_8>=0; VAR_8--){
        for(VAR_9=0; VAR_9<VAR_1->aLevel[VAR_8].nSeg; VAR_9++){
          VAR_7->aSeg[VAR_10] = VAR_1->aLevel[VAR_8].aSeg[VAR_9];
          VAR_10++;
        }
      }
      VAR_2->nSegment = VAR_7->nSeg = VAR_4;
    }else{
      FUNC_3(VAR_2);
      VAR_2 = 0;
    }
  }

  return VAR_2;
}
