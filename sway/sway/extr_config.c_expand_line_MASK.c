
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,char*,char const*,char*,char const*,char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_1, const char *VAR_2, bool VAR_3) {
 int VAR_4 = (VAR_1 ? FUNC_2(VAR_1) + 1 : 0) + FUNC_2(VAR_2)
  + (VAR_3 ? 2 : 0) + 1;
 char *VAR_5 = FUNC_0(1, VAR_4);
 if (!VAR_5) {
  FUNC_3(VAR_0, "Cannot allocate expanded line buffer");
  return ((void*)0);
 }
 FUNC_1(VAR_5, VAR_4, "%s%s%s%s", VAR_1 ? VAR_1 : "",
   VAR_1 ? " " : "", VAR_2, VAR_3 ? " {" : "");
 return VAR_5;
}
