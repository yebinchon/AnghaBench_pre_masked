
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char const*,int *,int) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0, int VAR_1) {
 const char * VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 == ((void*)0)) {
  char VAR_3[20];
  FUNC_2(VAR_3,"%d",VAR_1);
  FUNC_1(VAR_0, VAR_3);
  return VAR_1;
 }
 return FUNC_3(VAR_2, ((void*)0), 10);
}
