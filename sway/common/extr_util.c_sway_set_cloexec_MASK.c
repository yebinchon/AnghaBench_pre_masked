
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,...) ;
 int FUNC_1 (int ,char*) ;

bool FUNC_2(int VAR_4, bool VAR_5) {
 int VAR_6 = FUNC_0(VAR_4, VAR_1);
 if (VAR_6 == -1) {
  FUNC_1(VAR_3, "fcntl failed");
  return 0;
 }
 if (VAR_5) {
  VAR_6 = VAR_6 | VAR_0;
 } else {
  VAR_6 = VAR_6 & ~VAR_0;
 }
 if (FUNC_0(VAR_4, VAR_2, VAR_6) == -1) {
  FUNC_1(VAR_3, "fcntl failed");
  return 0;
 }
 return 1;
}
