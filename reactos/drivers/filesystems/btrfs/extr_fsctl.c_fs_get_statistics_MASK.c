
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_3__ {int Version; int SizeOfCompleteStructure; int FileSystemType; } ;
typedef int NTSTATUS ;
typedef TYPE_1__ FILESYSTEM_STATISTICS ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static NTSTATUS FUNC_2(void* VAR_3, DWORD VAR_4, ULONG_PTR* VAR_5) {
    FILESYSTEM_STATISTICS* VAR_6;

    FUNC_1("STUB: FSCTL_FILESYSTEM_GET_STATISTICS\n");



    if (VAR_4 < sizeof(FILESYSTEM_STATISTICS))
        return VAR_1;

    VAR_6 = VAR_3;
    FUNC_0(VAR_6, sizeof(FILESYSTEM_STATISTICS));

    VAR_6->Version = 1;
    VAR_6->FileSystemType = VAR_0;
    VAR_6->SizeOfCompleteStructure = sizeof(FILESYSTEM_STATISTICS);

    *VAR_5 = sizeof(FILESYSTEM_STATISTICS);

    return VAR_2;
}
