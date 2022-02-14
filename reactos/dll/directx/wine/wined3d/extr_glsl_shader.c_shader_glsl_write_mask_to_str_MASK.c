
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(DWORD VAR_4, char *VAR_5)
{
    *VAR_5++ = '.';
    if (VAR_4 & VAR_0) *VAR_5++ = 'x';
    if (VAR_4 & VAR_1) *VAR_5++ = 'y';
    if (VAR_4 & VAR_2) *VAR_5++ = 'z';
    if (VAR_4 & VAR_3) *VAR_5++ = 'w';
    *VAR_5 = '\0';
}
