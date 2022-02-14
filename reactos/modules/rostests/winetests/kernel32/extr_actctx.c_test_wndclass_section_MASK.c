
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wndclass_redirect_data {int name_offset; } ;
struct strsection_header {int count; int size; } ;
typedef int data2 ;
typedef int data ;
typedef char WCHAR ;
typedef int ULONG_PTR ;
struct TYPE_4__ {int cbSize; scalar_t__ lpData; int ulSectionTotalLength; scalar_t__ lpSectionBase; } ;
typedef scalar_t__ HANDLE ;
typedef int BYTE ;
typedef int BOOL ;
typedef TYPE_1__ ACTCTX_SECTION_KEYED_DATA ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,int ,int,int *,int *) ;
 int FUNC_3 (char*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int,char*,int,...) ;
 int FUNC_6 (scalar_t__,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int *,int ,char const*,TYPE_1__*) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 char const* VAR_5 ;
 char const* VAR_6 ;

__attribute__((used)) static void FUNC_12(void)
{
    static const WCHAR VAR_7[] = {'1','.','2','.','3','.','4','!','w','n','d','C','l','a','s','s','1',0};
    ACTCTX_SECTION_KEYED_DATA VAR_8, VAR_9;
    struct wndclass_redirect_data *VAR_10;
    struct strsection_header *VAR_11;
    ULONG_PTR VAR_12;
    HANDLE VAR_13;
    WCHAR *VAR_14;
    BOOL VAR_15;


    FUNC_2("testdep1.manifest", VAR_2, -1, ((void*)0), ((void*)0));
    FUNC_2("testdep2.manifest", VAR_3, -1, ((void*)0), ((void*)0));
    FUNC_2("main_wndcls.manifest", VAR_4, -1, ((void*)0), ((void*)0));

    VAR_13 = FUNC_10("main_wndcls.manifest");
    FUNC_5(VAR_13 != VAR_1, "handle == INVALID_HANDLE_VALUE, error %u\n", FUNC_1());

    FUNC_0("testdep1.manifest");
    FUNC_0("testdep2.manifest");
    FUNC_0("main_wndcls.manifest");

    VAR_15 = FUNC_6(VAR_13, &VAR_12);
    FUNC_5(VAR_15, "ActivateActCtx failed: %u\n", FUNC_1());

    FUNC_4(&VAR_8, 0, sizeof(VAR_8));
    FUNC_4(&VAR_9, 0, sizeof(VAR_9));
    VAR_8.cbSize = sizeof(VAR_8);
    VAR_9 = sizeof(VAR_9);


    VAR_15 = FUNC_8(0, ((void*)0),
                                    VAR_0,
                                    VAR_5, &VAR_8);
    FUNC_5(VAR_15, "got %d\n", VAR_15);
    VAR_15 = FUNC_8(0, ((void*)0),
                                    VAR_0,
                                    VAR_6, &VAR_9);
    FUNC_5(VAR_15, "got %d\n", VAR_15);

    VAR_11 = (struct strsection_header*)VAR_8.lpSectionBase;
    FUNC_5(VAR_11->count == 4, "got %d\n", VAR_11->count);
    FUNC_5(VAR_11->size == sizeof(*VAR_11), "got %d\n", VAR_11->size);


    FUNC_5(VAR_8.lpSectionBase == VAR_9, "got %p, %p\n", VAR_8.lpSectionBase, VAR_9);
    FUNC_5(VAR_8.ulSectionTotalLength == VAR_9, "got %u, %u\n", VAR_8.ulSectionTotalLength,
        VAR_9);


    VAR_10 = (struct wndclass_redirect_data*)VAR_8.lpData;
    VAR_14 = (WCHAR*)((BYTE*)VAR_8.lpData + VAR_10->name_offset);
    FUNC_5(!FUNC_3(VAR_14, VAR_7), "got %s\n", FUNC_11(VAR_14));

    VAR_10 = (struct wndclass_redirect_data*)VAR_9;
    VAR_14 = (WCHAR*)((BYTE*)VAR_9 + VAR_10->name_offset);
    FUNC_5(!FUNC_3(VAR_14, VAR_6), "got %s\n", FUNC_11(VAR_14));

    VAR_15 = FUNC_7(0, VAR_12);
    FUNC_5(VAR_15, "DeactivateActCtx failed: %u\n", FUNC_1());

    FUNC_9(VAR_13);
}
