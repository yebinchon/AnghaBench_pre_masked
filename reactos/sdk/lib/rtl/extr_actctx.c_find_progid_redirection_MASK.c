
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct strsection_header {int dummy; } ;
struct string_index {int rosterindex; } ;
struct progidredirect_data {int size; } ;
typedef struct strsection_header guidsection_header ;
typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_12__ {int global_offset; int global_len; } ;
struct TYPE_11__ {int sections; TYPE_4__* progid_section; int comserver_section; } ;
struct TYPE_10__ {int ulDataFormatVersion; scalar_t__ cbSize; int ulAssemblyRosterIndex; int * hActCtx; int ulSectionTotalLength; TYPE_4__* lpSectionBase; int ulSectionGlobalDataLength; int * lpSectionGlobalData; int ulLength; struct progidredirect_data* lpData; } ;
typedef TYPE_1__* PACTCTX_SECTION_KEYED_DATA ;
typedef scalar_t__ NTSTATUS ;
typedef int BYTE ;
typedef TYPE_2__ ACTIVATION_CONTEXT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (void**,struct strsection_header*,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,struct strsection_header*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,TYPE_4__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (TYPE_2__*,struct strsection_header**) ;
 scalar_t__ FUNC_6 (TYPE_2__*,struct strsection_header**) ;
 struct string_index* FUNC_7 (TYPE_4__*,int const*) ;
 struct progidredirect_data* FUNC_8 (TYPE_2__*,struct string_index*) ;
 int VAR_4 ;

__attribute__((used)) static NTSTATUS FUNC_9(ACTIVATION_CONTEXT* VAR_5, const UNICODE_STRING *VAR_6,
                                     PACTCTX_SECTION_KEYED_DATA VAR_7)
{
    struct progidredirect_data *VAR_8;
    struct string_index *VAR_9;

    if (!(VAR_5->sections & VAR_1)) return VAR_3;

    if (!VAR_5->comserver_section)
    {
        struct guidsection_header *VAR_10;

        NTSTATUS VAR_11 = FUNC_5(VAR_5, &VAR_10);
        if (VAR_11) return VAR_11;

        if (FUNC_1((void**)&VAR_5->comserver_section, VAR_10, ((void*)0)))
            FUNC_2(FUNC_3(), 0, VAR_10);
    }

    if (!VAR_5->progid_section)
    {
        struct strsection_header *VAR_12;

        NTSTATUS VAR_13 = FUNC_6(VAR_5, &VAR_12);
        if (VAR_13) return VAR_13;

        if (FUNC_1((void**)&VAR_5->progid_section, VAR_12, ((void*)0)))
            FUNC_2(FUNC_3(), 0, VAR_12);
    }

    VAR_9 = FUNC_7(VAR_5->progid_section, VAR_6);
    if (!VAR_9) return VAR_3;

    if (VAR_7)
    {
        VAR_8 = FUNC_8(VAR_5, VAR_9);

        VAR_7->ulDataFormatVersion = 1;
        VAR_7->lpData = VAR_8;
        VAR_7->ulLength = VAR_8->size;
        VAR_7->lpSectionGlobalData = (BYTE*)VAR_5->progid_section + VAR_5->progid_section->global_offset;
        VAR_7->ulSectionGlobalDataLength = VAR_5->progid_section->global_len;
        VAR_7->lpSectionBase = VAR_5->progid_section;
        VAR_7->ulSectionTotalLength = FUNC_4( FUNC_3(), 0, VAR_5->progid_section );
        VAR_7->hActCtx = ((void*)0);

        if (VAR_7->cbSize >= FUNC_0(VAR_0, VAR_4) + sizeof(ULONG))
            VAR_7->ulAssemblyRosterIndex = VAR_9->rosterindex;
    }

    return VAR_2;
}
