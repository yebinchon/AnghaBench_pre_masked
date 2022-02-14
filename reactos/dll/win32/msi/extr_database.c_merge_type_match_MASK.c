
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static BOOL FUNC_1(LPCWSTR VAR_1, LPCWSTR VAR_2)
{
    if (((VAR_1[0] == 'l') || (VAR_1[0] == 's')) &&
        ((VAR_2[0] == 'l') || (VAR_2[0] == 's')))
        return VAR_0;

    if (((VAR_1[0] == 'L') || (VAR_1[0] == 'S')) &&
        ((VAR_2[0] == 'L') || (VAR_2[0] == 'S')))
        return VAR_0;

    return !FUNC_0( VAR_1, VAR_2 );
}
