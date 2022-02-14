
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct guidsection_header {int size; unsigned int count; int index_offset; int magic; } ;
struct guid_index {int data_offset; unsigned int rosterindex; int guid; scalar_t__ data_len; } ;
struct TYPE_7__ {scalar_t__ version; scalar_t__ name; int clsid; } ;
struct TYPE_8__ {TYPE_2__ clrsurrogate; } ;
struct entity {scalar_t__ kind; TYPE_3__ u; } ;
struct clrsurrogate_data {int size; int version_offset; int version_len; int name_offset; int name_len; int clsid; scalar_t__ res; } ;
struct TYPE_6__ {unsigned int num; struct entity* base; } ;
struct assembly {TYPE_1__ entities; } ;
typedef scalar_t__ WCHAR ;
typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_9__ {unsigned int num_assemblies; struct assembly* assemblies; } ;
typedef int NTSTATUS ;
typedef int BYTE ;
typedef TYPE_4__ ACTIVATION_CONTEXT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct guidsection_header* FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__*,scalar_t__,int) ;
 int FUNC_6 (struct guidsection_header*,int ,int) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static NTSTATUS FUNC_8(ACTIVATION_CONTEXT* VAR_4, struct guidsection_header **VAR_5)
{
    unsigned int VAR_6, VAR_7, VAR_8 = 0, VAR_9 = 0;
    struct guidsection_header *VAR_10;
    struct clrsurrogate_data *VAR_11;
    struct guid_index *VAR_12;
    ULONG VAR_13;


    for (VAR_6 = 0; VAR_6 < VAR_4->num_assemblies; VAR_6++)
    {
        struct assembly *VAR_14 = &VAR_4->assemblies[VAR_6];
        for (VAR_7 = 0; VAR_7 < VAR_14->entities.num; VAR_7++)
        {
            struct entity *VAR_15 = &VAR_14->entities.base[VAR_7];
            if (VAR_15->kind == VAR_0)
            {
                ULONG VAR_16;

                VAR_8 += sizeof(*VAR_12) + sizeof(*VAR_11);
                VAR_16 = FUNC_7(VAR_15->u.clrsurrogate.name) + 1;
                if (VAR_15->u.clrsurrogate.version)
                   VAR_16 += FUNC_7(VAR_15->u.clrsurrogate.version) + 1;
                VAR_8 += FUNC_4(VAR_16*sizeof(WCHAR));

                VAR_9++;
            }
        }
    }

    VAR_8 += sizeof(*VAR_10);

    VAR_10 = FUNC_0(FUNC_2(), 0, VAR_8);
    if (!VAR_10) return VAR_2;

    FUNC_6(VAR_10, 0, sizeof(*VAR_10));
    VAR_10->magic = VAR_1;
    VAR_10->size = sizeof(*VAR_10);
    VAR_10->count = VAR_9;
    VAR_10->index_offset = sizeof(*VAR_10);
    VAR_12 = (struct guid_index*)((BYTE*)VAR_10 + VAR_10->index_offset);
    VAR_13 = VAR_10->index_offset + VAR_9*sizeof(*VAR_12);

    for (VAR_6 = 0; VAR_6 < VAR_4->num_assemblies; VAR_6++)
    {
        struct assembly *VAR_17 = &VAR_4->assemblies[VAR_6];
        for (VAR_7 = 0; VAR_7 < VAR_17->entities.num; VAR_7++)
        {
            struct entity *VAR_18 = &VAR_17->entities.base[VAR_7];
            if (VAR_18->kind == VAR_0)
            {
                ULONG VAR_19, VAR_20;
                UNICODE_STRING VAR_21;
                WCHAR *VAR_22;

                if (VAR_18->u.clrsurrogate.version)
                    VAR_19 = FUNC_7(VAR_18->u.clrsurrogate.version)*sizeof(WCHAR);
                else
                    VAR_19 = 0;
                VAR_20 = FUNC_7(VAR_18->u.clrsurrogate.name)*sizeof(WCHAR);


                FUNC_3(&VAR_21, VAR_18->u.clrsurrogate.clsid);
                FUNC_1(&VAR_21, &VAR_12->guid);

                VAR_12->data_offset = VAR_13;
                VAR_12->data_len = sizeof(*VAR_11) + FUNC_4(VAR_20 + sizeof(WCHAR) + (VAR_19 ? VAR_19 + sizeof(WCHAR) : 0));
                VAR_12->rosterindex = VAR_6 + 1;


                VAR_11 = (struct clrsurrogate_data*)((BYTE*)VAR_10 + VAR_12->data_offset);
                VAR_11->size = sizeof(*VAR_11);
                VAR_11->res = 0;
                VAR_11->clsid = VAR_12->guid;
                VAR_11->version_offset = VAR_19 ? VAR_11->size : 0;
                VAR_11->version_len = VAR_19;
                VAR_11->name_offset = VAR_11->size + VAR_19;
                if (VAR_19)
                    VAR_11->name_offset += sizeof(WCHAR);
                VAR_11->name_len = VAR_20;


                VAR_22 = (WCHAR*)((BYTE*)VAR_11 + VAR_11->name_offset);
                FUNC_5(VAR_22, VAR_18->u.clrsurrogate.name, VAR_11->name_len);
                VAR_22[VAR_11->name_len/sizeof(WCHAR)] = 0;


                if (VAR_11->version_len)
                {
                    VAR_22 = (WCHAR*)((BYTE*)VAR_11 + VAR_11->version_offset);
                    FUNC_5(VAR_22, VAR_18->u.clrsurrogate.version, VAR_11->version_len);
                    VAR_22[VAR_11->version_len/sizeof(WCHAR)] = 0;
                }

                VAR_13 += VAR_12->data_offset;
                VAR_12++;
            }
        }
    }

    *VAR_5 = VAR_10;

    return VAR_3;
}
