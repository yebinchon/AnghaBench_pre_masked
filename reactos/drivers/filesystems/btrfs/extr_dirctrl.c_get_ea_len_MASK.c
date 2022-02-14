
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
typedef int root ;
typedef int device_extension ;
typedef int ULONG ;
struct TYPE_3__ {scalar_t__ NextEntryOffset; scalar_t__ EaValueLength; scalar_t__ EaNameLength; } ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef TYPE_1__ FILE_FULL_EA_INFORMATION ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int ,int ,int **,int *,int ) ;

__attribute__((used)) static ULONG FUNC_5(device_extension* VAR_2, root* VAR_3, uint64_t VAR_4, PIRP VAR_5) {
    uint8_t* VAR_6;
    uint16_t VAR_7;

    if (FUNC_4(VAR_2, VAR_3, VAR_4, VAR_0, VAR_1, &VAR_6, &VAR_7, VAR_5)) {
        ULONG VAR_8;
        NTSTATUS VAR_9;

        VAR_9 = FUNC_1((FILE_FULL_EA_INFORMATION*)VAR_6, VAR_7, &VAR_8);

        if (!FUNC_2(VAR_9)) {
            FUNC_3("IoCheckEaBufferValidity returned %08x (error at offset %u)\n", VAR_9, VAR_8);
            FUNC_0(VAR_6);
            return 0;
        } else {
            FILE_FULL_EA_INFORMATION* VAR_10;
            ULONG VAR_11;

            VAR_11 = 4;
            VAR_10 = (FILE_FULL_EA_INFORMATION*)VAR_6;
            do {
                VAR_11 += 5 + VAR_10->EaNameLength + VAR_10->EaValueLength;

                if (VAR_10->NextEntryOffset == 0)
                    break;

                VAR_10 = (FILE_FULL_EA_INFORMATION*)(((uint8_t*)VAR_10) + VAR_10->NextEntryOffset);
            } while (1);

            FUNC_0(VAR_6);

            return VAR_11;
        }
    } else
        return 0;
}
