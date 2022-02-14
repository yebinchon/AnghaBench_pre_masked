
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_3__ {int DeviceInfo; scalar_t__ Position; int Win32Handle; } ;
typedef TYPE_1__* PDOS_FILE_DESCRIPTOR ;
typedef scalar_t__* LPDWORD ;
typedef int LONG ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int FUNC_0 (char*,scalar_t__,int ,int ) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int ,int ,int *,int ) ;

WORD FUNC_4(WORD VAR_8,
                 LONG VAR_9,
                 BYTE VAR_10,
                 LPDWORD VAR_11)
{
    WORD VAR_12 = VAR_2;
    DWORD VAR_13;
    PDOS_FILE_DESCRIPTOR VAR_14 = FUNC_1(VAR_8);

    FUNC_0("DosSeekFile: FileHandle 0x%04X, Offset 0x%08X, Origin 0x%02X\n",
           VAR_8, VAR_9, VAR_10);

    if (VAR_14 == ((void*)0))
    {

        return VAR_1;
    }

    if (VAR_14->DeviceInfo & VAR_6)
    {

        return VAR_2;
    }


    if (VAR_10 != VAR_3 && VAR_10 != VAR_4 && VAR_10 != VAR_5)
    {
        return VAR_0;
    }

    VAR_13 = FUNC_3(VAR_14->Win32Handle, VAR_9, ((void*)0), VAR_10);


    if (VAR_13 == VAR_7)
    {

        VAR_12 = (WORD)FUNC_2();
    }

    if (VAR_12 != VAR_2)
    {

        return VAR_12;
    }


    VAR_14->Position = VAR_13;


    if (VAR_11) *VAR_11 = VAR_13;


    return VAR_2;
}
