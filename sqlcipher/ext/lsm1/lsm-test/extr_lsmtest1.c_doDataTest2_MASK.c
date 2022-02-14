
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_3__ {int nIter; int nWrite; int nRange; int defn; } ;
typedef TYPE_1__ Datatest2 ;
typedef int Datasource ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__,int ,int*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int,int ,int*) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int *,int,int,int *,int *,int*) ;
 int FUNC_8 (int **) ;
 int FUNC_9 (int *,int,void**,int*,int ,int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *,void*,int,void*,int,int*) ;
 int FUNC_13 (void*) ;
 void* FUNC_14 (void*,int) ;
 int * FUNC_15 (char const*,int,int*) ;
 int FUNC_16 (int **,int*) ;
 int FUNC_17 (int **,int*) ;
 int FUNC_18 (int *,int *,int,int*) ;

__attribute__((used)) static void FUNC_19(
  const char *VAR_2,
  int VAR_3,
  Datatest2 *VAR_4,
  int *VAR_5
){
  TestDb *VAR_6;
  TestDb *VAR_7;
  Datasource *VAR_8;
  int VAR_9;
  int VAR_10 = VAR_1;
  int VAR_11 = 0;


  VAR_6 = FUNC_15(VAR_2, 1, &VAR_10);
  VAR_8 = FUNC_11(&VAR_4->defn);
  VAR_10 = FUNC_8(&VAR_7);

  if( FUNC_2(VAR_6) ){
    int VAR_12 = 32 * 1024 * 1024;
    FUNC_1(FUNC_2(VAR_6), VAR_0, &VAR_12);
  }

  for(VAR_9=0; VAR_10==0 && VAR_9<VAR_4->nIter; VAR_9++){
    void *VAR_13; int VAR_14;
    void *VAR_15; int VAR_16;
    int VAR_17;
    int VAR_18 = FUNC_0(VAR_4->nIter*VAR_4->nWrite, VAR_4->nRange);

    for(VAR_17=0; VAR_10==0 && VAR_17<VAR_4->nWrite; VAR_17++){
      int VAR_19 = (VAR_9*VAR_4->nWrite + VAR_17) % VAR_4->nRange;
      FUNC_18(VAR_7, VAR_8, VAR_19, &VAR_10);
      FUNC_18(VAR_6, VAR_8, VAR_19, &VAR_10);
    }

    FUNC_9(VAR_8, VAR_9+1000000, &VAR_13, &VAR_14, 0, 0);
    VAR_13 = FUNC_14(VAR_13, VAR_14);
    FUNC_9(VAR_8, VAR_9+2000000, &VAR_15, &VAR_16, 0, 0);

    FUNC_12(VAR_6, VAR_13, VAR_14, VAR_15, VAR_16, &VAR_10);
    FUNC_12(VAR_7, VAR_13, VAR_14, VAR_15, VAR_16, &VAR_10);
    FUNC_13(VAR_13);

    FUNC_7(VAR_8, VAR_18, VAR_9, VAR_7, VAR_6, &VAR_10);
    if( VAR_3 ){
      FUNC_17(&VAR_6, &VAR_10);
    }else{
      FUNC_16(&VAR_6, &VAR_10);
    }
    FUNC_7(VAR_8, VAR_18, VAR_9, VAR_7, VAR_6, &VAR_10);


    FUNC_5(VAR_9, VAR_4->nIter, FUNC_4(), &VAR_11);
  }

  FUNC_6(&VAR_6);
  FUNC_6(&VAR_7);
  FUNC_10(VAR_8);
  FUNC_3(VAR_10);
  *VAR_5 = VAR_10;
}
