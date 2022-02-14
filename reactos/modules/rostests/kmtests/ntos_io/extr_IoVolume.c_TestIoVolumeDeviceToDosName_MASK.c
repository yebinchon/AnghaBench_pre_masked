
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VolumeDeviceNameBuffer ;
struct TYPE_20__ {int Length; int* Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int ULONG ;
typedef int PFILE_OBJECT ;
typedef int PDEVICE_OBJECT ;
typedef TYPE_1__* NTSTATUS ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ,int *,int *) ;
 TYPE_1__* FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 TYPE_1__ FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *,int) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static
void
FUNC_14(void)
{
    NTSTATUS VAR_3;
    ULONG VAR_4;
    WCHAR VAR_5[32];
    UNICODE_STRING VAR_6;
    PFILE_OBJECT VAR_7;
    PDEVICE_OBJECT VAR_8;
    UNICODE_STRING VAR_9;
    UNICODE_STRING VAR_10 = FUNC_5(L"\\\\?\\Volume");

    FUNC_7(&VAR_6,
                              VAR_5,
                              sizeof(VAR_5));
    VAR_4 = 0;
    VAR_3 = VAR_2;
    while (1)
    {
        VAR_3 = FUNC_0(&VAR_6,
                                     &VAR_4,
                                     VAR_3);
        if (!FUNC_3(VAR_3))
        {
            FUNC_13("GetNextVolumeDevice(0x%lx) failed with %lx\n",
                  VAR_4, VAR_3);
            break;
        }

        FUNC_8(&VAR_6, VAR_5);
        VAR_3 = FUNC_1(&VAR_6,
                                          VAR_1,
                                          &VAR_7,
                                          &VAR_8);
        if (!FUNC_3(VAR_3))
        {
            FUNC_13("IoGetDeviceObjectPointer(%wZ) failed with %lx\n",
                  &VAR_6, VAR_3);
            continue;
        }

        VAR_3 = FUNC_2(VAR_8, &VAR_9);
        FUNC_11(VAR_3, VAR_2);
        if (!FUNC_12(FUNC_3(VAR_3), "No DOS name\n"))
        {
            FUNC_13("DOS name for %wZ is %wZ\n", &VAR_6, &VAR_9);
            if (VAR_9.Length == 2 * sizeof(WCHAR))
            {
                FUNC_10(VAR_9.Buffer[0] >= L'A' &&
                   VAR_9.Buffer[0] <= L'Z' &&
                   VAR_9.Buffer[1] == L':',
                   "Unexpected drive letter: %wZ\n", &VAR_9);
            }
            else
            {
                FUNC_10(FUNC_9(&VAR_10, &VAR_9, VAR_0),
                   "Unexpected volume path: %wZ\n", &VAR_9);
            }
            FUNC_6(&VAR_9);
        }
        FUNC_4(VAR_7);
        VAR_3 = VAR_2;
    }
    FUNC_10(VAR_4 > 1, "No volumes found\n");
}
