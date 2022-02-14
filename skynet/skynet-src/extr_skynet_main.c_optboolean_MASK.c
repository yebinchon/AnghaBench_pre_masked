
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0, int VAR_1) {
 const char * VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 == ((void*)0)) {
  FUNC_1(VAR_0, VAR_1 ? "true" : "false");
  return VAR_1;
 }
 return FUNC_2(VAR_2,"true")==0;
}
