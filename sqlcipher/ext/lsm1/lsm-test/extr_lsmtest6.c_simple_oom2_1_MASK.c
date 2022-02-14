
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_db ;
typedef int OomTest ;
typedef int Datasource ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *,int *,int,int*) ;
 int FUNC_8 (int *,int ,int **,int*) ;
 int FUNC_9 (int *,int *,int *,int,int*) ;

__attribute__((used)) static void FUNC_10(OomTest *VAR_2){
  const int VAR_3 = 100;
  const int VAR_4 = 10;

  Datasource *VAR_5 = FUNC_1();
  int VAR_6 = VAR_1;
  lsm_db *VAR_7;
  lsm_db *VAR_8;
  int VAR_9;

  FUNC_4(VAR_0);



  FUNC_6(VAR_2, 0);
  FUNC_8(VAR_2, VAR_0, &VAR_7, &VAR_6);
  FUNC_8(VAR_2, VAR_0, &VAR_8, &VAR_6);
  for(VAR_9=0; VAR_9<VAR_3; VAR_9++){
    FUNC_9(VAR_2, VAR_7, VAR_5, VAR_9, &VAR_6);
  }
  FUNC_6(VAR_2, 1);
  FUNC_0( VAR_6==0 );


  for(VAR_9=VAR_3; VAR_9<VAR_3+VAR_4; VAR_9++){
    FUNC_9(VAR_2, VAR_7, VAR_5, VAR_9, &VAR_6);
    if( VAR_6 ) break;
  }
  FUNC_5(VAR_2, VAR_6);



  FUNC_6(VAR_2, 0);
  VAR_6 = 0;
  for(; VAR_9<VAR_3+VAR_4 && VAR_6==0; VAR_9++){
    FUNC_9(VAR_2, VAR_8, VAR_5, VAR_9, &VAR_6);
  }
  for(VAR_9=0; VAR_9<VAR_3+VAR_4; VAR_9++) FUNC_7(VAR_2, VAR_8, VAR_5, VAR_9, &VAR_6);
  FUNC_6(VAR_2, 1);

  FUNC_2(VAR_7);
  FUNC_2(VAR_8);
  FUNC_3(VAR_5);
}
