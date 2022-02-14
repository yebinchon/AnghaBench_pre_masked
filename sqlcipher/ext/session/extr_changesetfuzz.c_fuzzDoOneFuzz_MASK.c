
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_11__ {int iGroup; scalar_t__ eType; size_t iDelete; } ;
struct TYPE_10__ {int nGroup; scalar_t__ bPatchset; TYPE_1__** apGroup; } ;
struct TYPE_9__ {int* aChange; int nCol; int* aPK; int nChange; int zTab; } ;
typedef TYPE_1__ FuzzChangesetGroup ;
typedef TYPE_2__ FuzzChangeset ;
typedef TYPE_3__ FuzzChange ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int,TYPE_3__*,int**,int**) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_3 (char const*,int*,int) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(
  const char *VAR_6,
  u8 *VAR_7,
  FuzzChangeset *VAR_8
){
  FuzzChange VAR_9;
  int VAR_10;
  int VAR_11 = -1;

  while( VAR_11<0 ){
    u8 *VAR_12 = VAR_7;
    VAR_11 = FUNC_2(VAR_8, &VAR_9);
    for(VAR_10=0; VAR_11==VAR_5 && VAR_10<VAR_8->nGroup; VAR_10++){
      FuzzChangesetGroup *VAR_13 = VAR_8->apGroup[VAR_10];
      int VAR_14 = FUNC_5(VAR_13->zTab) + 1;
      int VAR_15;
      int VAR_16 = 1;







      if( VAR_9.iGroup==VAR_10 ){
        if( VAR_9.eType==VAR_3 ){
          if( VAR_8->nGroup==1 ) VAR_11 = -1;
          continue;
        }
        else if( VAR_9.eType==VAR_4 ){
          VAR_16 = 2;
        }
      }

      for(VAR_15=0; VAR_15<VAR_16; VAR_15++){
        int VAR_17;
        u8 *VAR_18;
        u8 *VAR_19 = VAR_13->aChange;
        int VAR_20 = VAR_13->nCol;
        int VAR_21 = 0;
        if( VAR_10==VAR_9.iGroup ){
          if( VAR_9.eType==VAR_0
           || VAR_9.eType==VAR_1
          ){
            VAR_20++;
          }else if( VAR_9.eType==VAR_2 ){
            VAR_20--;
            VAR_21 = VAR_13->aPK[VAR_9.iDelete];
          }
        }


        VAR_12++[0] = VAR_8->bPatchset ? 'P' : 'T';
        VAR_12 += FUNC_1(VAR_12, VAR_20);

        for(VAR_17=0; VAR_17<VAR_13->nCol; VAR_17++){
          if( VAR_10!=VAR_9.iGroup || VAR_17!=VAR_9.iDelete ){
            u8 VAR_22 = VAR_13->aPK[VAR_17];
            if( VAR_21 && VAR_22>VAR_21 ) VAR_22--;
            *(VAR_12++) = VAR_22;
          }
        }
        if( VAR_20>VAR_13->nCol ){
          if( VAR_9.eType==VAR_0 ){
            *(VAR_12++) = 0x00;
          }else{
            u8 VAR_23 = 0;
            for(VAR_17=0; VAR_17<VAR_13->nCol; VAR_17++){
              if( VAR_13->aPK[VAR_17]>VAR_23 ) VAR_23 = VAR_13->aPK[VAR_17];
            }
            *(VAR_12++) = VAR_23+1;
          }
        }
        FUNC_4(VAR_12, VAR_13->zTab, VAR_14);
        VAR_12 += VAR_14;


        VAR_18 = VAR_12;
        for(VAR_17=0; VAR_11==VAR_5 && VAR_17<VAR_13->nChange; VAR_17++){
          VAR_11 = FUNC_0(VAR_8, VAR_10, &VAR_9, &VAR_19, &VAR_12);
        }
        if( VAR_12==VAR_18 ) VAR_11 = -1;
      }
    }
    if( VAR_11==VAR_5 ){
      FUNC_3(VAR_6, VAR_7, VAR_12-VAR_7);
    }
  }

  return VAR_11;
}
