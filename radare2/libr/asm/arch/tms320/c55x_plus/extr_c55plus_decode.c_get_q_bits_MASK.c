
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static ut32 FUNC_2(ut32 VAR_1, char *VAR_2, ut32 VAR_3, int *VAR_4) {
 ut32 VAR_5 = 0;

 if (!FUNC_1(VAR_2, "q_MMAP", 6)) {
  VAR_5 = VAR_1 & 1;
 } else if (!FUNC_1(VAR_2, "q_LOCK", 6)) {
  VAR_5 = VAR_1 & 1;
 } else if (!FUNC_1(VAR_2, "q_LINR", 6)) {
  VAR_5 = (VAR_1 >> 2) & 1;
 } else if (!FUNC_1(VAR_2, "q_CIRC", 6)) {
  VAR_5 = (VAR_1 >> 3) & 1;
 } else if (!FUNC_1(VAR_2, "q_PORT_READ", 11)) {
  VAR_5 = (VAR_1 >> 4) & 1;
 } else if (!FUNC_1(VAR_2, "q_PORT_WRITE", 12)) {
  VAR_5 = (VAR_1 >> 5) & 1;
 } else if (!FUNC_1(VAR_2, "q_XPORT_READ", 12)) {
  VAR_5 = (VAR_1 >> 6) & 1;
 } else if (!FUNC_1(VAR_2, "q_XPORT_WRITE", 13)) {
  VAR_5 = (VAR_1 >> 7) & 1;
 } else if (!FUNC_1(VAR_2, "q_SAT", 5)) {
  VAR_5 = (VAR_1 >> 8) & 1;
 } else if (!FUNC_1(VAR_2, "q_XC0", 5)) {
  VAR_5 = (VAR_1 >> 9) & 1;
 } else if (!FUNC_1(VAR_2, "q_XC1", 5)) {
  VAR_5 = (VAR_1 >> 10) & 1;
 } else {

  FUNC_0(VAR_0, "Invalid token %s\n", VAR_2); *VAR_4 = -1;
 }
 return VAR_5;
}
