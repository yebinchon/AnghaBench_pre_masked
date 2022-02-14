
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int PFILE_OBJECT ;
typedef int NTSTATUS ;
typedef int FSCTL_SET_INTEGRITY_INFORMATION_BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static NTSTATUS FUNC_1(PFILE_OBJECT VAR_2, void* VAR_3, ULONG VAR_4) {
    FUNC_0("FSCTL_SET_INTEGRITY_INFORMATION\n");



    if (!VAR_2)
        return VAR_0;

    if (!VAR_3 || VAR_4 < sizeof(FSCTL_SET_INTEGRITY_INFORMATION_BUFFER))
        return VAR_0;

    return VAR_1;
}
