
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct swap_entries {int dummy; } ;
struct TYPE_15__ {int key; } ;
struct TYPE_16__ {TYPE_1__ b; } ;
struct ordered_hashmap_entry {scalar_t__ iterate_next; scalar_t__ iterate_previous; TYPE_2__ p; } ;
struct TYPE_17__ {int max_entries; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_3__ debug; } ;
struct TYPE_18__ {scalar_t__ iterate_list_tail; scalar_t__ iterate_list_head; } ;
typedef TYPE_4__ OrderedHashmap ;
typedef TYPE_5__ HashmapBase ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*) ;
 struct ordered_hashmap_entry* FUNC_4 (struct swap_entries*,void*) ;
 unsigned int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_5__*,unsigned int,struct swap_entries*) ;
 scalar_t__ FUNC_7 (TYPE_5__*) ;
 scalar_t__ FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 struct ordered_hashmap_entry* FUNC_10 (TYPE_4__*,scalar_t__) ;
 int FUNC_11 (TYPE_5__*,int) ;

__attribute__((used)) static int FUNC_12(HashmapBase *VAR_3, unsigned VAR_4,
                                   struct swap_entries *VAR_5, bool VAR_6) {
        struct ordered_hashmap_entry *VAR_7;
        int VAR_8;

        FUNC_1(VAR_4 < FUNC_7(VAR_3));

        VAR_7 = FUNC_4(VAR_5, VAR_2);

        if (VAR_6) {
                VAR_8 = FUNC_11(VAR_3, 1);
                if (VAR_8 < 0)
                        return VAR_8;
                if (VAR_8 > 0)
                        VAR_4 = FUNC_5(VAR_3, VAR_7->p.b.key);
        }
        FUNC_1(FUNC_8(VAR_3) < FUNC_7(VAR_3));

        if (VAR_3->type == VAR_0) {
                OrderedHashmap *VAR_9 = (OrderedHashmap*) VAR_3;

                VAR_7->iterate_next = VAR_1;
                VAR_7->iterate_previous = VAR_9->iterate_list_tail;

                if (VAR_9->iterate_list_tail != VAR_1) {
                        struct ordered_hashmap_entry *VAR_10;

                        VAR_10 = FUNC_10(VAR_9, VAR_9->iterate_list_tail);
                        FUNC_1(VAR_10->iterate_next == VAR_1);
                        VAR_10->iterate_next = VAR_2;
                }

                VAR_9->iterate_list_tail = VAR_2;
                if (VAR_9->iterate_list_head == VAR_1)
                        VAR_9->iterate_list_head = VAR_2;
        }

        FUNC_2(FUNC_6(VAR_3, VAR_4, VAR_5) == 0);

        FUNC_9(VAR_3);




        FUNC_3(VAR_3);

        return 1;
}
