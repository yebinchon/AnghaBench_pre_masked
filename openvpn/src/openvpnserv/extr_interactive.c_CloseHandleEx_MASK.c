
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPHANDLE ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static HANDLE
FUNC_1(LPHANDLE VAR_1)
{
    if (VAR_1 && *VAR_1 && *VAR_1 != VAR_0)
    {
        FUNC_0(*VAR_1);
        *VAR_1 = VAR_0;
    }
    return VAR_0;
}
