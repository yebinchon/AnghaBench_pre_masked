
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IP_ADAPTER_INDEX_MAP ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int *,int *) ;
 int VAR_1 ;

BOOL
FUNC_3(HANDLE *VAR_2, IP_ADAPTER_INDEX_MAP *VAR_3)
{
    DWORD VAR_4;

    for (VAR_4 = 0; ; VAR_4++)
    {
        if (!FUNC_2(VAR_4, VAR_2, VAR_3))
            break;

        if (FUNC_1(*VAR_2))
            return VAR_1;
        else
            FUNC_0(*VAR_2);
    }

    return VAR_0;
}
