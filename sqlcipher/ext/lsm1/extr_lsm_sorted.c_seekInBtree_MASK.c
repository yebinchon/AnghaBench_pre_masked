
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_14__ {void* pData; int member_2; int member_1; int member_0; } ;
struct TYPE_13__ {TYPE_1__* pDb; } ;
struct TYPE_12__ {scalar_t__ iRoot; } ;
struct TYPE_11__ {int xCmp; int pFS; } ;
typedef TYPE_2__ Segment ;
typedef int Page ;
typedef TYPE_3__ MultiCursor ;
typedef int LsmPgno ;
typedef TYPE_4__ LsmBlob ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,int*) ;
 int FUNC_2 (int ,TYPE_2__*,int,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int *,int,int*,int*,void**,int*,TYPE_4__*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int ,int,void*,int,int,void*,int) ;

__attribute__((used)) static int FUNC_11(
  MultiCursor *VAR_2,
  Segment *VAR_3,
  int VAR_4,
  void *VAR_5, int VAR_6,
  LsmPgno *VAR_7,
  Page **VAR_8
){
  int VAR_9 = 0;
  int VAR_10;
  int VAR_11;
  Page *VAR_12 = 0;
  LsmBlob VAR_13 = {0, 0, 0};

  VAR_11 = (int)VAR_3->iRoot;
  do {
    LsmPgno *VAR_14 = 0;
    if( VAR_7 ){
      VAR_7[VAR_9++] = VAR_11;
      VAR_14 = &VAR_7[VAR_9];
    }

    VAR_10 = FUNC_2(VAR_2->pDb->pFS, VAR_3, VAR_11, &VAR_12);
    FUNC_0( VAR_10==VAR_0 || VAR_12==0 );
    if( VAR_10==VAR_0 ){
      u8 *VAR_15;
      int VAR_16;
      int VAR_17;
      int VAR_18;
      int VAR_19;
      int VAR_20;

      VAR_15 = FUNC_1(VAR_12, &VAR_16);
      VAR_20 = FUNC_6(VAR_15, VAR_16);
      if( (VAR_20 & VAR_1)==0 ) break;

      VAR_11 = (int)FUNC_8(VAR_15, VAR_16);
      VAR_19 = FUNC_7(VAR_15, VAR_16);

      VAR_17 = 0;
      VAR_18 = VAR_19-1;
      while( VAR_18>=VAR_17 ){
        int VAR_21 = (VAR_17+VAR_18)/2;
        void *VAR_22; int VAR_23;
        int VAR_24;
        LsmPgno VAR_25;
        int VAR_26;

        VAR_10 = FUNC_4(
            VAR_3, VAR_12, VAR_21, &VAR_25, &VAR_24, &VAR_22, &VAR_23, &VAR_13
        );
        if( VAR_10!=VAR_0 ) break;
        if( VAR_14 && VAR_22==VAR_13.pData ){
          *VAR_14 = FUNC_5(VAR_12, VAR_21);
          VAR_14 = 0;
          VAR_9++;
        }

        VAR_26 = FUNC_10(
            VAR_2->pDb->xCmp, VAR_4, VAR_5, VAR_6, VAR_24, VAR_22, VAR_23
        );
        if( VAR_26<0 ){
          VAR_11 = (int)VAR_25;
          VAR_18 = VAR_21-1;
        }else{
          VAR_17 = VAR_21+1;
        }
      }
      FUNC_3(VAR_12);
      VAR_12 = 0;
    }
  }while( VAR_10==VAR_0 );

  FUNC_9(&VAR_13);
  FUNC_0( (VAR_10==VAR_0)==(VAR_12!=0) );
  if( VAR_8 ){
    *VAR_8 = VAR_12;
  }else{
    FUNC_3(VAR_12);
  }
  return VAR_10;
}
