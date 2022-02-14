
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int const) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(char *VAR_0) {
 const int VAR_1 = FUNC_2 (VAR_0);
 char *VAR_2 = FUNC_1 (VAR_0, '1');
 int VAR_3 = VAR_2 ? (int)(size_t)(VAR_2 - VAR_0) : VAR_1 - 1;
 VAR_3 = (VAR_3 / 8) * 8;
 FUNC_0 (VAR_0, VAR_0 + VAR_3, VAR_1 - VAR_3 + 1);
}
