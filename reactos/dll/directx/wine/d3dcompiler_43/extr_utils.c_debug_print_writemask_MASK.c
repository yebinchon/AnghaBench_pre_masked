
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* FUNC_0 (char*,char*) ;

__attribute__((used)) static const char *FUNC_1(DWORD VAR_5)
{
    char VAR_6[6];
    unsigned char VAR_7 = 1;

    if(VAR_5 == VAR_4) return "";
    VAR_6[0] = '.';
    if(VAR_5 & VAR_0) VAR_6[VAR_7++] = 'x';
    if(VAR_5 & VAR_1) VAR_6[VAR_7++] = 'y';
    if(VAR_5 & VAR_2) VAR_6[VAR_7++] = 'z';
    if(VAR_5 & VAR_3) VAR_6[VAR_7++] = 'w';
    VAR_6[VAR_7] = 0;

    return FUNC_0("%s", VAR_6);
}
