
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tlibredirect_data {int size; int name_len; int name_offset; int help_len; int help_offset; int minor_version; int major_version; int flags; scalar_t__ langid; scalar_t__ res; } ;
struct guidsection_header {int size; unsigned int count; int index_offset; int magic; } ;
struct guid_index {int data_offset; int data_len; unsigned int rosterindex; int guid; } ;
struct TYPE_7__ {scalar_t__* helpdir; int minor; int major; int flags; int tlbid; } ;
struct TYPE_8__ {TYPE_2__ typelib; } ;
struct entity {scalar_t__ kind; TYPE_3__ u; } ;
struct TYPE_6__ {unsigned int num; struct entity* base; } ;
struct dll_redirect {scalar_t__* name; TYPE_1__ entities; } ;
struct assembly {unsigned int num_dlls; struct dll_redirect* dlls; } ;
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
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_6 (struct guidsection_header*,int ,int) ;
 int FUNC_7 (scalar_t__*) ;

__attribute__((used)) static NTSTATUS FUNC_8(ACTIVATION_CONTEXT* VAR_4, struct guidsection_header **VAR_5)
{
    unsigned int VAR_6, VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
    struct guidsection_header *VAR_12;
    ULONG VAR_13, VAR_14;
    struct tlibredirect_data *VAR_15;
    struct guid_index *VAR_16;


    for (VAR_6 = 0; VAR_6 < VAR_4->num_assemblies; VAR_6++)
    {
        struct assembly *VAR_17 = &VAR_4->assemblies[VAR_6];
        for (VAR_7 = 0; VAR_7 < VAR_17->num_dlls; VAR_7++)
        {
            struct dll_redirect *VAR_18 = &VAR_17->dlls[VAR_7];
            for (VAR_8 = 0; VAR_8 < VAR_18->entities.num; VAR_8++)
            {
                struct entity *VAR_19 = &VAR_18->entities.base[VAR_8];
                if (VAR_19->kind == VAR_0)
                {

                    VAR_9 += sizeof(*VAR_16);
                    VAR_9 += sizeof(*VAR_15);

                    if (*VAR_19->u.typelib.helpdir)
                        VAR_9 += FUNC_4((FUNC_7(VAR_19->u.typelib.helpdir)+1)*sizeof(WCHAR));


                    VAR_11 += (FUNC_7(VAR_18->name)+1)*sizeof(WCHAR);

                    VAR_10++;
                }
            }
        }
    }

    VAR_9 += FUNC_4(VAR_11);
    VAR_9 += sizeof(*VAR_12);

    VAR_12 = FUNC_0(FUNC_2(), 0, VAR_9);
    if (!VAR_12) return VAR_2;

    FUNC_6(VAR_12, 0, sizeof(*VAR_12));
    VAR_12->magic = VAR_1;
    VAR_12->size = sizeof(*VAR_12);
    VAR_12->count = VAR_10;
    VAR_12->index_offset = sizeof(*VAR_12) + FUNC_4(VAR_11);
    VAR_16 = (struct guid_index*)((BYTE*)VAR_12 + VAR_12->index_offset);
    VAR_13 = sizeof(*VAR_12);
    VAR_14 = VAR_12->index_offset + VAR_10*sizeof(*VAR_16);

    for (VAR_6 = 0; VAR_6 < VAR_4->num_assemblies; VAR_6++)
    {
        struct assembly *VAR_20 = &VAR_4->assemblies[VAR_6];
        for (VAR_7 = 0; VAR_7 < VAR_20->num_dlls; VAR_7++)
        {
            struct dll_redirect *VAR_21 = &VAR_20->dlls[VAR_7];
            for (VAR_8 = 0; VAR_8 < VAR_21->entities.num; VAR_8++)
            {
                struct entity *VAR_22 = &VAR_21->entities.base[VAR_8];
                if (VAR_22->kind == VAR_0)
                {
                    ULONG VAR_23, VAR_24;
                    UNICODE_STRING VAR_25;
                    WCHAR *VAR_26;

                    if (*VAR_22->u.typelib.helpdir)
                        VAR_24 = FUNC_7(VAR_22->u.typelib.helpdir)*sizeof(WCHAR);
                    else
                        VAR_24 = 0;

                    VAR_23 = FUNC_7(VAR_21->name)*sizeof(WCHAR);


                    FUNC_3(&VAR_25, VAR_22->u.typelib.tlbid);
                    FUNC_1(&VAR_25, &VAR_16->guid);
                    VAR_16->data_offset = VAR_14;
                    VAR_16->data_len = sizeof(*VAR_15) + FUNC_4(VAR_24);
                    VAR_16->rosterindex = VAR_6 + 1;


                    VAR_15 = (struct tlibredirect_data*)((BYTE*)VAR_12 + VAR_16->data_offset);
                    VAR_15->size = sizeof(*VAR_15);
                    VAR_15->res = 0;
                    VAR_15->name_len = VAR_23;
                    VAR_15->name_offset = VAR_13;

                    VAR_15->langid = 0;
                    VAR_15->flags = VAR_22->u.typelib.flags;
                    VAR_15->help_len = VAR_24;
                    VAR_15->help_offset = sizeof(*VAR_15);
                    VAR_15->major_version = VAR_22->u.typelib.major;
                    VAR_15->minor_version = VAR_22->u.typelib.minor;


                    VAR_26 = (WCHAR*)((BYTE*)VAR_12 + VAR_15->name_offset);
                    FUNC_5(VAR_26, VAR_21->name, VAR_15->name_len);
                    VAR_26[VAR_15->name_len/sizeof(WCHAR)] = 0;


                    if (VAR_15->help_len)
                    {
                        VAR_26 = (WCHAR*)((BYTE*)VAR_15 + VAR_15->help_offset);
                        FUNC_5(VAR_26, VAR_22->u.typelib.helpdir, VAR_15->help_len);
                        VAR_26[VAR_15->help_len/sizeof(WCHAR)] = 0;
                    }

                    VAR_14 += sizeof(*VAR_15);
                    if (VAR_24)
                        VAR_14 += FUNC_4(VAR_24 + sizeof(WCHAR));

                    VAR_13 += VAR_23 + sizeof(WCHAR);

                    VAR_16++;
                }
            }
        }
    }

    *VAR_5 = VAR_12;

    return VAR_3;
}
