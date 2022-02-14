
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_5__ {TYPE_1__* aLevel; } ;
struct TYPE_4__ {int nSeg; int * aSeg; } ;
typedef int Fts5StructureSegment ;
typedef TYPE_1__ Fts5StructureLevel ;
typedef TYPE_2__ Fts5Structure ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int * FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(
  int *VAR_2,
  Fts5Structure *VAR_3,
  int VAR_4,
  int VAR_5,
  int VAR_6
){
  if( *VAR_2==VAR_1 ){
    Fts5StructureLevel *VAR_7 = &VAR_3->aLevel[VAR_4];
    Fts5StructureSegment *VAR_8;
    sqlite3_int64 VAR_9;

    VAR_9 = (VAR_7->nSeg + VAR_5) * sizeof(Fts5StructureSegment);
    VAR_8 = FUNC_2(VAR_7->aSeg, VAR_9);
    if( VAR_8 ){
      if( VAR_6==0 ){
        FUNC_1(&VAR_8[VAR_7->nSeg], 0, sizeof(Fts5StructureSegment) * VAR_5);
      }else{
        int VAR_10 = VAR_7->nSeg * sizeof(Fts5StructureSegment);
        FUNC_0(&VAR_8[VAR_5], VAR_8, VAR_10);
        FUNC_1(VAR_8, 0, sizeof(Fts5StructureSegment) * VAR_5);
      }
      VAR_7->aSeg = VAR_8;
    }else{
      *VAR_2 = VAR_0;
    }
  }
}
