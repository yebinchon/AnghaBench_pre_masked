
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int (* PrintfCallback ) (char*,int) ;


 int FUNC_0 (int const,int const,int const) ;

__attribute__((used)) static void FUNC_1(PrintfCallback VAR_0, const ut8 *VAR_1, const ut8 *VAR_2) {
 int VAR_3 = 0;
 int VAR_4 = FUNC_0 (VAR_1[0], VAR_1[1], VAR_1[2]);
 if (VAR_4 == -1)return;

 VAR_0 ("\x1b[%dm", VAR_4+(VAR_3?30:40));
}
