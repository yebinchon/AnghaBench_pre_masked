
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_7__ {int (* WriteRoutine ) (TYPE_2__*,scalar_t__,int*) ;} ;
struct TYPE_6__ {int DeviceInfo; scalar_t__ Position; scalar_t__ Size; int Win32Handle; int DevicePointer; } ;
typedef int StaticBuffer ;
typedef int * PVOID ;
typedef TYPE_1__* PDOS_FILE_DESCRIPTOR ;
typedef TYPE_2__* PDOS_DEVICE_NODE ;
typedef int* LPWORD ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int) ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int ,int *,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int * FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 scalar_t__ FUNC_13 (int ,int *,int,scalar_t__*,int *) ;
 int FUNC_14 (TYPE_2__*,scalar_t__,int*) ;

WORD FUNC_15(WORD VAR_5,
                  DWORD VAR_6,
                  WORD VAR_7,
                  LPWORD VAR_8)
{
    WORD VAR_9 = VAR_2;
    PDOS_FILE_DESCRIPTOR VAR_10 = FUNC_3(VAR_5);
    BYTE VAR_11[8192];

    FUNC_1("DosWriteFile: FileHandle 0x%04X, Count 0x%04X\n", VAR_5, VAR_7);

    if (VAR_10 == ((void*)0))
    {

        return VAR_1;
    }

    if (VAR_10->DeviceInfo & VAR_4)
    {
        PDOS_DEVICE_NODE VAR_12 = FUNC_2(VAR_10->DevicePointer);
        if (!VAR_12->WriteRoutine) return VAR_0;


        VAR_12->WriteRoutine(VAR_12, VAR_6, &VAR_7);
        *VAR_8 = VAR_7;
    }
    else
    {
        DWORD VAR_13 = 0;
        PVOID VAR_14;





        if (VAR_7 == 0)
        {
            if (!FUNC_11(VAR_10->Win32Handle))
            {

                VAR_9 = (WORD)FUNC_5();
            }
            *VAR_8 = 0;
            return VAR_9;
        }

        if (VAR_7 <= sizeof(VAR_11))
        {
            VAR_14 = VAR_11;
        }
        else
        {
            VAR_14 = FUNC_8(FUNC_10(), 0, VAR_7);
            FUNC_0(VAR_14 != ((void*)0));
        }


        FUNC_4(&VAR_3,
                           FUNC_12(FUNC_6(VAR_6), FUNC_7(VAR_6)),
                           VAR_14,
                           VAR_7);


        if (FUNC_13(VAR_10->Win32Handle, VAR_14, VAR_7, &VAR_13, ((void*)0)))
        {

            VAR_10->Position += VAR_13;
            if (VAR_10->Position > VAR_10->Size) VAR_10->Size = VAR_10->Position;
        }
        else
        {

            VAR_9 = (WORD)FUNC_5();
        }


        *VAR_8 = FUNC_7(VAR_13);

        if (VAR_14 != VAR_11)
            FUNC_9(FUNC_10(), 0, VAR_14);
    }


    return VAR_9;
}
