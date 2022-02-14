
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


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct swap_entries*,int ) ;
 unsigned int FUNC_2 (int *,void const*) ;
 unsigned int FUNC_3 (int *,unsigned int,void const*) ;
 int FUNC_4 (int *,unsigned int,struct swap_entries*,int) ;
 int FUNC_5 (int *,unsigned int) ;

int FUNC_6(Set *VAR_4, const void *VAR_5, const void *VAR_6) {
        struct swap_entries VAR_7;
        struct hashmap_base_entry *VAR_8;
        unsigned VAR_9, VAR_10, VAR_11;

        if (!VAR_4)
                return -VAR_1;

        VAR_9 = FUNC_2(VAR_4, VAR_5);
        VAR_11 = FUNC_3(VAR_4, VAR_9, VAR_5);
        if (VAR_11 == VAR_2)
                return -VAR_1;

        VAR_10 = FUNC_2(VAR_4, VAR_6);
        if (FUNC_3(VAR_4, VAR_10, VAR_6) != VAR_2)
                return -VAR_0;

        FUNC_5(VAR_4, VAR_11);

        VAR_8 = &FUNC_1(&VAR_7, VAR_3)->p.b;
        VAR_8->key = VAR_6;
        FUNC_0(FUNC_4(VAR_4, VAR_10, &VAR_7, 0) == 1);

        return 0;
}
