
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCWSTR ;
typedef int LPCSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static BOOL FUNC_1(LPCWSTR VAR_1, LPCSTR VAR_2)
{
    if (VAR_1[0] != '/' && VAR_1[0] != '-')
        return VAR_0;


    return FUNC_0(VAR_1 + 1, VAR_2);
}
