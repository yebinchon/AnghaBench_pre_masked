
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct ordered_hashmap_entry {scalar_t__ iterate_next; scalar_t__ iterate_previous; } ;
typedef scalar_t__ dib_raw_t ;
struct TYPE_14__ {unsigned int last_rem_idx; int rem_count; } ;
struct TYPE_16__ {scalar_t__ type; TYPE_1__ debug; } ;
struct TYPE_15__ {scalar_t__ iterate_list_tail; unsigned int iterate_list_head; } ;
typedef TYPE_2__ OrderedHashmap ;
typedef TYPE_3__ HashmapBase ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 unsigned int FUNC_3 (TYPE_3__*,unsigned int,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,unsigned int) ;
 int FUNC_5 (TYPE_3__*,int *,unsigned int,unsigned int) ;
 int FUNC_6 (TYPE_3__*,unsigned int,unsigned int) ;
 scalar_t__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 unsigned int FUNC_9 (TYPE_3__*,unsigned int) ;
 struct ordered_hashmap_entry* FUNC_10 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static void FUNC_11(HashmapBase *VAR_3, unsigned VAR_4) {
        unsigned VAR_5, VAR_6, VAR_7, VAR_8;
        dib_raw_t VAR_9, *VAR_10;

        VAR_10 = FUNC_7(VAR_3);
        FUNC_1(VAR_10[VAR_4] != VAR_0);






        VAR_5 = VAR_4;

        for (VAR_6 = FUNC_9(VAR_3, VAR_5); ; VAR_6 = FUNC_9(VAR_3, VAR_6)) {
                VAR_9 = VAR_10[VAR_6];
                if (FUNC_0(VAR_9, 0, VAR_0))
                        break;




                FUNC_1(VAR_5 != VAR_6);
        }

        if (VAR_3->type == VAR_1) {
                OrderedHashmap *VAR_11 = (OrderedHashmap*) VAR_3;
                struct ordered_hashmap_entry *VAR_12 = FUNC_10(VAR_11, VAR_4);

                if (VAR_12->iterate_next != VAR_2)
                        FUNC_10(VAR_11, VAR_12->iterate_next)->iterate_previous = VAR_12->iterate_previous;
                else
                        VAR_11->iterate_list_tail = VAR_12->iterate_previous;

                if (VAR_12->iterate_previous != VAR_2)
                        FUNC_10(VAR_11, VAR_12->iterate_previous)->iterate_next = VAR_12->iterate_next;
                else
                        VAR_11->iterate_list_head = VAR_12->iterate_next;
        }


        for (VAR_7 = VAR_5, VAR_5 = FUNC_9(VAR_3, VAR_5); VAR_5 != VAR_6;
             VAR_7 = VAR_5, VAR_5 = FUNC_9(VAR_3, VAR_5)) {
                VAR_8 = FUNC_3(VAR_3, VAR_5, VAR_10[VAR_5]);
                FUNC_1(VAR_8 != 0);
                FUNC_5(VAR_3, ((void*)0), VAR_5, VAR_7);
                FUNC_6(VAR_3, VAR_7, VAR_8 - 1);
        }

        FUNC_4(VAR_3, VAR_7);
        FUNC_8(VAR_3);
        FUNC_2(VAR_3);
}
