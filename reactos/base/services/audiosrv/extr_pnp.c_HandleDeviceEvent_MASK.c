
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPVOID ;
typedef int DWORD ;
typedef int DEV_BROADCAST_DEVICEINTERFACE ;



 int VAR_0 ;
 int FUNC_0 (int *) ;

DWORD
FUNC_1(
    DWORD VAR_1,
    LPVOID VAR_2)
{
    switch (VAR_1)
    {
        case 128:
        {
            DEV_BROADCAST_DEVICEINTERFACE* VAR_3 =
                (DEV_BROADCAST_DEVICEINTERFACE*)VAR_2;

            return FUNC_0(VAR_3);
        }

        default :
        {
            break;
        }
    }

    return VAR_0;
}
