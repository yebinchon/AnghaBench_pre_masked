
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zBuf ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (int,char*,char*,unsigned char const) ;
 unsigned char* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(sqlite3_context *VAR_1, int VAR_2, sqlite3_value **VAR_3){
  const unsigned char *VAR_4;
  int VAR_5;
  char VAR_6[200];
  VAR_4 = FUNC_2(VAR_3[0]);
  for(VAR_5=0; VAR_5<sizeof(VAR_6)/2 - 2 && VAR_4[VAR_5]; VAR_5++){
    FUNC_1(sizeof(VAR_6)-VAR_5*2, &VAR_6[VAR_5*2], "%02x", VAR_4[VAR_5]);
  }
  VAR_6[VAR_5*2] = 0;
  FUNC_0(VAR_1, (char*)VAR_6, -1, VAR_0);
}
