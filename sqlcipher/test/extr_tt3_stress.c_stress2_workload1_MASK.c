
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Sqlite ;
typedef int Error ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*,int) ;

__attribute__((used)) static void FUNC_1(Error *VAR_1, Sqlite *VAR_2, int VAR_3){
  int VAR_4 = (VAR_3 % (VAR_0-1)) + 1;
  FUNC_0(VAR_1, VAR_2,
      "CREATE TABLE IF NOT EXISTS t%d(x PRIMARY KEY, y, z);", VAR_4
  );
}
