
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef int aKey2 ;
typedef int aKey1 ;
typedef int aKey ;
typedef int TestDb ;
struct TYPE_3__ {int nRange; int nValMax; int nIter; int nWrite; int nValMin; int nDelete; } ;
typedef TYPE_1__ Datatest3 ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int *,int*,int,void**,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int ,int*) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int,int,int*) ;
 int FUNC_7 (int *,int*,int,int*,int,int*) ;
 scalar_t__ FUNC_8 (int) ;
 int * FUNC_9 (char const*,int,int*) ;
 int FUNC_10 (int,char*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int **,int*) ;
 int FUNC_13 (int *,int*,int,char*,int,int*) ;

__attribute__((used)) static void FUNC_14(
  const char *VAR_0,
  Datatest3 *VAR_1,
  int *VAR_2
){
  int VAR_3 = 0;
  int VAR_4 = *VAR_2;
  TestDb *VAR_5;
  u8 *VAR_6;
  char *VAR_7;
  int VAR_8;
  u32 VAR_9 = 10;

  VAR_6 = (u8 *)FUNC_8(VAR_1->nRange+1);
  VAR_7 = (char *)FUNC_8(VAR_1->nValMax+1);
  VAR_5 = FUNC_9(VAR_0, 1, &VAR_4);

  for(VAR_8=0; VAR_8<VAR_1->nIter && VAR_4==0; VAR_8++){
    int VAR_10;

    FUNC_4(VAR_8, VAR_1->nIter, FUNC_3(), &VAR_3);


    for(VAR_10=0; VAR_10<VAR_1->nWrite; VAR_10++){
      u8 VAR_11[6];
      u32 VAR_12;
      int VAR_13;

      VAR_12 = (FUNC_11(VAR_9++) % VAR_1->nRange) + 1;
      VAR_13 = (FUNC_11(VAR_9++) % (VAR_1->nValMax - VAR_1->nValMin)) + VAR_1->nValMin;
      FUNC_10(FUNC_11(VAR_9++), VAR_7, VAR_13);
      FUNC_0(VAR_11, VAR_12);

      FUNC_13(VAR_5, VAR_11, sizeof(VAR_11)-1, VAR_7, VAR_13, &VAR_4);
      VAR_6[VAR_12] = 1;
    }


    for(VAR_10=0; VAR_10<VAR_1->nDelete; VAR_10++){
      u8 VAR_14[6];
      u8 VAR_15[6];
      u32 VAR_16;

      VAR_16 = (FUNC_11(VAR_9++) % VAR_1->nRange) + 1;
      FUNC_0(VAR_14, VAR_16-1);
      FUNC_0(VAR_15, VAR_16+1);

      FUNC_7(VAR_5, VAR_14, sizeof(VAR_14)-1, VAR_15, sizeof(VAR_15)-1, &VAR_4);
      VAR_6[VAR_16] = 0;
    }

    FUNC_12(&VAR_5, &VAR_4);

    for(VAR_10=1; VAR_4==0 && VAR_10<=VAR_1->nRange; VAR_10++){
      int VAR_17;
      void *VAR_18;
      u8 VAR_19[6];
      int VAR_20;

      FUNC_0(VAR_19, VAR_10);
      VAR_20 = FUNC_1(VAR_5, VAR_19, sizeof(VAR_19)-1, &VAR_18, &VAR_17);
      FUNC_6(0, VAR_20, &VAR_4);

      if( VAR_6[VAR_10] ){
        FUNC_6(1, (VAR_17>0), &VAR_4);
      }else{
        FUNC_6(1, (VAR_17<0), &VAR_4);
      }
    }
  }

  FUNC_5(&VAR_5);
  FUNC_2(VAR_4);
  *VAR_2 = VAR_4;
}
