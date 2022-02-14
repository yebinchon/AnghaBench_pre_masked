
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifacepsredirect_data {int dummy; } ;
struct guid_index {int dummy; } ;
struct entity_array {unsigned int num; struct entity* base; } ;
struct TYPE_3__ {scalar_t__ name; } ;
struct TYPE_4__ {TYPE_1__ ifaceps; } ;
struct entity {scalar_t__ kind; TYPE_2__ u; } ;
typedef int WCHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(const struct entity_array *VAR_1, unsigned int *VAR_2, unsigned int *VAR_3)
{
    unsigned int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1->num; VAR_4++)
    {
        struct entity *VAR_5 = &VAR_1->base[VAR_4];
        if (VAR_5->kind == VAR_0)
        {
            *VAR_3 += sizeof(struct guid_index) + sizeof(struct ifacepsredirect_data);
            if (VAR_5->u.ifaceps.name)
                *VAR_3 += FUNC_0((FUNC_1(VAR_5->u.ifaceps.name)+1)*sizeof(WCHAR));
            *VAR_2 += 1;
        }
    }
}
