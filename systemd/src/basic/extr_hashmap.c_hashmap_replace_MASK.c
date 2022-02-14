
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct swap_entries {int dummy; } ;
struct TYPE_16__ {void const* key; } ;
struct plain_hashmap_entry {void* value; TYPE_3__ b; } ;
struct TYPE_14__ {unsigned int last_rem_idx; int rem_count; int put_count; } ;
struct TYPE_15__ {TYPE_1__ debug; } ;
struct TYPE_17__ {TYPE_2__ b; } ;
struct TYPE_13__ {struct plain_hashmap_entry p; } ;
typedef TYPE_4__ Hashmap ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_11__* FUNC_1 (struct swap_entries*,int ) ;
 unsigned int FUNC_2 (TYPE_4__*,void const*) ;
 unsigned int FUNC_3 (TYPE_4__*,unsigned int,void const*) ;
 int FUNC_4 (TYPE_4__*,unsigned int,struct swap_entries*,int) ;
 int FUNC_5 (TYPE_4__*) ;
 struct plain_hashmap_entry* FUNC_6 (TYPE_4__*,unsigned int) ;

int FUNC_7(Hashmap *VAR_2, const void *VAR_3, void *VAR_4) {
        struct swap_entries VAR_5;
        struct plain_hashmap_entry *VAR_6;
        unsigned VAR_7, VAR_8;

        FUNC_0(VAR_2);

        VAR_7 = FUNC_2(VAR_2, VAR_3);
        VAR_8 = FUNC_3(VAR_2, VAR_7, VAR_3);
        if (VAR_8 != VAR_0) {
                VAR_6 = FUNC_6(VAR_2, VAR_8);
                VAR_6->b.key = VAR_3;
                VAR_6->value = VAR_4;
                FUNC_5(VAR_2);

                return 0;
        }

        VAR_6 = &FUNC_1(&VAR_5, VAR_1)->p;
        VAR_6->b.key = VAR_3;
        VAR_6->value = VAR_4;
        return FUNC_4(VAR_2, VAR_7, &VAR_5, 1);
}
