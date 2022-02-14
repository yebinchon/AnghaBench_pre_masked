
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Sqlite ;
typedef int Error ;


 int FUNC_0 (int *,int *,char*,char*) ;

__attribute__((used)) static void FUNC_1(Error *VAR_0, Sqlite *VAR_1, int VAR_2){
  FUNC_0(VAR_0, VAR_1,
      "PRAGMA journal_mode = %q", (VAR_2%2) ? "delete" : "wal"
  );
}
