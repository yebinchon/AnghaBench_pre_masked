
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct swap_entries {int dummy; } ;
struct TYPE_3__ {void const* key; } ;
struct plain_hashmap_entry {void* value; TYPE_1__ b; } ;
struct TYPE_4__ {struct plain_hashmap_entry p; } ;
typedef int Hashmap ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (struct swap_entries*,int ) ;
 unsigned int FUNC_2 (int *,void const*) ;
 unsigned int FUNC_3 (int *,unsigned int,void const*) ;
 int FUNC_4 (int *,unsigned int,struct swap_entries*,int) ;
 struct plain_hashmap_entry* FUNC_5 (int *,unsigned int) ;

int FUNC_6(Hashmap *VAR_3, const void *VAR_4, void *VAR_5) {
        struct swap_entries VAR_6;
        struct plain_hashmap_entry *VAR_7;
        unsigned VAR_8, VAR_9;

        FUNC_0(VAR_3);

        VAR_8 = FUNC_2(VAR_3, VAR_4);
        VAR_9 = FUNC_3(VAR_3, VAR_8, VAR_4);
        if (VAR_9 != VAR_1) {
                VAR_7 = FUNC_5(VAR_3, VAR_9);
                if (VAR_7->value == VAR_5)
                        return 0;
                return -VAR_0;
        }

        VAR_7 = &FUNC_1(&VAR_6, VAR_2)->p;
        VAR_7->b.key = VAR_4;
        VAR_7->value = VAR_5;
        return FUNC_4(VAR_3, VAR_8, &VAR_6, 1);
}
