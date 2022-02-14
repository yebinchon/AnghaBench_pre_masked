
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i64 ;
typedef int Sqlite ;
typedef int Error ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char const*,int*,int*) ;
 int FUNC_1 (int *,int *,char*) ;

__attribute__((used)) static void FUNC_2(Error *VAR_1, Sqlite *VAR_2){
  const char *VAR_3 = "INSERT INTO t1 VALUES(:iRow, zeroblob(:iBlob))";
  i64 VAR_4;
  FUNC_1(VAR_1, VAR_2, "BEGIN");
  for(VAR_4=1; VAR_4<=VAR_0; VAR_4++){
    i64 VAR_5 = 600 + (VAR_4%300);
    FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_4, &VAR_5);
  }
  FUNC_1(VAR_1, VAR_2, "COMMIT");
}
