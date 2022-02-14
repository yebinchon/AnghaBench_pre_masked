
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_session ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,int*,void**) ;
 int VAR_0 ;
 int FUNC_4 (char const*,void*,int) ;

__attribute__((used)) static void FUNC_5(const char *VAR_1, sqlite3_session *VAR_2){
  void *VAR_3;
  int VAR_4;
  int VAR_5;
  VAR_5 = FUNC_3(VAR_2, &VAR_4, &VAR_3);
  if( VAR_5 ){
    FUNC_1(VAR_0, "sqlite3session_changeset() returned %d\n", VAR_5);
    FUNC_0(1);
  }
  FUNC_4(VAR_1, VAR_3, VAR_4);
  FUNC_2(VAR_3);
}
