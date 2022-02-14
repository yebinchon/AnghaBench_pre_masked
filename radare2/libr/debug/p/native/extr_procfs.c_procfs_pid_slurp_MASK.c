
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int ) ;
 char* FUNC_3 (char*,int,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*,size_t) ;

int FUNC_6(int VAR_1, char *VAR_2, char *VAR_3, size_t VAR_4) {
 int VAR_5, VAR_6 = -1;
 ssize_t VAR_7;

 char *VAR_8 = FUNC_3 ("/proc/%d/%s", VAR_1, VAR_2);
 if (!VAR_8) {
  return -1;
 }
 VAR_5 = FUNC_2 (VAR_8, VAR_0, 0);
 if (VAR_5 == -1) {
  FUNC_1 (VAR_8);
  return -1;
 }
 VAR_7 = FUNC_5 (VAR_5, VAR_3, VAR_4);
 VAR_3[VAR_4 - 1] = 0;
 if (VAR_7 > 0) {
  VAR_3[VAR_7 - 1] = '\0';
  VAR_6 = 0;
 } else if (VAR_7 < 0) {
  FUNC_4 ("read");
 }
 FUNC_0 (VAR_5);
 FUNC_1 (VAR_8);
 return VAR_6;
}
