
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct swap_entries {int dummy; } ;
struct ordered_hashmap_entry {scalar_t__ iterate_next; unsigned int iterate_previous; } ;
struct hashmap_base_entry {int dummy; } ;
struct TYPE_8__ {int entry_size; } ;
struct TYPE_7__ {size_t type; } ;
struct TYPE_6__ {unsigned int iterate_list_head; unsigned int iterate_list_tail; } ;
typedef TYPE_1__ OrderedHashmap ;
typedef TYPE_2__ HashmapBase ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 struct hashmap_base_entry* FUNC_1 (TYPE_2__*,struct swap_entries*,unsigned int) ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (struct hashmap_base_entry*,struct hashmap_base_entry*,int ) ;

__attribute__((used)) static void FUNC_3(HashmapBase *VAR_3, struct swap_entries *VAR_4,
                              unsigned VAR_5, unsigned VAR_6) {
        struct hashmap_base_entry *VAR_7, *VAR_8;

        FUNC_0(VAR_5 != VAR_6);

        VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5);
        VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_6);

        FUNC_2(VAR_8, VAR_7, VAR_2[VAR_3->type].entry_size);

        if (VAR_3->type == VAR_0) {
                OrderedHashmap *VAR_9 = (OrderedHashmap*) VAR_3;
                struct ordered_hashmap_entry *VAR_10, *VAR_11;

                VAR_11 = (struct ordered_hashmap_entry*) VAR_8;

                if (VAR_11->iterate_next != VAR_1) {
                        VAR_10 = (struct ordered_hashmap_entry*)
                             FUNC_1(VAR_3, VAR_4, VAR_11->iterate_next);
                        VAR_10->iterate_previous = VAR_6;
                }

                if (VAR_11->iterate_previous != VAR_1) {
                        VAR_10 = (struct ordered_hashmap_entry*)
                             FUNC_1(VAR_3, VAR_4, VAR_11->iterate_previous);
                        VAR_10->iterate_next = VAR_6;
                }

                if (VAR_9->iterate_list_head == VAR_5)
                        VAR_9->iterate_list_head = VAR_6;
                if (VAR_9->iterate_list_tail == VAR_5)
                        VAR_9->iterate_list_tail = VAR_6;
        }
}
