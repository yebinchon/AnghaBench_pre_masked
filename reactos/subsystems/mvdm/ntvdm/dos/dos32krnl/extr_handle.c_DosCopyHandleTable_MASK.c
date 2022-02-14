
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int VOID ;
typedef size_t UINT ;
struct TYPE_17__ {scalar_t__ CurrentPsp; } ;
struct TYPE_16__ {int ActiveCon; } ;
struct TYPE_12__ {int Length; int Buffer; } ;
struct TYPE_15__ {int DeviceAttributes; int (* OpenRoutine ) (TYPE_4__*) ;TYPE_1__ Name; } ;
struct TYPE_14__ {int DeviceInfo; int RefCount; int Win32Handle; int FileName; int DevicePointer; } ;
struct TYPE_13__ {int HandleTablePtr; } ;
typedef TYPE_2__* PDOS_PSP ;
typedef TYPE_3__* PDOS_FILE_DESCRIPTOR ;
typedef TYPE_4__* PDOS_DEVICE_NODE ;
typedef int* LPBYTE ;
typedef int HANDLE ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int,char) ;
 int FUNC_12 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_13 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_7__* VAR_6 ;
 TYPE_6__* VAR_7 ;
 int FUNC_14 (TYPE_4__*) ;

VOID FUNC_15(LPBYTE VAR_8)
{
    UINT VAR_9;
    PDOS_PSP VAR_10;
    LPBYTE VAR_11;
    PDOS_FILE_DESCRIPTOR VAR_12;


    for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) VAR_8[VAR_9] = 0xFF;


    if (VAR_6->CurrentPsp == VAR_5)
    {
        BYTE VAR_13;
        HANDLE VAR_14[3];


        VAR_14[0] = FUNC_8(VAR_3);
        VAR_14[1] = FUNC_8(VAR_4);
        VAR_14[2] = FUNC_8(VAR_2);

        for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
        {

            if (FUNC_9(VAR_14[VAR_9]))
            {
                VAR_13 = FUNC_2(VAR_7->ActiveCon);
            }
            else
            {
                VAR_13 = FUNC_4(VAR_14[VAR_9]);
            }

            if (VAR_13 != 0xFF)
            {
                VAR_12 = FUNC_6(VAR_13);
            }
            else
            {

                VAR_13 = FUNC_3();
                if (VAR_13 == 0xFF)
                {
                    FUNC_1("Cannot create standard handle %d, the SFT is full!\n", VAR_9);
                    continue;
                }

                VAR_12 = FUNC_6(VAR_13);
                FUNC_0(VAR_12 != ((void*)0));
                FUNC_12(VAR_12, sizeof(*VAR_12));

                if (FUNC_9(VAR_14[VAR_9]))
                {
                    PDOS_DEVICE_NODE VAR_15 = FUNC_5(VAR_7->ActiveCon);

                    VAR_12->DeviceInfo = VAR_15->DeviceAttributes | VAR_1;
                    VAR_12->DevicePointer = VAR_7->ActiveCon;
                    FUNC_11(VAR_12->FileName, sizeof(VAR_12->FileName), ' ');
                    FUNC_10(VAR_12->FileName, VAR_15->Name.Buffer, VAR_15->Name.Length);


                    if (VAR_15->OpenRoutine) VAR_15->OpenRoutine(VAR_15);
                }
                else
                {
                    VAR_12->Win32Handle = VAR_14[VAR_9];
                }
            }

            VAR_12->RefCount++;
            VAR_8[VAR_9] = VAR_13;
        }
    }
    else
    {

        VAR_10 = FUNC_13(VAR_6->CurrentPsp);
        VAR_11 = (LPBYTE)FUNC_7(VAR_10->HandleTablePtr);


        for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
        {
            VAR_12 = FUNC_6(VAR_11[VAR_9]);
            VAR_8[VAR_9] = VAR_11[VAR_9];


            VAR_12->RefCount++;
        }
    }
}
