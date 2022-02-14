
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int HANDLE ;
typedef int DeviceType ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ,int *) ;

DWORD
FUNC_3(DeviceType VAR_2)
{
    UINT VAR_3 = 0;
    HANDLE VAR_4;



    while ( FUNC_2(VAR_2, VAR_3, VAR_0, &VAR_4) == VAR_1 )
    {
        FUNC_0(VAR_4);
        VAR_3 ++;
    }

    FUNC_1("Found %d devices of type %d\n", VAR_3, VAR_2);

    return VAR_3;
}
