
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct guid_index {int dummy; } ;
struct entity_array {unsigned int num; struct entity* base; } ;
struct TYPE_3__ {scalar_t__ progid; scalar_t__ version; scalar_t__ name; } ;
struct TYPE_4__ {TYPE_1__ comclass; } ;
struct entity {scalar_t__ kind; TYPE_2__ u; } ;
struct dll_redirect {scalar_t__ name; } ;
struct comclassredirect_data {int dummy; } ;
struct clrclass_data {int dummy; } ;
typedef int mscoreeW ;
typedef int mscoree2W ;
typedef int WCHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(const struct entity_array *VAR_1, const struct dll_redirect *VAR_2,
    unsigned int *VAR_3, unsigned int *VAR_4, unsigned int *VAR_5)
{
    unsigned int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_1->num; VAR_6++)
    {
        struct entity *VAR_7 = &VAR_1->base[VAR_6];
        if (VAR_7->kind == VAR_0)
        {

            *VAR_4 += 2*sizeof(struct guid_index);


            *VAR_4 += sizeof(struct comclassredirect_data);


            if (VAR_7->u.comclass.name)
            {
                unsigned int VAR_8;


                VAR_8 = FUNC_1(VAR_7->u.comclass.name)+1;
                if (VAR_7->u.comclass.progid)
                    VAR_8 += FUNC_1(VAR_7->u.comclass.progid)+1;
                if (VAR_7->u.comclass.version)
                    VAR_8 += FUNC_1(VAR_7->u.comclass.version)+1;

                *VAR_4 += sizeof(struct clrclass_data);
                *VAR_4 += FUNC_0(VAR_8*sizeof(WCHAR));


                *VAR_5 += sizeof(mscoreeW) + sizeof(mscoree2W);
            }
            else
            {

                if (VAR_7->u.comclass.progid)
                    *VAR_4 += FUNC_0((FUNC_1(VAR_7->u.comclass.progid)+1)*sizeof(WCHAR));

                *VAR_5 += (FUNC_1(VAR_2->name)+1)*sizeof(WCHAR);
            }

            *VAR_3 += 1;
        }
    }
}
