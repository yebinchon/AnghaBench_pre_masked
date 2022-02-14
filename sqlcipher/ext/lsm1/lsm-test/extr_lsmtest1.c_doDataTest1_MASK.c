
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_3__ {int nRow; int nVerify; int bTestScan; int nTest; int defn; } ;
typedef TYPE_1__ Datatest1 ;
typedef int Datasource ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int,int*) ;
 int FUNC_5 (int *,int ,int*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int,int,int,int ,int ,int*) ;
 int FUNC_9 (int *,int *,int,int,int*) ;
 int * FUNC_10 (char const*,int,int*) ;
 int FUNC_11 (int **,int*) ;
 int FUNC_12 (int **,int*) ;
 int FUNC_13 (int *,int *,int,int,int*) ;

__attribute__((used)) static void FUNC_14(
  const char *VAR_1,
  int VAR_2,
  Datatest1 *VAR_3,
  int *VAR_4
){
  int VAR_5;
  int VAR_6;
  int VAR_7 = VAR_0;
  Datasource *VAR_8;
  TestDb *VAR_9;
  int VAR_10 = 0;


  VAR_9 = FUNC_10(VAR_1, 1, &VAR_7);
  VAR_8 = FUNC_7(&VAR_3->defn);

  VAR_5 = 0;
  VAR_6 = 0;
  while( VAR_7==VAR_0 && VAR_5<VAR_3->nRow ){


    FUNC_13(VAR_9, VAR_8, VAR_5, VAR_3->nVerify, &VAR_7);
    VAR_5 += VAR_3->nVerify;

    if( VAR_10 ) FUNC_1(VAR_9, 1, &VAR_7);

    FUNC_8(VAR_9, VAR_8, VAR_3->nRow, 0, VAR_5-1, VAR_3->nTest, VAR_3->bTestScan, &VAR_7);
    if( VAR_10 ) FUNC_5(VAR_9, 0, &VAR_7);
    VAR_10 = (VAR_10+1)%2;

    if( VAR_2 ){
      FUNC_12(&VAR_9, &VAR_7);
    }else{
      FUNC_11(&VAR_9, &VAR_7);
    }


    FUNC_8(VAR_9, VAR_8, VAR_3->nRow, 0, VAR_5-1, VAR_3->nTest, VAR_3->bTestScan, &VAR_7);


    FUNC_4(VAR_5, VAR_3->nRow, FUNC_3()/2, &VAR_6);
  }

  VAR_5 = 0;
  VAR_6 = 0;
  while( VAR_7==VAR_0 && VAR_5<VAR_3->nRow ){


    FUNC_9(VAR_9, VAR_8, VAR_5, VAR_3->nVerify, &VAR_7);
    VAR_5 += VAR_3->nVerify;


    FUNC_8(VAR_9, VAR_8, VAR_3->nRow, VAR_5, VAR_3->nRow-1,VAR_3->nTest,VAR_3->bTestScan,&VAR_7);


    if( VAR_2 ){
      FUNC_12(&VAR_9, &VAR_7);
    }else{
      FUNC_11(&VAR_9, &VAR_7);
    }


    FUNC_8(VAR_9, VAR_8, VAR_3->nRow, VAR_5, VAR_3->nRow-1,VAR_3->nTest,VAR_3->bTestScan,&VAR_7);


    FUNC_4(VAR_5, VAR_3->nRow, FUNC_3()/2, &VAR_6);
  }


  FUNC_6(VAR_8);
  FUNC_0(VAR_9);
  FUNC_2(VAR_7);
  *VAR_4 = VAR_7;
}
