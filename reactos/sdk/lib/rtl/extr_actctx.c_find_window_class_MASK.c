
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct wndclass_redirect_data {scalar_t__ module_len; scalar_t__ name_len; scalar_t__ size; } ;
struct strsection_header {int dummy; } ;
struct string_index {scalar_t__ hash; int name_offset; int rosterindex; } ;
typedef int WCHAR ;
struct TYPE_14__ {int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef scalar_t__ ULONG ;
struct TYPE_16__ {int sections; TYPE_10__* wndclass_section; } ;
struct TYPE_15__ {int ulDataFormatVersion; scalar_t__ cbSize; int ulAssemblyRosterIndex; int * hActCtx; int ulSectionTotalLength; TYPE_10__* lpSectionBase; scalar_t__ ulSectionGlobalDataLength; int * lpSectionGlobalData; scalar_t__ ulLength; struct wndclass_redirect_data* lpData; } ;
struct TYPE_13__ {int count; } ;
typedef TYPE_2__* PACTCTX_SECTION_KEYED_DATA ;
typedef scalar_t__ NTSTATUS ;
typedef int BYTE ;
typedef TYPE_3__ ACTIVATION_CONTEXT ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,TYPE_1__ const*,int const*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (void**,struct strsection_header*,int *) ;
 int FUNC_3 (int ,int ,struct strsection_header*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__ const*,int ,int ,scalar_t__*) ;
 int FUNC_6 (int ,int ,TYPE_10__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (TYPE_3__*,struct strsection_header**) ;
 struct wndclass_redirect_data* FUNC_8 (TYPE_3__*,struct string_index*) ;
 struct string_index* FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int const*,int ) ;
 int VAR_6 ;

__attribute__((used)) static NTSTATUS FUNC_11(ACTIVATION_CONTEXT* VAR_7, const UNICODE_STRING *VAR_8,
                                  PACTCTX_SECTION_KEYED_DATA VAR_9)
{
    struct string_index *VAR_10, *VAR_11 = ((void*)0);
    struct wndclass_redirect_data *VAR_12;
    ULONG VAR_13;
    int VAR_14;

    if (!(VAR_7->sections & VAR_5)) return VAR_3;

    if (!VAR_7->wndclass_section)
    {
        struct strsection_header *VAR_15;

        NTSTATUS VAR_16 = FUNC_7(VAR_7, &VAR_15);
        if (VAR_16) return VAR_16;

        if (FUNC_2((void**)&VAR_7->wndclass_section, VAR_15, ((void*)0)))
            FUNC_3(FUNC_4(), 0, VAR_15);
    }

    VAR_13 = 0;
    FUNC_5(VAR_8, VAR_4, VAR_1, &VAR_13);
    VAR_10 = FUNC_9(VAR_7);

    for (VAR_14 = 0; VAR_14 < VAR_7->wndclass_section->count; VAR_14++)
    {
        if (VAR_10->hash == VAR_13)
        {
            const WCHAR *VAR_17 = (WCHAR*)((BYTE*)VAR_7->wndclass_section + VAR_10->name_offset);

            if (!FUNC_10(VAR_17, VAR_8->Buffer))
            {
                VAR_11 = VAR_10;
                break;
            }
            else
                FUNC_0("hash collision 0x%08x, %wZ, %S\n", VAR_13, VAR_8, VAR_17);
        }
        VAR_10++;
    }

    if (!VAR_11) return VAR_3;

    if (VAR_9)
    {
        VAR_12 = FUNC_8(VAR_7, VAR_11);

        VAR_9->ulDataFormatVersion = 1;
        VAR_9->lpData = VAR_12;

        VAR_9->ulLength = VAR_12->size + VAR_12->name_len + VAR_12->module_len + 2*sizeof(WCHAR);
        VAR_9->lpSectionGlobalData = ((void*)0);
        VAR_9->ulSectionGlobalDataLength = 0;
        VAR_9->lpSectionBase = VAR_7->wndclass_section;
        VAR_9->ulSectionTotalLength = FUNC_6( FUNC_4(), 0, VAR_7->wndclass_section );
        VAR_9->hActCtx = ((void*)0);

        if (VAR_9->cbSize >= FUNC_1(VAR_0, VAR_6) + sizeof(ULONG))
            VAR_9->ulAssemblyRosterIndex = VAR_11->rosterindex;
    }

    return VAR_2;
}
