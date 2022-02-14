
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int WCHAR ;
typedef int UNICODE_STRING ;
typedef scalar_t__ ULONG ;
struct TYPE_5__ {scalar_t__ Type; scalar_t__ DataLength; int DataOffset; } ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_1__ KEY_VALUE_FULL_INFORMATION ;
typedef int HANDLE ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 TYPE_1__* FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_4 (void*,int *,scalar_t__) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *,int ,TYPE_1__*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_9 (int ,int *,int ,scalar_t__,void*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(HANDLE VAR_6, WCHAR* VAR_7, ULONG VAR_8, void* VAR_9, ULONG VAR_10) {
    ULONG VAR_11;
    KEY_VALUE_FULL_INFORMATION* VAR_12;
    UNICODE_STRING VAR_13;
    NTSTATUS VAR_14;

    FUNC_5(&VAR_13, VAR_7);

    VAR_12 = ((void*)0);
    VAR_11 = 0;
    VAR_14 = FUNC_8(VAR_6, &VAR_13, VAR_1, VAR_12, VAR_11, &VAR_11);

    if ((VAR_14 == VAR_4 || VAR_14 == VAR_3) && VAR_11 > 0) {
        VAR_12 = FUNC_1(VAR_2, VAR_11, VAR_0);

        if (!VAR_12) {
            FUNC_0("out of memory\n");
            FUNC_6(VAR_6);
            return;
        }

        VAR_14 = FUNC_8(VAR_6, &VAR_13, VAR_1, VAR_12, VAR_11, &VAR_11);

        if (FUNC_3(VAR_14)) {
            if (VAR_12->Type == VAR_8 && VAR_12->DataLength >= VAR_10) {
                FUNC_4(VAR_9, ((uint8_t*)VAR_12) + VAR_12->DataOffset, VAR_10);
            } else {
                VAR_14 = FUNC_7(VAR_6, &VAR_13);
                if (!FUNC_3(VAR_14)) {
                    FUNC_0("ZwDeleteValueKey returned %08x\n", VAR_14);
                }

                VAR_14 = FUNC_9(VAR_6, &VAR_13, 0, VAR_8, VAR_9, VAR_10);
                if (!FUNC_3(VAR_14)) {
                    FUNC_0("ZwSetValueKey returned %08x\n", VAR_14);
                }
            }
        }

        FUNC_2(VAR_12);
    } else if (VAR_14 == VAR_5) {
        VAR_14 = FUNC_9(VAR_6, &VAR_13, 0, VAR_8, VAR_9, VAR_10);

        if (!FUNC_3(VAR_14)) {
            FUNC_0("ZwSetValueKey returned %08x\n", VAR_14);
        }
    } else {
        FUNC_0("ZwQueryValueKey returned %08x\n", VAR_14);
    }
}
