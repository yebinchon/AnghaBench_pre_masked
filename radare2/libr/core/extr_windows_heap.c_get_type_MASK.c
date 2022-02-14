
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (char*,char*,char*,char*) ;

__attribute__((used)) static char *FUNC_1(WPARAM VAR_6) {
 char *VAR_7 = "";
 switch (VAR_6 & 0xFFFF) {
 case 130:
  VAR_7 = "(FIXED)";
  break;
 case 129:
  VAR_7 = "(FREE)";
  break;
 case 128:
  VAR_7 = "(MOVEABLE)";
  break;
 }
 char *VAR_8 = "";
 if (VAR_6 & VAR_4) {
  VAR_8 = "Segment";
 } else if (VAR_6 & VAR_3) {
  VAR_8 = "NT";
 }
 char *VAR_9 = "";
 if (VAR_6 & VAR_2) {
  VAR_9 = "/LFH";
 } else if (VAR_6 & VAR_1) {
  VAR_9 = "/LARGE";
 } else if (VAR_6 & VAR_0) {
  VAR_9 = "/BACKEND";
 } else if (VAR_6 & VAR_5) {
  VAR_9 = "/VS";
 }
 return FUNC_0 ("%s %s%s", VAR_7, VAR_8, VAR_9);
}
