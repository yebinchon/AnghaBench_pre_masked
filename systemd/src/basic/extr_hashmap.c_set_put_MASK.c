
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct swap_entries {int dummy; } ;
struct hashmap_base_entry {void const* key; } ;
struct TYPE_3__ {struct hashmap_base_entry b; } ;
struct TYPE_4__ {TYPE_1__ p; } ;
typedef int Set ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (struct swap_entries*,int ) ;
 unsigned int FUNC_2 (int *,void const*) ;
 unsigned int FUNC_3 (int *,unsigned int,void const*) ;
 int FUNC_4 (int *,unsigned int,struct swap_entries*,int) ;

int FUNC_5(Set *VAR_2, const void *VAR_3) {
        struct swap_entries VAR_4;
        struct hashmap_base_entry *VAR_5;
        unsigned VAR_6, VAR_7;

        FUNC_0(VAR_2);

        VAR_6 = FUNC_2(VAR_2, VAR_3);
        VAR_7 = FUNC_3(VAR_2, VAR_6, VAR_3);
        if (VAR_7 != VAR_0)
                return 0;

        VAR_5 = &FUNC_1(&VAR_4, VAR_1)->p.b;
        VAR_5->key = VAR_3;
        return FUNC_4(VAR_2, VAR_6, &VAR_4, 1);
}
