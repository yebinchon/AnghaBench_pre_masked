
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {int Length; int MaximumLength; char* Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef size_t ULONG ;
struct TYPE_8__ {int Length; int Buffer; } ;
struct TYPE_7__ {int* uuid; } ;
typedef int NTSTATUS ;
typedef TYPE_2__ BTRFS_UUID ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (char*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_3__ VAR_4 ;

NTSTATUS FUNC_7(BTRFS_UUID* VAR_5) {
    UNICODE_STRING VAR_6;
    NTSTATUS VAR_7;
    ULONG VAR_8, VAR_9;

    VAR_6.Length = VAR_6.MaximumLength = VAR_4.Length + (37 * sizeof(WCHAR));
    VAR_6.Buffer = FUNC_1(VAR_1, VAR_6.Length, VAR_0);

    if (!VAR_6.Buffer) {
        FUNC_0("out of memory\n");
        return VAR_2;
    }

    FUNC_4(VAR_6.Buffer, VAR_4.Buffer, VAR_4.Length);
    VAR_8 = VAR_4.Length / sizeof(WCHAR);

    VAR_6.Buffer[VAR_8] = '\\';
    VAR_8++;

    for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
        VAR_6.Buffer[VAR_8] = FUNC_5((VAR_5->uuid[VAR_9] & 0xF0) >> 4);
        VAR_6.Buffer[VAR_8+1] = FUNC_5(VAR_5->uuid[VAR_9] & 0xF);

        VAR_8 += 2;

        if (VAR_9 == 3 || VAR_9 == 5 || VAR_9 == 7 || VAR_9 == 9) {
            VAR_6.Buffer[VAR_8] = '-';
            VAR_8++;
        }
    }

    VAR_7 = FUNC_6(&VAR_6);
    if (!FUNC_3(VAR_7)) {
        FUNC_0("registry_mark_volume_unmounted_path returned %08x\n", VAR_7);
        goto end;
    }

    VAR_7 = VAR_3;

end:
    FUNC_2(VAR_6.Buffer);

    return VAR_7;
}
