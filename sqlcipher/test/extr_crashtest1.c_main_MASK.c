
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int ,int ,int ) ;
 int * FUNC_9 (char*,int ,char**) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int*,int ) ;

int FUNC_13(int VAR_1, char **VAR_2){
  int VAR_3;
  sqlite *VAR_4;
  char *VAR_5;
  int VAR_6;
  int VAR_7 = FUNC_2();

  FUNC_10("test.db");
  FUNC_10("test.db-journal");
  VAR_4 = FUNC_9("test.db", 0, &VAR_5);
  if( VAR_4==0 ){
    FUNC_4("Cannot initialize: %s\n", VAR_5);
    return 1;
  }
  FUNC_8(VAR_4, "CREATE TABLE t1(a,b)", 0, 0, 0);
  FUNC_7(VAR_4);
  for(VAR_3=0; VAR_3<10000; VAR_3++){
    int VAR_8 = FUNC_1();
    if( VAR_8==0 ){
      FUNC_6();
      FUNC_0(VAR_7);
      return 0;
    }
    FUNC_4("test %d, pid=%d\n", VAR_3, VAR_8);
    FUNC_11(FUNC_5()%10000 + 1000);
    FUNC_3(VAR_8, VAR_0);
    FUNC_12(VAR_8, &VAR_6, 0);
  }
  return 0;
}
