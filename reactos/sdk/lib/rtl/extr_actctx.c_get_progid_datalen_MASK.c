
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct string_index {int dummy; } ;
struct progidredirect_data {int dummy; } ;
struct entity_array {unsigned int num; struct entity* base; } ;
struct TYPE_4__ {unsigned int num; scalar_t__* progids; } ;
struct TYPE_5__ {TYPE_1__ progids; scalar_t__ progid; } ;
struct TYPE_6__ {TYPE_2__ comclass; } ;
struct entity {scalar_t__ kind; TYPE_3__ u; } ;
typedef int WCHAR ;
typedef int GUID ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct entity_array *VAR_1, unsigned int *VAR_2, unsigned int *VAR_3)
{
    unsigned int VAR_4, VAR_5, VAR_6;

    VAR_6 = sizeof(struct progidredirect_data) + sizeof(struct string_index) + sizeof(GUID);
    for (VAR_4 = 0; VAR_4 < VAR_1->num; VAR_4++)
    {
        struct entity *VAR_7 = &VAR_1->base[VAR_4];
        if (VAR_7->kind == VAR_0)
        {
            if (VAR_7->u.comclass.progid)
            {
                *VAR_3 += VAR_6 + FUNC_0((FUNC_1(VAR_7->u.comclass.progid)+1)*sizeof(WCHAR));
                *VAR_2 += 1;
            }

            for (VAR_5 = 0; VAR_5 < VAR_7->u.comclass.progids.num; VAR_5++)
                *VAR_3 += FUNC_0((FUNC_1(VAR_7->u.comclass.progids.progids[VAR_5])+1)*sizeof(WCHAR));

            *VAR_3 += VAR_6*VAR_7->u.comclass.progids.num;
            *VAR_2 += VAR_7->u.comclass.progids.num;
        }
    }
}
