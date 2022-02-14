
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_5__ {int LastErrorCode; } ;
struct TYPE_4__ {int DeviceInfo; int Win32Handle; } ;
typedef TYPE_1__* PDOS_FILE_DESCRIPTOR ;
typedef int DWORD ;
typedef int BOOLEAN ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;

BOOLEAN FUNC_3(WORD VAR_5, DWORD VAR_6, DWORD VAR_7)
{
    PDOS_FILE_DESCRIPTOR VAR_8 = FUNC_0(VAR_5);

    if (VAR_8 == ((void*)0))
    {

        VAR_3->LastErrorCode = VAR_0;
        return VAR_1;
    }


    if (VAR_8->DeviceInfo & VAR_2) return VAR_4;

    if (!FUNC_2(VAR_8->Win32Handle, VAR_6, 0, VAR_7, 0))
    {
        VAR_3->LastErrorCode = FUNC_1();
        return VAR_1;
    }

    return VAR_4;
}
