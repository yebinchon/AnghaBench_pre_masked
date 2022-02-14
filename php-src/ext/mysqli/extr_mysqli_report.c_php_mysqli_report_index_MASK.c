
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,int ,char*,char*,char const*) ;
 int FUNC_1 (char*,char*) ;

void FUNC_2(const char *VAR_2, unsigned int VAR_3) {
 char VAR_4[15];

 if (VAR_3 & VAR_0) {
  FUNC_1(VAR_4, "Bad index");
 } else if (VAR_3 & VAR_1) {
  FUNC_1(VAR_4, "No index");
 } else {
  return;
 }
 FUNC_0("00000", 0, "%s used in query/prepared statement %s", VAR_4, VAR_2);
}
