
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct swap_entries {int dummy; } ;
struct TYPE_4__ {void const* key; } ;
struct plain_hashmap_entry {void* value; TYPE_1__ b; } ;
struct TYPE_6__ {void* key; } ;
struct TYPE_5__ {struct plain_hashmap_entry p; } ;
typedef int Hashmap ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_3__* FUNC_3 (int ,unsigned int) ;
 TYPE_2__* FUNC_4 (struct swap_entries*,int ) ;
 unsigned int FUNC_5 (int *,void const*) ;
 unsigned int FUNC_6 (int *,unsigned int,void const*) ;
 int FUNC_7 (int *,unsigned int,struct swap_entries*,int) ;
 unsigned int FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (int *,unsigned int) ;

int FUNC_10(Hashmap *VAR_3, const void *VAR_4, const void *VAR_5, void *VAR_6) {
        struct swap_entries VAR_7;
        struct plain_hashmap_entry *VAR_8;
        unsigned VAR_9, VAR_10, VAR_11, VAR_12;

        if (!VAR_3)
                return -VAR_0;

        VAR_9 = FUNC_5(VAR_3, VAR_4);
        VAR_11 = FUNC_6(VAR_3, VAR_9, VAR_4);
        if (VAR_11 == VAR_1)
                return -VAR_0;

        VAR_4 = FUNC_3(FUNC_0(VAR_3), VAR_11)->key;

        VAR_10 = FUNC_5(VAR_3, VAR_5);
        VAR_12 = FUNC_6(VAR_3, VAR_10, VAR_5);
        if (VAR_12 != VAR_1)
                if (VAR_11 != VAR_12) {
                        FUNC_9(VAR_3, VAR_12);

                        if (VAR_4 != FUNC_3(FUNC_0(VAR_3), VAR_11)->key)
                                VAR_11 = FUNC_8(FUNC_0(VAR_3), VAR_11);
                        FUNC_1(VAR_4 == FUNC_3(FUNC_0(VAR_3), VAR_11)->key);
                }

        FUNC_9(VAR_3, VAR_11);

        VAR_8 = &FUNC_4(&VAR_7, VAR_2)->p;
        VAR_8->b.key = VAR_5;
        VAR_8->value = VAR_6;
        FUNC_2(FUNC_7(VAR_3, VAR_10, &VAR_7, 0) == 1);

        return 0;
}
