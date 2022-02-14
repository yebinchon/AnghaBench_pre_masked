
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,int,...) ;
 int FUNC_1 (char*,char*,int) ;

int FUNC_2(char *VAR_0, int VAR_1, int VAR_2, int VAR_3, bool VAR_4) {
 if (!VAR_4) {
  if (VAR_3 < 0) {
   FUNC_1 (VAR_0, "-1", VAR_1);
   return 0;
  }
  return FUNC_0 (VAR_0, VAR_1, "%x", VAR_3);
 }
 if (VAR_2 <= 0) {
  return -1;
 }
 if (VAR_3 < 0) {
  return FUNC_0 (VAR_0, VAR_1, "p%x.-1", VAR_2);
 }
 return FUNC_0 (VAR_0, VAR_1, "p%x.%x", VAR_2, VAR_3);
}
