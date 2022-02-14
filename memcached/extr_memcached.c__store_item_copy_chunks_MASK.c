
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ size; scalar_t__ used; int data; struct TYPE_9__* next; } ;
typedef TYPE_1__ item_chunk ;
struct TYPE_10__ {int it_flags; } ;
typedef TYPE_2__ item ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int const) ;
 int FUNC_4 (int,int,int) ;

__attribute__((used)) static int FUNC_5(item *VAR_1, item *VAR_2, const int VAR_3) {
    item_chunk *VAR_4 = (item_chunk *) FUNC_1(VAR_1);

    while (VAR_4->size == VAR_4->used) {
        if (VAR_4->next) {
            VAR_4 = VAR_4->next;
        } else {
            break;
        }
    }

    if (VAR_2->it_flags & VAR_0) {
        int VAR_5 = VAR_3;
        item_chunk *VAR_6 = (item_chunk *) FUNC_1(VAR_2);
        int VAR_7 = 0;



        while (VAR_6 && VAR_4 && VAR_5) {
            FUNC_2(VAR_4->used <= VAR_4->size);
            int VAR_8 = (VAR_4->size - VAR_4->used < VAR_6->used - VAR_7)
                ? VAR_4->size - VAR_4->used : VAR_6->used - VAR_7;
            if (VAR_5 < VAR_8)
                VAR_8 = VAR_5;
            FUNC_4(VAR_4->data + VAR_4->used, VAR_6->data + VAR_7, VAR_8);
            VAR_4->used += VAR_8;
            VAR_7 += VAR_8;
            VAR_5 -= VAR_8;
            FUNC_2(VAR_4->used <= VAR_4->size);
            if (VAR_4->size == VAR_4->used) {
                item_chunk *VAR_9 = FUNC_3(VAR_4, VAR_5);
                if (VAR_9) {
                    VAR_4 = VAR_9;
                } else {
                    return -1;
                }
            }
            FUNC_2(VAR_7 <= VAR_6->used);
            if (VAR_7 == VAR_6->used) {
                VAR_7 = 0;
                VAR_6 = VAR_6->next;
            }
        }

        FUNC_2(VAR_5 == 0);
    } else {
        int VAR_10 = 0;

        while (VAR_3 > VAR_10 && VAR_4) {
            int VAR_11 = (VAR_4->size - VAR_4->used < VAR_3 - VAR_10)
                ? VAR_4->size - VAR_4->used : VAR_3 - VAR_10;

            FUNC_4(VAR_4->data + VAR_4->used, FUNC_0(VAR_2) + VAR_10, VAR_11);
            VAR_10 += VAR_11;
            VAR_4->used += VAR_11;
            FUNC_2(VAR_4->used <= VAR_4->size);
            if (VAR_4->size == VAR_4->used) {
                item_chunk *VAR_12 = FUNC_3(VAR_4, VAR_3 - VAR_10);
                if (VAR_12) {
                    VAR_4 = VAR_12;
                } else {
                    return -1;
                }
            }
        }
        FUNC_2(VAR_3 == VAR_10);
    }
    return 0;
}
