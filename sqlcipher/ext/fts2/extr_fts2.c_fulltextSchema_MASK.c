
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,...) ;

__attribute__((used)) static char *FUNC_2(
  int VAR_0,
  const char *const* VAR_1,
  const char *VAR_2
){
  int VAR_3;
  char *VAR_4, *VAR_5;
  const char *VAR_6 = "(";
  VAR_4 = FUNC_1("CREATE TABLE x");
  for(VAR_3=0; VAR_3<VAR_0; VAR_3++){
    VAR_5 = FUNC_1("%s%s%Q", VAR_4, VAR_6, VAR_1[VAR_3]);
    FUNC_0(VAR_4);
    VAR_4 = VAR_5;
    VAR_6 = ",";
  }
  VAR_5 = FUNC_1("%s,%Q)", VAR_4, VAR_2);
  FUNC_0(VAR_4);
  return VAR_5;
}
