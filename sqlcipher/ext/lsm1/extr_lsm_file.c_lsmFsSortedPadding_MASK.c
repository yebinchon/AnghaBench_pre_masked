
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int aSz ;
struct TYPE_10__ {int szSector; scalar_t__* aOBuffer; scalar_t__ pCompress; } ;
struct TYPE_9__ {int iLastPg; int nSize; scalar_t__ iFirst; } ;
typedef int Snapshot ;
typedef TYPE_1__ Segment ;
typedef int LsmPgno ;
typedef TYPE_2__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,scalar_t__*,int,int*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (scalar_t__*,int ,int) ;
 int FUNC_5 (scalar_t__*,int,int) ;

int FUNC_6(
  FileSystem *VAR_1,
  Snapshot *VAR_2,
  Segment *VAR_3
){
  int VAR_4 = VAR_0;
  if( VAR_1->pCompress && VAR_3->iFirst ){
    LsmPgno VAR_5;
    LsmPgno VAR_6 = VAR_3->iLastPg;
    int VAR_7;
    u8 VAR_8[3];

    VAR_5 = (1 + VAR_6/VAR_1->szSector) * VAR_1->szSector - 1;
    FUNC_0( FUNC_3(VAR_1, VAR_6)==FUNC_3(VAR_1, VAR_5) );
    VAR_7 = (int)(VAR_5 - VAR_6);

    if( VAR_5>FUNC_2(VAR_1, VAR_6) ){
      VAR_7 -= 4;
    }
    FUNC_0( VAR_7>=0 );

    if( VAR_7>=6 ){
      VAR_3->nSize += VAR_7;
      VAR_7 -= 6;
      FUNC_5(VAR_8, VAR_7, 1);
      FUNC_1(VAR_1, VAR_3, VAR_8, sizeof(VAR_8), &VAR_4);
      FUNC_4(VAR_1->aOBuffer, 0, VAR_7);
      FUNC_1(VAR_1, VAR_3, VAR_1->aOBuffer, VAR_7, &VAR_4);
      FUNC_1(VAR_1, VAR_3, VAR_8, sizeof(VAR_8), &VAR_4);
    }else if( VAR_7>0 ){
      u8 VAR_9[5] = {0,0,0,0,0};
      VAR_9[0] = (u8)VAR_7;
      VAR_9[VAR_7-1] = (u8)VAR_7;
      FUNC_1(VAR_1, VAR_3, VAR_9, VAR_7, &VAR_4);
    }

    FUNC_0( VAR_4!=VAR_0
        || VAR_3->iLastPg==FUNC_2(VAR_1, VAR_3->iLastPg)
        || ((VAR_3->iLastPg + 1) % VAR_1->szSector)==0
    );
  }

  return VAR_4;
}
