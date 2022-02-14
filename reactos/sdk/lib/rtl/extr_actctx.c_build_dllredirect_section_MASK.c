
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct strsection_header {int size; unsigned int count; int index_offset; int magic; } ;
struct string_index {int name_offset; int name_len; int data_offset; int data_len; unsigned int rosterindex; int hash; } ;
struct dllredirect_data {int size; int unk; struct strsection_header* res; } ;
struct dll_redirect {int name; } ;
struct assembly {unsigned int num_dlls; struct dll_redirect* dlls; } ;
typedef scalar_t__ WCHAR ;
typedef int USHORT ;
struct TYPE_5__ {int Length; int MaximumLength; int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_6__ {unsigned int num_assemblies; struct assembly* assemblies; } ;
typedef int NTSTATUS ;
typedef int BYTE ;
typedef TYPE_2__ ACTIVATION_CONTEXT ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 struct strsection_header* FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__*,int ,int) ;
 int FUNC_6 (struct strsection_header*,int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static NTSTATUS FUNC_8(ACTIVATION_CONTEXT* VAR_5, struct strsection_header **VAR_6)
{
    unsigned int VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 0;
    struct strsection_header *VAR_11;
    struct dllredirect_data *VAR_12;
    struct string_index *VAR_13;
    ULONG VAR_14;

    FUNC_0("actctx %p, num_assemblies %d\n", VAR_5, VAR_5->num_assemblies);


    for (VAR_7 = 0; VAR_7 < VAR_5->num_assemblies; VAR_7++)
    {
        struct assembly *VAR_15 = &VAR_5->assemblies[VAR_7];
        for (VAR_8 = 0; VAR_8 < VAR_15->num_dlls; VAR_8++)
        {
            struct dll_redirect *VAR_16 = &VAR_15->dlls[VAR_8];


            VAR_9 += sizeof(*VAR_13);
            VAR_9 += sizeof(*VAR_12);
            VAR_9 += FUNC_4((FUNC_7(VAR_16->name)+1)*sizeof(WCHAR));

            FUNC_0("assembly %d (%p), dll %d: dll name %S\n", VAR_7, VAR_15, VAR_8, VAR_16->name);
        }

        VAR_10 += VAR_15->num_dlls;
    }

    VAR_9 += sizeof(*VAR_11);

    VAR_11 = FUNC_1(FUNC_2(), 0, VAR_9);
    if (!VAR_11) return VAR_1;

    FUNC_6(VAR_11, 0, sizeof(*VAR_11));
    VAR_11->magic = VAR_3;
    VAR_11->size = sizeof(*VAR_11);
    VAR_11->count = VAR_10;
    VAR_11->index_offset = sizeof(*VAR_11);
    VAR_13 = (struct string_index*)((BYTE*)VAR_11 + VAR_11->index_offset);
    VAR_14 = VAR_11->index_offset + VAR_11->count*sizeof(*VAR_13);

    for (VAR_7 = 0; VAR_7 < VAR_5->num_assemblies; VAR_7++)
    {
        struct assembly *VAR_17 = &VAR_5->assemblies[VAR_7];

        FUNC_0("assembly->num_dlls %d\n", VAR_17->num_dlls);

        for (VAR_8 = 0; VAR_8 < VAR_17->num_dlls; VAR_8++)
        {
            struct dll_redirect *VAR_18 = &VAR_17->dlls[VAR_8];
            UNICODE_STRING VAR_19;
            WCHAR *VAR_20;

            FUNC_0("%d: dll name %S\n", VAR_8, VAR_18->name);

            VAR_19.Buffer = VAR_18->name;
            VAR_19.Length = (USHORT)FUNC_7(VAR_18->name)*sizeof(WCHAR);
            VAR_19.MaximumLength = VAR_19.Length + sizeof(WCHAR);

            FUNC_3(&VAR_19, VAR_4, VAR_0, &VAR_13->hash);

            VAR_13->name_offset = VAR_14;
            VAR_13->name_len = VAR_19.Length;
            VAR_13->data_offset = VAR_13->name_offset + FUNC_4(VAR_19.MaximumLength);
            VAR_13->data_len = sizeof(*VAR_12);
            VAR_13->rosterindex = VAR_7 + 1;


            VAR_12 = (struct dllredirect_data*)((BYTE*)VAR_11 + VAR_13->data_offset);
            VAR_12->size = sizeof(*VAR_12);
            VAR_12->unk = 2;
            FUNC_6(VAR_12->res, 0, sizeof(VAR_12->res));


            VAR_20 = (WCHAR*)((BYTE*)VAR_11 + VAR_13->name_offset);
            FUNC_5(VAR_20, VAR_18->name, VAR_13->name_len);
            VAR_20[VAR_13->name_len/sizeof(WCHAR)] = 0;

            VAR_14 += sizeof(*VAR_12) + FUNC_4(VAR_19.MaximumLength);

            VAR_13++;
        }
    }

    *VAR_6 = VAR_11;

    return VAR_2;
}
