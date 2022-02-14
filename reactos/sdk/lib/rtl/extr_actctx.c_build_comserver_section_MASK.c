
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct guidsection_header {int size; int count; int index_offset; int magic; } ;
struct guid_index {int dummy; } ;
struct dll_redirect {int entities; } ;
struct assembly {unsigned int num_dlls; struct dll_redirect* dlls; int entities; } ;
typedef int ULONG ;
struct TYPE_3__ {unsigned int num_assemblies; struct assembly* assemblies; } ;
typedef int NTSTATUS ;
typedef int BYTE ;
typedef TYPE_1__ ACTIVATION_CONTEXT ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct guidsection_header* FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct guidsection_header*,int *,struct dll_redirect*,struct guid_index**,int*,int*,int*,unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int *,struct dll_redirect*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_6 (struct guidsection_header*,int ,int) ;

__attribute__((used)) static NTSTATUS FUNC_7(ACTIVATION_CONTEXT* VAR_3, struct guidsection_header **VAR_4)
{
    unsigned int VAR_5, VAR_6, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
    struct guidsection_header *VAR_10;
    ULONG VAR_11, VAR_12;
    struct guid_index *VAR_13;
    ULONG VAR_14;


    for (VAR_5 = 0; VAR_5 < VAR_3->num_assemblies; VAR_5++)
    {
        struct assembly *VAR_15 = &VAR_3->assemblies[VAR_5];
        FUNC_5(&VAR_15->entities, ((void*)0), &VAR_8, &VAR_7, &VAR_9);
        for (VAR_6 = 0; VAR_6 < VAR_15->num_dlls; VAR_6++)
        {
            struct dll_redirect *VAR_16 = &VAR_15->dlls[VAR_6];
            FUNC_5(&VAR_16->entities, VAR_16, &VAR_8, &VAR_7, &VAR_9);
        }
    }

    VAR_7 += FUNC_4(VAR_9);
    VAR_7 += sizeof(*VAR_10);

    VAR_10 = FUNC_1(FUNC_2(), 0, VAR_7);
    if (!VAR_10) return VAR_1;

    FUNC_6(VAR_10, 0, sizeof(*VAR_10));
    VAR_10->magic = VAR_0;
    VAR_10->size = sizeof(*VAR_10);
    VAR_10->count = 2*VAR_8;
    VAR_10->index_offset = sizeof(*VAR_10) + FUNC_4(VAR_9);
    VAR_13 = (struct guid_index*)((BYTE*)VAR_10 + VAR_10->index_offset);
    VAR_11 = sizeof(*VAR_10);
    VAR_12 = VAR_10->index_offset + 2*VAR_8*sizeof(*VAR_13);

    VAR_14 = FUNC_0();
    for (VAR_5 = 0; VAR_5 < VAR_3->num_assemblies; VAR_5++)
    {
        struct assembly *VAR_17 = &VAR_3->assemblies[VAR_5];
        FUNC_3(VAR_10, &VAR_17->entities, ((void*)0), &VAR_13, &VAR_12, &VAR_11, &VAR_14, VAR_5+1);
        for (VAR_6 = 0; VAR_6 < VAR_17->num_dlls; VAR_6++)
        {
            struct dll_redirect *VAR_18 = &VAR_17->dlls[VAR_6];
            FUNC_3(VAR_10, &VAR_18->entities, VAR_18, &VAR_13, &VAR_12, &VAR_11, &VAR_14, VAR_5+1);
        }
    }

    *VAR_4 = VAR_10;

    return VAR_2;
}
