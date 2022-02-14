
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifacepsredirect_data {int size; int name_len; int name_offset; int base; int tlbid; int nummethods; int iid; int mask; } ;
struct guidsection_header {int dummy; } ;
struct guid_index {int data_offset; int data_len; int rosterindex; int guid; } ;
struct entity_array {unsigned int num; struct entity* base; } ;
struct TYPE_3__ {scalar_t__ name; int base; int tlib; int nummethods; int ps32; int mask; int iid; } ;
struct TYPE_4__ {TYPE_1__ ifaceps; } ;
struct entity {scalar_t__ kind; TYPE_2__ u; } ;
typedef scalar_t__ WCHAR ;
typedef int UNICODE_STRING ;
typedef int ULONG ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__*,scalar_t__,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct guidsection_header *VAR_1, struct entity_array *VAR_2,
    struct guid_index **VAR_3, ULONG *VAR_4, ULONG VAR_5)
{
    unsigned int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_2->num; VAR_6++)
    {
        struct entity *VAR_7 = &VAR_2->base[VAR_6];
        if (VAR_7->kind == VAR_0)
        {
            struct ifacepsredirect_data *VAR_8 = (struct ifacepsredirect_data*)((BYTE*)VAR_1 + *VAR_4);
            UNICODE_STRING VAR_9;
            ULONG VAR_10;

            if (VAR_7->u.ifaceps.name)
                VAR_10 = FUNC_5(VAR_7->u.ifaceps.name)*sizeof(WCHAR);
            else
                VAR_10 = 0;


            FUNC_1(&VAR_9, VAR_7->u.ifaceps.iid);
            FUNC_0(&VAR_9, &(*VAR_3)->guid);
            (*VAR_3)->data_offset = *VAR_4;
            (*VAR_3)->data_len = sizeof(*VAR_8) + VAR_10 ? FUNC_2(VAR_10 + sizeof(WCHAR)) : 0;
            (*VAR_3)->rosterindex = VAR_5;


            VAR_8->size = sizeof(*VAR_8);
            VAR_8->mask = VAR_7->u.ifaceps.mask;



            if (VAR_7->u.ifaceps.ps32)
            {
                FUNC_1(&VAR_9, VAR_7->u.ifaceps.ps32);
                FUNC_0(&VAR_9, &VAR_8->iid);
            }
            else
                VAR_8->iid = (*VAR_3)->guid;

            VAR_8->nummethods = VAR_7->u.ifaceps.nummethods;

            if (VAR_7->u.ifaceps.tlib)
            {
                FUNC_1(&VAR_9, VAR_7->u.ifaceps.tlib);
                FUNC_0(&VAR_9, &VAR_8->tlbid);
            }
            else
                FUNC_4(&VAR_8->tlbid, 0, sizeof(VAR_8->tlbid));

            if (VAR_7->u.ifaceps.base)
            {
                FUNC_1(&VAR_9, VAR_7->u.ifaceps.base);
                FUNC_0(&VAR_9, &VAR_8->base);
            }
            else
                FUNC_4(&VAR_8->base, 0, sizeof(VAR_8->base));

            VAR_8->name_len = VAR_10;
            VAR_8->name_offset = VAR_8->name_len ? sizeof(*VAR_8) : 0;


            if (VAR_8->name_len)
            {
                WCHAR *VAR_11 = (WCHAR*)((BYTE*)VAR_8 + VAR_8->name_offset);
                FUNC_3(VAR_11, VAR_7->u.ifaceps.name, VAR_8->name_len);
                VAR_11[VAR_8->name_len/sizeof(WCHAR)] = 0;
            }


            (*VAR_3) += 1;
            *VAR_4 += sizeof(*VAR_8);
            if (VAR_8->name_len)
                *VAR_4 += FUNC_2(VAR_8->name_len + sizeof(WCHAR));
        }
    }
}
