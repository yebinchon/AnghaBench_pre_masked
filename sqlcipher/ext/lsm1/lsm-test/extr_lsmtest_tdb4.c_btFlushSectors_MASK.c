
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int sqlite4_int64 ;
struct TYPE_7__ {int nSector; int nSectorSize; int ** apSector; int pFile; TYPE_2__* pBt; } ;
struct TYPE_6__ {TYPE_1__* pVfs; scalar_t__ bCrash; } ;
struct TYPE_5__ {int (* xSize ) (int ,int*) ;int (* xWrite ) (int ,int,int *,int) ;} ;
typedef TYPE_3__ BtFile ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,char*,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int,int *,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int,int *,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(BtFile *VAR_2, int VAR_3){
  sqlite4_int64 VAR_4;
  int VAR_5;
  int VAR_6;
  u8 *VAR_7 = 0;

  VAR_5 = VAR_2->pBt->pVfs->xSize(VAR_2->pFile, &VAR_4);
  for(VAR_6=0; VAR_5==VAR_0 && VAR_6<VAR_2->nSector; VAR_6++){
    if( VAR_2->pBt->bCrash && VAR_2->apSector[VAR_6] ){
      sqlite4_int64 VAR_8 = VAR_2->nSectorSize*VAR_6;
      int VAR_9 = FUNC_0(VAR_2->nSectorSize, VAR_4 - VAR_8);

      if( VAR_9 ){
        u8 *VAR_10 = 0;
        int VAR_11 = (FUNC_8(VAR_6) % 3) + 1;
        if( VAR_11==1 ){
          VAR_10 = VAR_2->apSector[VAR_6];
        }else if( VAR_11==3 ){
          if( VAR_7==0 ) VAR_7 = FUNC_6(VAR_2->nSectorSize);
          VAR_10 = VAR_7;
          FUNC_7(VAR_6*13, (u32*)VAR_10, VAR_9/sizeof(u32));
        }
        if( VAR_10 ){
          VAR_5 = VAR_2->pBt->pVfs->xWrite(VAR_2->pFile, VAR_8, VAR_10, VAR_9);
        }
      }
    }
    FUNC_5(VAR_2->apSector[VAR_6]);
    VAR_2->apSector[VAR_6] = 0;
  }

  FUNC_5(VAR_7);
  return VAR_5;
}
