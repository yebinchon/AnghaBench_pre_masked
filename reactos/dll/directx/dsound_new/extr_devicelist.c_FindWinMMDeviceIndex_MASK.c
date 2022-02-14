
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ ULONG ;
struct TYPE_3__ {scalar_t__* MappedId; int DevicePath; } ;
typedef TYPE_1__* LPFILTERINFO ;
typedef int DWORD_PTR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (char*,int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ,int ,int) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int ,int ,int) ;
 int FUNC_8 (int ,int *) ;

BOOL
FUNC_9(
    LPFILTERINFO VAR_5,
    BOOL VAR_6)
{
    ULONG VAR_7, VAR_8;
    WCHAR VAR_9[VAR_2];
    DWORD VAR_10, VAR_11;

    if (VAR_6)
        VAR_7 = FUNC_4();
    else
        VAR_7 = FUNC_6();




    for(VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
    {
        VAR_10 = 0;


        if (VAR_6)
            VAR_11 = FUNC_5(FUNC_3(VAR_8), VAR_1, (DWORD_PTR)&VAR_10, 0);
        else
            VAR_11 = FUNC_7(FUNC_3(VAR_8), VAR_1, (DWORD_PTR)&VAR_10, 0);

        if (VAR_11 != VAR_3)
        {
            FUNC_1("Failed DRV_QUERYDEVICEINTERFACESIZE with %lx bRecord %u Index %u\n", VAR_11, VAR_6, VAR_8);
            continue;
        }


        FUNC_0(VAR_10 < VAR_2);


        if (VAR_6)
            VAR_11 = FUNC_5(FUNC_3(VAR_8), VAR_0, (DWORD_PTR)VAR_9, VAR_2);
        else
            VAR_11 = FUNC_7(FUNC_3(VAR_8), VAR_0, (DWORD_PTR)VAR_9, VAR_2);

        if (VAR_11 != VAR_3)
        {
            FUNC_1("Failed DRV_QUERYDEVICEINTERFACE with %lx bRecord %u Index %u\n", VAR_11, VAR_6, VAR_8);
            continue;
        }

        if (!FUNC_8(VAR_5->DevicePath, VAR_9))
        {
            if (VAR_6)
                VAR_5->MappedId[0] = VAR_8;
            else
                VAR_5->MappedId[1] = VAR_8;

            return VAR_4;
        }
    }

    FUNC_2("Failed to find device %ws bRecord %u Count %u\n", VAR_5->DevicePath, VAR_6, VAR_7);


    if (VAR_6)
        VAR_5->MappedId[0] = 0;
    else
        VAR_5->MappedId[1] = 0;


    return VAR_4;
}
