
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_db ;
typedef int Datasource ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (int *,void*,int,void*,int) ;
 int FUNC_5 (int ,int **) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int,void**,int*,void**,int*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static void FUNC_12(void){
  Datasource *VAR_5;
  int VAR_6;
  int VAR_7;
  int VAR_8 = 64*1024;
  int VAR_9 = 1024;
  int VAR_10 = 4*1024;
  lsm_db *VAR_11;

  FUNC_10(VAR_0);
  VAR_7 = FUNC_5(FUNC_7(), &VAR_11);
  if( VAR_7==VAR_4 ) VAR_7 = FUNC_6(VAR_11, VAR_0);

  FUNC_3(VAR_11, VAR_2, &VAR_8);
  FUNC_3(VAR_11, VAR_3, &VAR_9);
  FUNC_3(VAR_11, VAR_1, &VAR_10);

  VAR_5 = FUNC_1();
  for(VAR_6=0; VAR_7==VAR_4 && VAR_6<5000; VAR_6++){
    void *VAR_12; int VAR_13;
    void *VAR_14; int VAR_15;
    FUNC_8(VAR_5, VAR_6, &VAR_12, &VAR_13, &VAR_14, &VAR_15);
    FUNC_4(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
  }
  FUNC_9(VAR_5);
  FUNC_2(VAR_11);

  FUNC_11(VAR_0, "log");
  FUNC_0( VAR_7==VAR_4 );
}
