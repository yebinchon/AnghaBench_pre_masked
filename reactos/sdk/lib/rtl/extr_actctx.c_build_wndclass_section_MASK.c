
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct wndclass_redirect_data {int size; int name_len; int name_offset; int module_len; int module_offset; scalar_t__ res; } ;
struct strsection_header {int size; unsigned int count; int index_offset; int magic; } ;
struct string_index {int name_offset; int name_len; int data_offset; int data_len; unsigned int rosterindex; int hash; } ;
struct TYPE_8__ {char const* name; scalar_t__ versioned; } ;
struct TYPE_9__ {TYPE_1__ class; } ;
struct entity {scalar_t__ kind; TYPE_2__ u; } ;
struct TYPE_10__ {unsigned int num; struct entity* base; } ;
struct dll_redirect {char const* name; TYPE_3__ entities; } ;
struct assembly {unsigned int num_dlls; struct dll_redirect* dlls; } ;
typedef char WCHAR ;
typedef int USHORT ;
struct TYPE_11__ {char const* Buffer; int Length; int MaximumLength; } ;
typedef TYPE_4__ UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_12__ {unsigned int num_assemblies; struct assembly* assemblies; } ;
typedef int NTSTATUS ;
typedef int BYTE ;
typedef TYPE_5__ ACTIVATION_CONTEXT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct strsection_header* FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_4__*,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct assembly*,char*) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (struct strsection_header*,int ,int) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static NTSTATUS FUNC_9(ACTIVATION_CONTEXT* VAR_6, struct strsection_header **VAR_7)
{
    unsigned int VAR_8, VAR_9, VAR_10, VAR_11 = 0, VAR_12 = 0;
    struct wndclass_redirect_data *VAR_13;
    struct strsection_header *VAR_14;
    struct string_index *VAR_15;
    ULONG VAR_16;


    for (VAR_8 = 0; VAR_8 < VAR_6->num_assemblies; VAR_8++)
    {
        struct assembly *VAR_17 = &VAR_6->assemblies[VAR_8];
        for (VAR_9 = 0; VAR_9 < VAR_17->num_dlls; VAR_9++)
        {
            struct dll_redirect *VAR_18 = &VAR_17->dlls[VAR_9];
            for (VAR_10 = 0; VAR_10 < VAR_18->entities.num; VAR_10++)
            {
                struct entity *VAR_19 = &VAR_18->entities.base[VAR_10];
                if (VAR_19->kind == VAR_0)
                {
                    int VAR_20 = FUNC_8(VAR_19->u.class.name) + 1;
                    int VAR_21;


                    VAR_11 += sizeof(*VAR_15);
                    VAR_11 += sizeof(*VAR_13);

                    VAR_11 += FUNC_3(VAR_20*sizeof(WCHAR));

                    if (VAR_19->u.class.versioned)
                        VAR_21 = FUNC_4(VAR_17, ((void*)0)) + VAR_20 + 1 ;
                    else
                        VAR_21 = VAR_20;
                    VAR_21 += FUNC_8(VAR_18->name) + 1;
                    VAR_11 += FUNC_3(VAR_21*sizeof(WCHAR));

                    VAR_12++;
                }
            }
        }
    }

    VAR_11 += sizeof(*VAR_14);

    VAR_14 = FUNC_0(FUNC_1(), 0, VAR_11);
    if (!VAR_14) return VAR_2;

    FUNC_6(VAR_14, 0, sizeof(*VAR_14));
    VAR_14->magic = VAR_4;
    VAR_14->size = sizeof(*VAR_14);
    VAR_14->count = VAR_12;
    VAR_14->index_offset = sizeof(*VAR_14);
    VAR_15 = (struct string_index*)((BYTE*)VAR_14 + VAR_14->index_offset);
    VAR_16 = VAR_14->index_offset + VAR_14->count*sizeof(*VAR_15);

    for (VAR_8 = 0; VAR_8 < VAR_6->num_assemblies; VAR_8++)
    {
        struct assembly *VAR_22 = &VAR_6->assemblies[VAR_8];
        for (VAR_9 = 0; VAR_9 < VAR_22->num_dlls; VAR_9++)
        {
            struct dll_redirect *VAR_23 = &VAR_22->dlls[VAR_9];
            for (VAR_10 = 0; VAR_10 < VAR_23->entities.num; VAR_10++)
            {
                struct entity *VAR_24 = &VAR_23->entities.base[VAR_10];
                if (VAR_24->kind == VAR_0)
                {
                    static const WCHAR VAR_25[] = {'!',0};
                    ULONG VAR_26, VAR_27;
                    UNICODE_STRING VAR_28;
                    WCHAR *VAR_29;


                    VAR_28.Buffer = VAR_24->u.class.name;
                    VAR_28.Length = (USHORT)FUNC_8(VAR_24->u.class.name)*sizeof(WCHAR);
                    VAR_28.MaximumLength = VAR_28.Length + sizeof(WCHAR);

                    FUNC_2(&VAR_28, VAR_5, VAR_1, &VAR_15->hash);


                    if (VAR_24->u.class.versioned)
                        VAR_26 = (FUNC_4(VAR_22, ((void*)0)) + 1)*sizeof(WCHAR) + VAR_28.Length;
                    else
                        VAR_26 = VAR_28.Length;
                    VAR_27 = FUNC_8(VAR_23->name)*sizeof(WCHAR);

                    VAR_15->name_offset = VAR_16;
                    VAR_15->name_len = VAR_28.Length;
                    VAR_15->data_offset = VAR_15->name_offset + FUNC_3(VAR_28.MaximumLength);
                    VAR_15->data_len = sizeof(*VAR_13) + VAR_26 + VAR_27 + 2*sizeof(WCHAR) ;
                    VAR_15->rosterindex = VAR_8 + 1;


                    VAR_13 = (struct wndclass_redirect_data*)((BYTE*)VAR_14 + VAR_15->data_offset);
                    VAR_13->size = sizeof(*VAR_13);
                    VAR_13->res = 0;
                    VAR_13->name_len = VAR_26;
                    VAR_13->name_offset = sizeof(*VAR_13);
                    VAR_13->module_len = VAR_27;
                    VAR_13->module_offset = VAR_15->data_offset + VAR_13->name_offset + VAR_13->name_len + sizeof(WCHAR);


                    VAR_29 = (WCHAR*)((BYTE*)VAR_14 + VAR_15->name_offset);
                    FUNC_5(VAR_29, VAR_24->u.class.name, VAR_15->name_len);
                    VAR_29[VAR_15->name_len/sizeof(WCHAR)] = 0;


                    VAR_29 = (WCHAR*)((BYTE*)VAR_14 + VAR_13->module_offset);
                    FUNC_5(VAR_29, VAR_23->name, VAR_13->module_len);
                    VAR_29[VAR_13->module_len/sizeof(WCHAR)] = 0;


                    VAR_29 = (WCHAR*)((BYTE*)VAR_13 + VAR_13->name_offset);
                    if (VAR_24->u.class.versioned)
                    {
                        FUNC_4(VAR_22, VAR_29);
                        FUNC_7(VAR_29, VAR_25);
                        FUNC_7(VAR_29, VAR_24->u.class.name);
                    }
                    else
                    {
                        FUNC_5(VAR_29, VAR_24->u.class.name, VAR_15->name_len);
                        VAR_29[VAR_15->name_len/sizeof(WCHAR)] = 0;
                    }

                    VAR_16 += sizeof(*VAR_13);
                    VAR_16 += FUNC_3(VAR_28.MaximumLength) + FUNC_3(VAR_26 + VAR_27 + 2*sizeof(WCHAR));

                    VAR_15++;
                }
            }
        }
    }

    *VAR_7 = VAR_14;

    return VAR_3;
}
