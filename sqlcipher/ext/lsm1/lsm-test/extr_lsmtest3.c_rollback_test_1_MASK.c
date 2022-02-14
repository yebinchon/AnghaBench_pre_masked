
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TestDb ;
typedef int Datasource ;
typedef int CksumDb ;


 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char const*,int ,int,int **) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (int*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int * FUNC_12 (int *,int ,int const,int) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int,int,int*) ;
 int FUNC_15 (char*,int ,int*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int *,int *,int,int,int*) ;

__attribute__((used)) static int FUNC_19(
  const char *VAR_1,
  Datasource *VAR_2
){
  const int VAR_3 = 100;

  TestDb *VAR_4;
  int VAR_5;
  int VAR_6;
  CksumDb *VAR_7;
  char *VAR_8;

  VAR_8 = FUNC_0(VAR_1);
  FUNC_9(&VAR_5, VAR_8);
  FUNC_17(VAR_8);

  VAR_7 = FUNC_12(VAR_2, 0, VAR_3*100, 100);
  VAR_4 = 0;
  VAR_5 = FUNC_4(VAR_1, 0, 1, &VAR_4);
  if( VAR_4 && FUNC_6(VAR_4)==0 ){
    FUNC_8();
    goto skip_rollback_test;
  }

  for(VAR_6=0; VAR_6<VAR_3 && VAR_5==0; VAR_6++){
    char VAR_9[VAR_0];
    int VAR_10 = (((VAR_6+1)/2) * 100);
    int VAR_11;
    int VAR_12;


    VAR_11 = FUNC_16(VAR_4);
    FUNC_14(VAR_10, VAR_11, &VAR_5);

    for(VAR_12=2; VAR_12<=6 && VAR_5==0; VAR_12++){
      FUNC_1(VAR_4, VAR_12);
      FUNC_18(VAR_4, VAR_2, VAR_10, 100, &VAR_5);
      VAR_10 += 100;
    }

    FUNC_13(VAR_4, VAR_9);
    FUNC_15(VAR_9, FUNC_11(VAR_7, VAR_10), &VAR_5);

    for(VAR_12=6; VAR_12>2 && VAR_5==0; VAR_12--){
      FUNC_5(VAR_4, VAR_12);
      VAR_10 -= 100;
      FUNC_13(VAR_4, VAR_9);
      FUNC_15(VAR_9, FUNC_11(VAR_7, VAR_10), &VAR_5);
    }

    if( VAR_6%2 ){
      FUNC_5(VAR_4, 0);
      VAR_10 -= 100;
      FUNC_13(VAR_4, VAR_9);
      FUNC_15(VAR_9, FUNC_11(VAR_7, VAR_10), &VAR_5);
    }else{
      FUNC_3(VAR_4, 0);
    }
  }
  FUNC_7(VAR_5);

 skip_rollback_test:
  FUNC_2(VAR_4);
  FUNC_10(VAR_7);
  return VAR_5;
}
