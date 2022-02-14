
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_int64 ;
struct TYPE_8__ {int nRef; int nLevel; int nSegment; TYPE_2__* aLevel; int nWriteCounter; } ;
struct TYPE_7__ {int nMerge; int nSeg; TYPE_1__* aSeg; } ;
struct TYPE_6__ {int iSegid; int pgnoFirst; int pgnoLast; } ;
typedef TYPE_1__ Fts5StructureSegment ;
typedef TYPE_2__ Fts5StructureLevel ;
typedef TYPE_3__ Fts5Structure ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*,int *) ;
 scalar_t__ FUNC_4 (int*,int) ;

__attribute__((used)) static int FUNC_5(
  const u8 *VAR_3,
  int VAR_4,
  int *VAR_5,
  Fts5Structure **VAR_6
){
  int VAR_7 = VAR_2;
  int VAR_8 = 0;
  int VAR_9;
  int VAR_10 = 0;
  int VAR_11 = 0;
  sqlite3_int64 VAR_12;
  Fts5Structure *VAR_13 = 0;


  if( VAR_5 ) *VAR_5 = FUNC_2(VAR_3);
  VAR_8 = 4;



  VAR_8 += FUNC_0(&VAR_3[VAR_8], VAR_10);
  VAR_8 += FUNC_0(&VAR_3[VAR_8], VAR_11);
  if( VAR_10>VAR_1 || VAR_10<0
   || VAR_11>VAR_1 || VAR_11<0
  ){
    return VAR_0;
  }
  VAR_12 = (
      sizeof(Fts5Structure) +
      sizeof(Fts5StructureLevel) * (VAR_10-1)
  );
  VAR_13 = (Fts5Structure*)FUNC_4(&VAR_7, VAR_12);

  if( VAR_13 ){
    VAR_13->nRef = 1;
    VAR_13->nLevel = VAR_10;
    VAR_13->nSegment = VAR_11;
    VAR_8 += FUNC_3(&VAR_3[VAR_8], &VAR_13->nWriteCounter);

    for(VAR_9=0; VAR_7==VAR_2 && VAR_9<VAR_10; VAR_9++){
      Fts5StructureLevel *VAR_14 = &VAR_13->aLevel[VAR_9];
      int VAR_15 = 0;
      int VAR_16;

      if( VAR_8>=VAR_4 ){
        VAR_7 = VAR_0;
      }else{
        VAR_8 += FUNC_0(&VAR_3[VAR_8], VAR_14->nMerge);
        VAR_8 += FUNC_0(&VAR_3[VAR_8], VAR_15);
        if( VAR_15<VAR_14->nMerge ) VAR_7 = VAR_0;
        VAR_14->aSeg = (Fts5StructureSegment*)FUNC_4(&VAR_7,
            VAR_15 * sizeof(Fts5StructureSegment)
        );
        VAR_11 -= VAR_15;
      }

      if( VAR_7==VAR_2 ){
        VAR_14->nSeg = VAR_15;
        for(VAR_16=0; VAR_16<VAR_15; VAR_16++){
          Fts5StructureSegment *VAR_17 = &VAR_14->aSeg[VAR_16];
          if( VAR_8>=VAR_4 ){
            VAR_7 = VAR_0;
            break;
          }
          VAR_8 += FUNC_0(&VAR_3[VAR_8], VAR_17->iSegid);
          VAR_8 += FUNC_0(&VAR_3[VAR_8], VAR_17->pgnoFirst);
          VAR_8 += FUNC_0(&VAR_3[VAR_8], VAR_17->pgnoLast);
          if( VAR_17->pgnoLast<VAR_17->pgnoFirst ){
            VAR_7 = VAR_0;
            break;
          }
        }
        if( VAR_9>0 && VAR_14[-1].nMerge && VAR_15==0 ) VAR_7 = VAR_0;
        if( VAR_9==VAR_10-1 && VAR_14->nMerge ) VAR_7 = VAR_0;
      }
    }
    if( VAR_11!=0 && VAR_7==VAR_2 ) VAR_7 = VAR_0;

    if( VAR_7!=VAR_2 ){
      FUNC_1(VAR_13);
      VAR_13 = 0;
    }
  }

  *VAR_6 = VAR_13;
  return VAR_7;
}
