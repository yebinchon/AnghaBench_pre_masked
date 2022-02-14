
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int const FUNC_0 (char*) ;

__attribute__((used)) static BOOL FUNC_1(LPCWSTR VAR_2)
{
    const int VAR_3 = 3;

    if (!VAR_2 || FUNC_0(VAR_2) < VAR_3)
        return VAR_0;

    if ((VAR_2[1] == ':' && VAR_2[2] == '\\') || (VAR_2[0] == '\\' && VAR_2[1] == '\\'))
        return VAR_1;

    return VAR_0;
}
