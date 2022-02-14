
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TestDb ;
typedef int Datasource ;


 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (int *,int,void**,int*,int ,int ) ;
 int FUNC_2 (int *,int *,void*,int,int*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int *,int,void*,int,void*,int,int*) ;

void FUNC_7(
  Datasource *VAR_0,
  int VAR_1,
  int VAR_2,
  TestDb *VAR_3,
  TestDb *VAR_4,
  int *VAR_5
){
  int VAR_6;

  static int VAR_7 = 0;
  VAR_7++;

  FUNC_6(VAR_3, VAR_4, 0, 0, 0, 0, 0, VAR_5);
  FUNC_6(VAR_3, VAR_4, 1, 0, 0, 0, 0, VAR_5);

  if( *VAR_5==0 ){
    int VAR_8;
    int VAR_9;
    void *VAR_10; int VAR_11;
    void *VAR_12; int VAR_13;

    VAR_8 = FUNC_5(VAR_2) % VAR_1;
    VAR_9 = FUNC_5(VAR_2+1) % VAR_1;
    FUNC_1(VAR_0, VAR_8, &VAR_12, &VAR_11, 0, 0);
    VAR_10 = FUNC_4(VAR_11+1);
    FUNC_0(VAR_10, VAR_12, VAR_11+1);
    FUNC_1(VAR_0, VAR_9, &VAR_12, &VAR_13, 0, 0);

    FUNC_6(VAR_3, VAR_4, 0, 0, 0, VAR_12, VAR_13, VAR_5);
    FUNC_6(VAR_3, VAR_4, 0, VAR_10, VAR_11, 0, 0, VAR_5);
    FUNC_6(VAR_3, VAR_4, 0, VAR_10, VAR_11, VAR_12, VAR_13, VAR_5);
    FUNC_6(VAR_3, VAR_4, 1, 0, 0, VAR_12, VAR_13, VAR_5);
    FUNC_6(VAR_3, VAR_4, 1, VAR_10, VAR_11, 0, 0, VAR_5);
    FUNC_6(VAR_3, VAR_4, 1, VAR_10, VAR_11, VAR_12, VAR_13, VAR_5);
    FUNC_3(VAR_10);
  }

  for(VAR_6=0; VAR_6<VAR_1 && *VAR_5==0; VAR_6++){
    void *VAR_14; int VAR_15;
    FUNC_1(VAR_0, VAR_6, &VAR_14, &VAR_15, 0, 0);
    FUNC_2(VAR_3, VAR_4, VAR_14, VAR_15, VAR_5);
  }
}
