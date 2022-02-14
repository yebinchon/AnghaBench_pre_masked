
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TestDb ;
typedef int Datasource ;


 int FUNC_0 (void*,void*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,void*,int,void*,int) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *,int,void**,int*,void**,int*) ;
 int FUNC_5 (int *,void*,int,void*,int,int*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int *,int,void*,int,void*,int,int*) ;

void FUNC_10(
  TestDb *VAR_0,
  Datasource *VAR_1,
  int VAR_2,
  int VAR_3,
  int VAR_4,
  int VAR_5,
  int VAR_6,
  int *VAR_7
){
  int VAR_8;
  int VAR_9 = *VAR_7;

  if( VAR_9==0 && VAR_6 ){
    TestDb *VAR_10 = 0;


    VAR_9 = FUNC_3(&VAR_10);

    for(VAR_8=VAR_3; VAR_9==0 && VAR_8<=VAR_4; VAR_8++){
      void *VAR_11; int VAR_12;
      void *VAR_13; int VAR_14;
      FUNC_4(VAR_1, VAR_8, &VAR_11, &VAR_12, &VAR_13, &VAR_14);
      VAR_9 = FUNC_2(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
    }

    if( VAR_9==0 ){
      int VAR_15;
      int VAR_16;
      void *VAR_17; int VAR_18;
      void *VAR_19; int VAR_20;

      VAR_15 = FUNC_8((VAR_3<<8) + (VAR_4<<16)) % VAR_2;
      VAR_16 = FUNC_8((VAR_4<<8) + (VAR_3<<16)) % VAR_2;
      FUNC_4(VAR_1, VAR_15, &VAR_19, &VAR_18, 0, 0);
      VAR_17 = FUNC_7(VAR_18+1);
      FUNC_0(VAR_17, VAR_19, VAR_18+1);
      FUNC_4(VAR_1, VAR_16, &VAR_19, &VAR_20, 0, 0);

      FUNC_9(VAR_10, VAR_0, 0, 0, 0, 0, 0, &VAR_9);
      FUNC_9(VAR_10, VAR_0, 0, 0, 0, VAR_19, VAR_20, &VAR_9);
      FUNC_9(VAR_10, VAR_0, 0, VAR_17, VAR_18, 0, 0, &VAR_9);
      FUNC_9(VAR_10, VAR_0, 0, VAR_17, VAR_18, VAR_19, VAR_20, &VAR_9);
      FUNC_9(VAR_10, VAR_0, 1, 0, 0, 0, 0, &VAR_9);
      FUNC_9(VAR_10, VAR_0, 1, 0, 0, VAR_19, VAR_20, &VAR_9);
      FUNC_9(VAR_10, VAR_0, 1, VAR_17, VAR_18, 0, 0, &VAR_9);
      FUNC_9(VAR_10, VAR_0, 1, VAR_17, VAR_18, VAR_19, VAR_20, &VAR_9);
      FUNC_6(VAR_17);
    }
    FUNC_1(VAR_10);
  }


  for(VAR_8=0; VAR_9==0 && VAR_8<VAR_5; VAR_8++){
    int VAR_21;
    void *VAR_22; int VAR_23;
    void *VAR_24; int VAR_25;

    if( VAR_5>=VAR_2 ){
      VAR_21 = VAR_8;
    }else{
      VAR_21 = FUNC_8(VAR_8 + (VAR_3<<8) + (VAR_4<<16)) % VAR_2;
    }

    FUNC_4(VAR_1, VAR_21, &VAR_22, &VAR_23, &VAR_24, &VAR_25);
    if( VAR_3>VAR_21 || VAR_21>VAR_4 ){
      VAR_24 = 0;
      VAR_25 = -1;
    }

    FUNC_5(VAR_0, VAR_22, VAR_23, VAR_24, VAR_25, &VAR_9);
  }

  *VAR_7 = VAR_9;
}
