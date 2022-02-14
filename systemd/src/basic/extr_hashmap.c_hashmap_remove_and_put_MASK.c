
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
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct swap_entries*,int ) ;
 unsigned int FUNC_2 (int *,void const*) ;
 unsigned int FUNC_3 (int *,unsigned int,void const*) ;
 int FUNC_4 (int *,unsigned int,struct swap_entries*,int) ;
 int FUNC_5 (int *,unsigned int) ;

int FUNC_6(Hashmap *VAR_4, const void *VAR_5, const void *VAR_6, void *VAR_7) {
        struct swap_entries VAR_8;
        struct plain_hashmap_entry *VAR_9;
        unsigned VAR_10, VAR_11, VAR_12;

        if (!VAR_4)
                return -VAR_1;

        VAR_10 = FUNC_2(VAR_4, VAR_5);
        VAR_12 = FUNC_3(VAR_4, VAR_10, VAR_5);
        if (VAR_12 == VAR_2)
                return -VAR_1;

        VAR_11 = FUNC_2(VAR_4, VAR_6);
        if (FUNC_3(VAR_4, VAR_11, VAR_6) != VAR_2)
                return -VAR_0;

        FUNC_5(VAR_4, VAR_12);

        VAR_9 = &FUNC_1(&VAR_8, VAR_3)->p;
        VAR_9->b.key = VAR_6;
        VAR_9->value = VAR_7;
        FUNC_0(FUNC_4(VAR_4, VAR_11, &VAR_8, 0) == 1);

        return 0;
}
