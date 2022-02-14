
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct strsection_header {int count; int size; } ;
typedef int data2 ;
typedef int data ;
typedef char WCHAR ;
typedef int ULONG_PTR ;
struct TYPE_4__ {int cbSize; int ulSectionTotalLength; scalar_t__ lpSectionBase; } ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;
typedef TYPE_1__ ACTCTX_SECTION_KEYED_DATA ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,int ,int,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int,char*,int,...) ;
 int FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *,int ,char const*,TYPE_1__*) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    static const WCHAR VAR_5[] = {'t','e','s','t','l','i','b','1','.','d','l','l',0};
    static const WCHAR VAR_6[] = {'t','e','s','t','l','i','b','2','.','d','l','l',0};
    ACTCTX_SECTION_KEYED_DATA VAR_7, VAR_8;
    struct strsection_header *VAR_9;
    ULONG_PTR VAR_10;
    HANDLE VAR_11;
    BOOL VAR_12;


    FUNC_2("testdep1.manifest", VAR_2, -1, ((void*)0), ((void*)0));
    FUNC_2("testdep2.manifest", VAR_3, -1, ((void*)0), ((void*)0));
    FUNC_2("main_wndcls.manifest", VAR_4, -1, ((void*)0), ((void*)0));

    VAR_11 = FUNC_9("main_wndcls.manifest");
    FUNC_4(VAR_11 != VAR_1, "handle == INVALID_HANDLE_VALUE, error %u\n", FUNC_1());

    FUNC_0("testdep1.manifest");
    FUNC_0("testdep2.manifest");
    FUNC_0("main_wndcls.manifest");

    VAR_12 = FUNC_5(VAR_11, &VAR_10);
    FUNC_4(VAR_12, "ActivateActCtx failed: %u\n", FUNC_1());

    FUNC_3(&VAR_7, 0, sizeof(VAR_7));
    FUNC_3(&VAR_8, 0, sizeof(VAR_8));
    VAR_7.cbSize = sizeof(VAR_7);
    VAR_8 = sizeof(VAR_8);


    VAR_12 = FUNC_7(0, ((void*)0),
                                    VAR_0,
                                    VAR_5, &VAR_7);
    FUNC_4(VAR_12, "got %d\n", VAR_12);
    VAR_12 = FUNC_7(0, ((void*)0),
                                    VAR_0,
                                    VAR_6, &VAR_8);
    FUNC_4(VAR_12, "got %d\n", VAR_12);

    VAR_9 = (struct strsection_header*)VAR_7.lpSectionBase;
    FUNC_4(VAR_9->count == 4, "got %d\n", VAR_9->count);
    FUNC_4(VAR_9->size == sizeof(*VAR_9), "got %d\n", VAR_9->size);


    FUNC_4(VAR_7.lpSectionBase == VAR_8, "got %p, %p\n", VAR_7.lpSectionBase, VAR_8);
    FUNC_4(VAR_7.ulSectionTotalLength == VAR_8, "got %u, %u\n", VAR_7.ulSectionTotalLength,
        VAR_8);

    VAR_12 = FUNC_6(0, VAR_10);
    FUNC_4(VAR_12, "DeactivateActCtx failed: %u\n", FUNC_1());

    FUNC_8(VAR_11);
}
