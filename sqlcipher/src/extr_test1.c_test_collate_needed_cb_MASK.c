
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int,int ,int ) ;
 int VAR_0 ;
 char* VAR_1 ;

__attribute__((used)) static void FUNC_3(
  void *VAR_2,
  sqlite3 *VAR_3,
  int VAR_4,
  const void *VAR_5
){
  int VAR_6 = FUNC_0(VAR_3);
  int VAR_7;
  char *VAR_8;
  for(VAR_8 = (char*)VAR_5, VAR_7=0; *VAR_8 || VAR_8[1]; VAR_8++){
    if( *VAR_8 ) VAR_1[VAR_7++] = *VAR_8;
  }
  VAR_1[VAR_7] = 0;
  FUNC_2(
      VAR_3, "test_collate", FUNC_0(VAR_3), FUNC_1(VAR_6), VAR_0);
}
