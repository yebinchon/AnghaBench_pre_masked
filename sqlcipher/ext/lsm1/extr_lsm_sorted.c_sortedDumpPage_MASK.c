
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char u8 ;
struct TYPE_13__ {int pFS; int pEnv; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_15__ {int member_2; int member_1; int member_0; } ;
struct TYPE_14__ {int z; } ;
typedef int Segment ;
typedef int Page ;
typedef TYPE_2__ LsmString ;
typedef int LsmPgno ;
typedef TYPE_3__ LsmBlob ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int *,int*) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (int ,int *,int ,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ,char*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,char*,int) ;
 int FUNC_8 (TYPE_2__*,char*,...) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (char*,int*) ;
 int FUNC_12 (char*,int *) ;
 char* FUNC_13 (char*,int,int) ;
 int FUNC_14 (char*,int) ;
 char* FUNC_15 (int *,int *,int ,int*,int*,TYPE_3__*) ;
 int FUNC_16 (char*,int) ;
 scalar_t__ FUNC_17 (char*,int) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (int ,int *,int,int,void**,TYPE_3__*) ;

void FUNC_21(lsm_db *VAR_2, Segment *VAR_3, Page *VAR_4, int VAR_5){
  LsmBlob VAR_6 = {0, 0, 0};
  LsmString VAR_7;
  int VAR_8;

  int VAR_9;
  int VAR_10;
  int VAR_11;
  u8 *VAR_12;
  int VAR_13;

  VAR_12 = FUNC_1(VAR_4, &VAR_13);

  VAR_9 = FUNC_16(VAR_12, VAR_13);
  VAR_10 = (int)FUNC_17(VAR_12, VAR_13);
  VAR_11 = FUNC_14(VAR_12, VAR_13);

  FUNC_10(&VAR_7, VAR_2->pEnv);
  FUNC_8(&VAR_7,"nCell=%d iPtr=%d flags=%d {", VAR_9, VAR_10, VAR_11);
  if( VAR_11&VAR_1 ) VAR_10 = 0;

  for(VAR_8=0; VAR_8<VAR_9; VAR_8++){
    Page *VAR_14 = 0;
    int VAR_15;
    u8 *VAR_16; int VAR_17 = 0;
    u8 *VAR_18 = 0; int VAR_19 = 0;
    int VAR_20;
    u8 *VAR_21;
    int VAR_22;
    int VAR_23;

    VAR_21 = FUNC_13(VAR_12, VAR_13, VAR_8);
    VAR_23 = *VAR_21++;
    FUNC_0( (VAR_11 & VAR_1) || VAR_23!=0 );
    VAR_21 += FUNC_11(VAR_21, &VAR_22);

    if( VAR_23==0 ){
      LsmPgno VAR_24;
      VAR_21 += FUNC_12(VAR_21, &VAR_24);
      FUNC_3(VAR_2->pFS, VAR_3, VAR_24, &VAR_14);
      VAR_16 = FUNC_15(VAR_3, VAR_14, 0, &VAR_20, &VAR_17, &VAR_6);
    }else{
      VAR_21 += FUNC_11(VAR_21, &VAR_17);
      if( FUNC_18(VAR_23) ) VAR_21 += FUNC_11(VAR_21, &VAR_19);
      FUNC_20(0, VAR_4, (VAR_21-VAR_12), VAR_17+VAR_19, (void **)&VAR_16, &VAR_6);
      VAR_18 = &VAR_16[VAR_17];
      VAR_20 = VAR_23;
    }

    FUNC_8(&VAR_7, "%s%2X:", (VAR_8==0?"":" "), VAR_20);
    for(VAR_15=0; VAR_15<VAR_17; VAR_15++){
      FUNC_8(&VAR_7, "%c", FUNC_2(VAR_16[VAR_15]) ? VAR_16[VAR_15] : '.');
    }
    if( VAR_19>0 && VAR_5 ){
      FUNC_8(&VAR_7, "##");
      for(VAR_15=0; VAR_15<VAR_19; VAR_15++){
        FUNC_8(&VAR_7, "%c", FUNC_2(VAR_18[VAR_15]) ? VAR_18[VAR_15] : '.');
      }
    }

    FUNC_8(&VAR_7, " %d", VAR_22+VAR_10);
    FUNC_5(VAR_14);
  }
  FUNC_7(&VAR_7, "}", 1);

  FUNC_6(VAR_2, VAR_0, "      Page %d: %s", FUNC_4(VAR_4), VAR_7.z);
  FUNC_9(&VAR_7);

  FUNC_19(&VAR_6);
}
