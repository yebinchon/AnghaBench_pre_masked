
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int,size_t) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,size_t,char*,char const*,char const*) ;
 int VAR_0 ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(size_t VAR_1, char **VAR_2) {
 static const char VAR_3[] = "sway-client-XXXXXX";
 const char *VAR_4 = FUNC_3("XDG_RUNTIME_DIR");
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_0, "XDG_RUNTIME_DIR is not set\n");
  return -1;
 }

 size_t VAR_5 = FUNC_7(VAR_3) + 1 + FUNC_7(VAR_4) + 1;
 *VAR_2 = FUNC_4(VAR_5);
 if (*VAR_2 == ((void*)0)) {
  FUNC_1(VAR_0, "allocation failed\n");
  return -1;
 }
 FUNC_6(*VAR_2, VAR_5, "%s/%s", VAR_4, VAR_3);

 int VAR_6 = FUNC_5(*VAR_2);
 if (VAR_6 < 0) {
  return -1;
 }

 if (!FUNC_8(VAR_6, 1)) {
  FUNC_0(VAR_6);
  return -1;
 }

 if (FUNC_2(VAR_6, VAR_1) < 0) {
  FUNC_0(VAR_6);
  return -1;
 }

 return VAR_6;
}
