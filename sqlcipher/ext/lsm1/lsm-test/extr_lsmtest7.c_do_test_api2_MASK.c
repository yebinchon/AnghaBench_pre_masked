
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_db ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int,int*) ;
 scalar_t__ FUNC_2 (int*,char const*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int,int,int*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_0, int *VAR_1){
  if( *VAR_1==0 && FUNC_2(VAR_1, VAR_0, "api2.lsm") ){
    lsm_db *VAR_2 = 0;
    lsm_db *VAR_3 = 0;

    FUNC_4("testdb.lsm");
    VAR_2 = FUNC_1("testdb.lsm", 0, 0, VAR_1);
    FUNC_5(VAR_2, 4096, 1024, VAR_1);
    VAR_3 = FUNC_1("testdb.lsm", 1024, 64*1024, VAR_1);
    FUNC_5(VAR_3, 4096, 1024, VAR_1);
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);

    FUNC_4("testdb.lsm");
    VAR_2 = FUNC_1("testdb.lsm", 1024, 64*1024, VAR_1);
    FUNC_5(VAR_2, 1024, 64*1024, VAR_1);
    VAR_3 = FUNC_1("testdb.lsm", 0, 0, VAR_1);
    FUNC_5(VAR_3, 1024, 64*1024, VAR_1);
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);

    FUNC_4("testdb.lsm");
    VAR_2 = FUNC_1("testdb.lsm", 8192, 2*1024, VAR_1);
    FUNC_5(VAR_2, 8192, 2*1024, VAR_1);
    VAR_3 = FUNC_1("testdb.lsm", 1024, 64*1024, VAR_1);
    FUNC_5(VAR_3, 8192, 2*1024, VAR_1);
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);

    FUNC_3(*VAR_1);
  }
}
