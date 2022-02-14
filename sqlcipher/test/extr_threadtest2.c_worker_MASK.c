
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int **) ;
 int VAR_3 ;

void *FUNC_6(void *VAR_4){
  sqlite *VAR_5;
  int VAR_6 = (int)VAR_4;
  int VAR_7;
  int VAR_8 = 0;
  FUNC_0(VAR_3, "Starting worker %d\n", VAR_6);
  while( !VAR_2 && VAR_8++<10000 ){
    if( VAR_8%100==0 ) FUNC_1("%d: %d\n", VAR_6, VAR_8);
    while( (FUNC_5(VAR_0, &VAR_5))!=VAR_1 ) FUNC_2();
    FUNC_4(VAR_5, "PRAGMA synchronous=OFF", 0, 0, 0);

    if( VAR_2 ){ FUNC_3(VAR_5); break; }

    VAR_7 = FUNC_4(VAR_5, "INSERT INTO t1 VALUES('bogus data')", 0, 0, 0);

    FUNC_3(VAR_5);
  }
  FUNC_0(VAR_3, "Worker %d finished\n", VAR_6);
  return 0;
}
