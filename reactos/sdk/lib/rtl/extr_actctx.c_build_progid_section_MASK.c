
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct strsection_header {int size; unsigned int count; unsigned int global_offset; unsigned int global_len; unsigned int index_offset; int magic; } ;
struct string_index {int dummy; } ;
struct dll_redirect {int entities; } ;
struct assembly {unsigned int num_dlls; struct dll_redirect* dlls; int entities; } ;
typedef unsigned int ULONG ;
struct TYPE_4__ {unsigned int num_assemblies; struct assembly* assemblies; } ;
typedef int NTSTATUS ;
typedef int GUID ;
typedef int BYTE ;
typedef TYPE_1__ ACTIVATION_CONTEXT ;


 struct strsection_header* FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,struct strsection_header*,int *,struct string_index**,unsigned int*,unsigned int*,unsigned int) ;
 int FUNC_3 (int *,unsigned int*,unsigned int*) ;
 int FUNC_4 (struct strsection_header*,int ,int) ;

__attribute__((used)) static NTSTATUS FUNC_5(ACTIVATION_CONTEXT* VAR_3, struct strsection_header **VAR_4)
{
    unsigned int VAR_5, VAR_6, VAR_7 = 0, VAR_8 = 0;
    struct strsection_header *VAR_9;
    ULONG VAR_10, VAR_11;
    struct string_index *VAR_12;


    for (VAR_5 = 0; VAR_5 < VAR_3->num_assemblies; VAR_5++)
    {
        struct assembly *VAR_13 = &VAR_3->assemblies[VAR_5];

        FUNC_3(&VAR_13->entities, &VAR_8, &VAR_7);
        for (VAR_6 = 0; VAR_6 < VAR_13->num_dlls; VAR_6++)
        {
            struct dll_redirect *VAR_14 = &VAR_13->dlls[VAR_6];
            FUNC_3(&VAR_14->entities, &VAR_8, &VAR_7);
        }
    }

    VAR_7 += sizeof(*VAR_9);

    VAR_9 = FUNC_0(FUNC_1(), 0, VAR_7);
    if (!VAR_9) return VAR_0;

    FUNC_4(VAR_9, 0, sizeof(*VAR_9));
    VAR_9->magic = VAR_2;
    VAR_9->size = sizeof(*VAR_9);
    VAR_9->count = VAR_8;
    VAR_9->global_offset = VAR_9->size;
    VAR_9->global_len = VAR_8*sizeof(GUID);
    VAR_9->index_offset = VAR_9->size + VAR_9->global_len;

    VAR_12 = (struct string_index*)((BYTE*)VAR_9 + VAR_9->index_offset);
    VAR_10 = VAR_9->index_offset + VAR_8*sizeof(*VAR_12);
    VAR_11 = VAR_9->global_offset;

    for (VAR_5 = 0; VAR_5 < VAR_3->num_assemblies; VAR_5++)
    {
        struct assembly *VAR_15 = &VAR_3->assemblies[VAR_5];

        FUNC_2(VAR_3, VAR_9, &VAR_15->entities, &VAR_12, &VAR_10, &VAR_11, VAR_5 + 1);
        for (VAR_6 = 0; VAR_6 < VAR_15->num_dlls; VAR_6++)
        {
            struct dll_redirect *VAR_16 = &VAR_15->dlls[VAR_6];
            FUNC_2(VAR_3, VAR_9, &VAR_16->entities, &VAR_12, &VAR_10, &VAR_11, VAR_5 + 1);
        }
    }

    *VAR_4 = VAR_9;

    return VAR_1;
}
