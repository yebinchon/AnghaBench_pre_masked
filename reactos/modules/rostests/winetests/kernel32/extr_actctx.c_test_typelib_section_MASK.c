
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tlibredirect_data {int size; int major_version; int minor_version; int help_offset; int help_len; int flags; } ;
struct guidsection_header {int count; int size; int names_offset; int names_len; } ;
typedef int helpW ;
typedef int data2 ;
typedef int data ;
typedef char WCHAR ;
typedef int ULONG_PTR ;
struct TYPE_4__ {int cbSize; int ulSectionGlobalDataLength; scalar_t__ lpData; int * lpSectionGlobalData; int ulSectionTotalLength; scalar_t__ lpSectionBase; } ;
typedef scalar_t__ HANDLE ;
typedef int BYTE ;
typedef int BOOL ;
typedef TYPE_1__ ACTCTX_SECTION_KEYED_DATA ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,int ,int,int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *,int ,int *,TYPE_1__*) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    static const WCHAR VAR_10[] = {'h','e','l','p'};
    ACTCTX_SECTION_KEYED_DATA VAR_11, VAR_12;
    struct guidsection_header *VAR_13;
    struct tlibredirect_data *VAR_14;
    ULONG_PTR VAR_15;
    HANDLE VAR_16;
    BOOL VAR_17;


    FUNC_2("testdep1.manifest", VAR_7, -1, ((void*)0), ((void*)0));
    FUNC_2("testdep2.manifest", VAR_8, -1, ((void*)0), ((void*)0));
    FUNC_2("main_wndcls.manifest", VAR_9, -1, ((void*)0), ((void*)0));

    VAR_16 = FUNC_9("main_wndcls.manifest");
    FUNC_4(VAR_16 != VAR_3, "handle == INVALID_HANDLE_VALUE, error %u\n", FUNC_1());

    FUNC_0("testdep1.manifest");
    FUNC_0("testdep2.manifest");
    FUNC_0("main_wndcls.manifest");

    VAR_17 = FUNC_5(VAR_16, &VAR_15);
    FUNC_4(VAR_17, "ActivateActCtx failed: %u\n", FUNC_1());

    FUNC_3(&VAR_11, 0, sizeof(VAR_11));
    FUNC_3(&VAR_12, 0, sizeof(VAR_12));
    VAR_11.cbSize = sizeof(VAR_11);
    VAR_12 = sizeof(VAR_12);


    VAR_17 = FUNC_7(0, ((void*)0),
                                 VAR_0,
                                 &VAR_1, &VAR_11);
    FUNC_4(VAR_17, "got %d\n", VAR_17);

    VAR_17 = FUNC_7(0, ((void*)0),
                                 VAR_0,
                                 &VAR_2, &VAR_12);
    FUNC_4(VAR_17, "got %d\n", VAR_17);

    VAR_13 = (struct guidsection_header*)VAR_11.lpSectionBase;
    FUNC_4(VAR_13->count == 4, "got %d\n", VAR_13->count);
    FUNC_4(VAR_13->size == sizeof(*VAR_13), "got %d\n", VAR_13->size);


    FUNC_4(VAR_11.lpSectionBase == VAR_12, "got %p, %p\n", VAR_11.lpSectionBase, VAR_12);
    FUNC_4(VAR_11.ulSectionTotalLength == VAR_12, "got %u, %u\n", VAR_11.ulSectionTotalLength,
        VAR_12);

    FUNC_4(VAR_11.lpSectionGlobalData == ((BYTE*)VAR_13 + VAR_13->names_offset), "data.lpSectionGlobalData == NULL\n");
    FUNC_4(VAR_11.ulSectionGlobalDataLength == VAR_13->names_len, "data.ulSectionGlobalDataLength=%u\n",
       VAR_11.ulSectionGlobalDataLength);


    VAR_14 = (struct tlibredirect_data*)VAR_11.lpData;
    FUNC_4(VAR_14->size == sizeof(*VAR_14), "got %d\n", VAR_14->size);
    FUNC_4(VAR_14->major_version == 1, "got %d\n", VAR_14->major_version);
    FUNC_4(VAR_14->minor_version == 0, "got %d\n", VAR_14->minor_version);
    FUNC_4(VAR_14->help_offset > 0, "got %d\n", VAR_14->help_offset);
    FUNC_4(VAR_14->help_len == sizeof(VAR_10), "got %d\n", VAR_14->help_len);
    FUNC_4(VAR_14->flags == (VAR_5|VAR_4|VAR_6), "got %x\n", VAR_14->flags);

    VAR_17 = FUNC_6(0, VAR_15);
    FUNC_4(VAR_17, "DeactivateActCtx failed: %u\n", FUNC_1());

    FUNC_8(VAR_16);
}
