
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i64 ;
typedef int Sqlite ;
typedef int Error ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*,int*) ;
 int FUNC_1 (int *,int *,char*) ;

__attribute__((used)) static void FUNC_2(Error *VAR_1, Sqlite *VAR_2){
  i64 VAR_3;
  FUNC_1(VAR_1, VAR_2, "BEGIN");
  for(VAR_3=1; VAR_3<=VAR_0; VAR_3++){
    FUNC_0(VAR_1, VAR_2, "SELECT * FROM t1 WHERE a = :iRow", &VAR_3);
  }
  FUNC_1(VAR_1, VAR_2, "COMMIT");
}
