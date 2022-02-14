
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite4_int64 ;
struct TYPE_7__ {int nSectorSize; int nSector; int ** apSector; int pFile; TYPE_2__* pBt; } ;
struct TYPE_6__ {TYPE_1__* pVfs; } ;
struct TYPE_5__ {int (* xSectorSize ) (int ) ;int (* xSize ) (int ,int*) ;int (* xRead ) (int ,int,int *,int) ;} ;
typedef TYPE_3__ BtFile ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int **,int **,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int,int *,int) ;
 int FUNC_5 (int **) ;
 int * FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(BtFile *VAR_1, sqlite4_int64 VAR_2, int VAR_3){
  int VAR_4;
  sqlite4_int64 VAR_5;
  int VAR_6;
  int VAR_7;
  int VAR_8;

  if( VAR_1->nSectorSize==0 ){
    VAR_1->nSectorSize = VAR_1->pBt->pVfs->xSectorSize(VAR_1->pFile);
    if( VAR_1->nSectorSize<512 ) VAR_1->nSectorSize = 512;
  }
  VAR_8 = (VAR_2+VAR_3-1) / VAR_1->nSectorSize;
  VAR_6 = VAR_2 / VAR_1->nSectorSize;

  VAR_4 = VAR_1->pBt->pVfs->xSize(VAR_1->pFile, &VAR_5);
  for(VAR_7=VAR_6; VAR_4==VAR_0 && VAR_7<=VAR_8; VAR_7++){
    int VAR_9;
    sqlite4_int64 VAR_10 = VAR_7 * VAR_1->nSectorSize;
    u8 *VAR_11 = FUNC_6(VAR_1->nSectorSize);
    VAR_9 = FUNC_0(VAR_1->nSectorSize, (VAR_5 - VAR_10));
    if( VAR_9>0 ){
      VAR_4 = VAR_1->pBt->pVfs->xRead(VAR_1->pFile, VAR_10, VAR_11, VAR_9);
    }

    while( VAR_4==VAR_0 && VAR_7>=VAR_1->nSector ){
      int VAR_12 = VAR_1->nSector + 32;
      u8 **VAR_13 = (u8**)FUNC_6(VAR_12 * sizeof(u8*));
      FUNC_1(VAR_13, VAR_1->apSector, VAR_1->nSector*sizeof(u8*));
      FUNC_5(VAR_1->apSector);
      VAR_1->apSector = VAR_13;
      VAR_1->nSector = VAR_12;
    }

    VAR_1->apSector[VAR_7] = VAR_11;
  }

  return VAR_4;
}
