
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int pEnv; int pFS; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_8__ {int nData; scalar_t__ pData; } ;
typedef int Segment ;
typedef int Page ;
typedef int LsmPgno ;
typedef TYPE_2__ LsmBlob ;


 int * FUNC_0 (int *,int*) ;
 int FUNC_1 (int ,int *,int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int,int) ;
 int FUNC_6 (int ,int *,int *,int ,int*,TYPE_2__*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *,int *,int,int,void**,TYPE_2__*) ;

__attribute__((used)) static void FUNC_9(
  lsm_db *VAR_0,
  Segment *VAR_1,
  int VAR_2,
  Page *VAR_3,
  int VAR_4,
  int *VAR_5,
  int *VAR_6,
  u8 **VAR_7, int *VAR_8,
  u8 **VAR_9, int *VAR_10,
  LsmBlob *VAR_11
){
  u8 *VAR_12; int VAR_13;
  u8 *VAR_14; int VAR_15 = 0;
  u8 *VAR_16 = 0; int VAR_17 = 0;
  int VAR_18;
  int VAR_19;
  Page *VAR_20 = 0;
  u8 *VAR_21;

  VAR_12 = FUNC_0(VAR_3, &VAR_13);

  VAR_21 = FUNC_5(VAR_12, VAR_13, VAR_4);
  VAR_18 = *VAR_21++;
  VAR_21 += FUNC_3(VAR_21, &VAR_19);

  if( VAR_18==0 ){
    int VAR_22;
    LsmPgno VAR_23;
    VAR_21 += FUNC_4(VAR_21, &VAR_23);
    if( VAR_2 ){
      FUNC_1(VAR_0->pFS, VAR_1, VAR_23, &VAR_20);
      FUNC_6(VAR_0->pEnv, VAR_1, VAR_20, 0, &VAR_22, VAR_11);
      VAR_14 = (u8 *)VAR_11->pData;
      VAR_15 = VAR_11->nData;
      FUNC_2(VAR_20);
    }else{
      VAR_14 = (u8 *)"<indirect>";
      VAR_15 = 11;
    }
  }else{
    VAR_21 += FUNC_3(VAR_21, &VAR_15);
    if( FUNC_7(VAR_18) ) VAR_21 += FUNC_3(VAR_21, &VAR_17);
    FUNC_8(VAR_1, VAR_3, (VAR_21-VAR_12), VAR_15+VAR_17, (void **)&VAR_14, VAR_11);
    VAR_16 = &VAR_14[VAR_15];
  }

  if( VAR_5 ) *VAR_5 = VAR_18;
  if( VAR_6 ) *VAR_6 = VAR_19;
  if( VAR_7 ) *VAR_7 = VAR_14;
  if( VAR_9 ) *VAR_9 = VAR_16;
  if( VAR_8 ) *VAR_8 = VAR_15;
  if( VAR_10 ) *VAR_10 = VAR_17;
}
