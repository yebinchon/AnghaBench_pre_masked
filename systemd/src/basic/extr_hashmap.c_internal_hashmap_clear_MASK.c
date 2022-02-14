
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int (* free_func_t ) (void*) ;
struct TYPE_11__ {int storage; } ;
struct TYPE_13__ {int has_indirect; scalar_t__ type; scalar_t__ n_direct_entries; TYPE_2__ indirect; TYPE_1__* hash_ops; } ;
struct TYPE_12__ {int iterate_list_tail; int iterate_list_head; } ;
struct TYPE_10__ {scalar_t__ free_value; scalar_t__ free_key; } ;
typedef TYPE_3__ OrderedHashmap ;
typedef TYPE_4__ HashmapBase ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (TYPE_4__*,int,void**) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;

void FUNC_5(HashmapBase *VAR_2, free_func_t VAR_3, free_func_t VAR_4) {
        free_func_t VAR_5, VAR_6;
        if (!VAR_2)
                return;

        VAR_5 = VAR_2->hash_ops->free_key ?: VAR_3;
        VAR_6 = VAR_2->hash_ops->free_value ?: VAR_4;

        if (VAR_5 || VAR_6) {





                while (FUNC_3(VAR_2) > 0) {
                        void *VAR_7 = ((void*)0);
                        void *VAR_8;

                        VAR_8 = FUNC_2(VAR_2, 1, &VAR_7);

                        if (VAR_5)
                                VAR_5(VAR_7);

                        if (VAR_6)
                                VAR_6(VAR_8);
                }
        }

        if (VAR_2->has_indirect) {
                FUNC_1(VAR_2->indirect.storage);
                VAR_2->has_indirect = 0;
        }

        VAR_2->n_direct_entries = 0;
        FUNC_4(VAR_2);

        if (VAR_2->type == VAR_0) {
                OrderedHashmap *VAR_9 = (OrderedHashmap*) VAR_2;
                VAR_9->iterate_list_head = VAR_9->iterate_list_tail = VAR_1;
        }

        FUNC_0(VAR_2);
}
