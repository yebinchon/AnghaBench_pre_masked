
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int (* PrintfCallback ) (char*,int,int) ;



__attribute__((used)) static void FUNC_0(PrintfCallback VAR_0, const ut8 *VAR_1, const ut8 *VAR_2) {
 int VAR_3, VAR_4, VAR_5;
 VAR_3 = (VAR_1[0]+VAR_1[1]+VAR_1[2]) / 3;
 VAR_4 = (VAR_2[0]+VAR_2[1]+VAR_2[2]) / 3;
 VAR_5 = 231 + ((int)((float)VAR_3/10.3));
 if (VAR_5<232) VAR_5 = 232;
 VAR_0 ("\x1b[%d;5;%dm", 48, VAR_5);
 VAR_5 = 231 + ((int)((float)VAR_4/10.3));
 if (VAR_5<232) VAR_5 = 232;
 VAR_0 ("\x1b[%d;5;%dm", 38, VAR_5);
}
