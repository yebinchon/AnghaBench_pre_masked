
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int sqlite3_stmt ;
typedef int aUsed ;
struct TYPE_11__ {scalar_t__ rc; } ;
struct TYPE_10__ {int nSegment; int nLevel; TYPE_2__* aLevel; } ;
struct TYPE_9__ {int nSeg; TYPE_1__* aSeg; } ;
struct TYPE_8__ {int iSegid; } ;
typedef TYPE_3__ Fts5Structure ;
typedef TYPE_4__ Fts5Index ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int *,int,int*,int,int ) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(Fts5Index *VAR_5, Fts5Structure *VAR_6){
  int VAR_7 = 0;

  if( VAR_5->rc==VAR_2 ){
    if( VAR_6->nSegment>=VAR_0 ){
      VAR_5->rc = VAR_1;
    }else{


      u32 VAR_8[(VAR_0+31) / 32];
      int VAR_9, VAR_10;
      int VAR_11;
      u32 VAR_12;
      FUNC_2(VAR_8, 0, sizeof(VAR_8));
      for(VAR_9=0; VAR_9<VAR_6->nLevel; VAR_9++){
        for(VAR_10=0; VAR_10<VAR_6->aLevel[VAR_9].nSeg; VAR_10++){
          int VAR_13 = VAR_6->aLevel[VAR_9].aSeg[VAR_10].iSegid;
          if( VAR_13<=VAR_0 && VAR_13>0 ){
            VAR_8[(VAR_13-1) / 32] |= (u32)1 << ((VAR_13-1) % 32);
          }
        }
      }

      for(VAR_11=0; VAR_8[VAR_11]==0xFFFFFFFF; VAR_11++);
      VAR_12 = VAR_8[VAR_11];
      for(VAR_7=0; VAR_12 & ((u32)1 << VAR_7); VAR_7++);
      VAR_7 += 1 + VAR_11*32;
    }
  }

  return VAR_7;
}
