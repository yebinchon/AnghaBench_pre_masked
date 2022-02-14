
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct strsection_header {int dummy; } ;
struct string_index {int dummy; } ;
struct progids {unsigned int num; scalar_t__* progids; } ;
struct guid_index {int dummy; } ;
struct entity_array {unsigned int num; struct entity* base; } ;
struct TYPE_6__ {scalar_t__ progid; int clsid; struct progids progids; } ;
struct TYPE_7__ {TYPE_1__ comclass; } ;
struct entity {scalar_t__ kind; TYPE_2__ u; } ;
struct comclassredirect_data {int alias; } ;
typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_8__ {int comserver_section; } ;
typedef int GUID ;
typedef TYPE_3__ ACTIVATION_CONTEXT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 struct guid_index* FUNC_2 (int ,int *) ;
 struct comclassredirect_data* FUNC_3 (TYPE_3__*,struct guid_index*) ;
 int FUNC_4 (struct strsection_header*,scalar_t__,int *,struct string_index**,int *,int *,int ) ;

__attribute__((used)) static void FUNC_5(ACTIVATION_CONTEXT* VAR_1, struct strsection_header *VAR_2, const struct entity_array *VAR_3,
    struct string_index **VAR_4, ULONG *VAR_5, ULONG *VAR_6, ULONG VAR_7)
{
    unsigned int VAR_8, VAR_9;

    for (VAR_8 = 0; VAR_8 < VAR_3->num; VAR_8++)
    {
        struct entity *VAR_10 = &VAR_3->base[VAR_8];
        if (VAR_10->kind == VAR_0)
        {
            const struct progids *VAR_11 = &VAR_10->u.comclass.progids;
            struct comclassredirect_data *VAR_12;
            struct guid_index *VAR_13;
            UNICODE_STRING VAR_14;
            GUID VAR_15;

            FUNC_1(&VAR_14, VAR_10->u.comclass.clsid);
            FUNC_0(&VAR_14, &VAR_15);

            VAR_13 = FUNC_2(VAR_1->comserver_section, &VAR_15);
            VAR_12 = FUNC_3(VAR_1, VAR_13);

            if (VAR_10->u.comclass.progid)
                FUNC_4(VAR_2, VAR_10->u.comclass.progid, &VAR_12->alias,
                     VAR_4, VAR_5, VAR_6, VAR_7);

            for (VAR_9 = 0; VAR_9 < VAR_11->num; VAR_9++)
                FUNC_4(VAR_2, VAR_11->progids[VAR_9], &VAR_12->alias,
                     VAR_4, VAR_5, VAR_6, VAR_7);
        }
    }
}
