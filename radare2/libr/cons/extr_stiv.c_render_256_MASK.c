
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int (* PrintfCallback ) (char*,int,int ) ;


 int FUNC_0 (int const,int const,int const) ;

__attribute__((used)) static void FUNC_1(PrintfCallback VAR_0, const ut8 *VAR_1, const ut8 *VAR_2) {
 VAR_0 ("\x1b[%d;5;%dm", 38, FUNC_0 (VAR_1[0], VAR_1[1], VAR_1[2]));
 VAR_0 ("\x1b[%d;5;%dm", 48, FUNC_0 (VAR_2[0], VAR_2[1], VAR_2[2]));
}
