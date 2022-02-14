
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, int VAR_1, const ut8 *VAR_2, int VAR_3) {
 *VAR_0 = 0;
 int VAR_4 = FUNC_0 (VAR_3, VAR_1);
 if (VAR_4 < 1) {
  return;
 }
 VAR_0[VAR_1 - 1] = 0;
 while (*VAR_0 && *VAR_0 == '\n') {
  VAR_0++;
 }
 FUNC_1 (VAR_0, (char *) VAR_2, VAR_4);
}
