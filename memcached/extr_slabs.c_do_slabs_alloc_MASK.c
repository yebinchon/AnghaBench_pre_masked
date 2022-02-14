
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sl_curr; size_t const size; TYPE_1__* slots; } ;
typedef TYPE_2__ slabclass_t ;
struct TYPE_7__ {int it_flags; int refcount; TYPE_1__* next; } ;
typedef TYPE_3__ item ;
struct TYPE_5__ {scalar_t__ prev; } ;


 int VAR_0 ;
 int FUNC_0 (size_t const,unsigned int,size_t const,void*) ;
 int FUNC_1 (size_t const,unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 unsigned int VAR_3 ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static void *FUNC_4(const size_t VAR_5, unsigned int VAR_6,
        unsigned int VAR_7) {
    slabclass_t *VAR_8;
    void *VAR_9 = ((void*)0);
    item *VAR_10 = ((void*)0);

    if (VAR_6 < VAR_1 || VAR_6 > VAR_3) {
        FUNC_1(VAR_5, 0);
        return ((void*)0);
    }
    VAR_8 = &VAR_4[VAR_6];
    FUNC_2(VAR_8->sl_curr == 0 || (((item *)VAR_8->slots)->it_flags & VAR_0));

    FUNC_2(VAR_5 <= VAR_8->size);


    if (VAR_8->sl_curr == 0 && VAR_7 != VAR_2) {
        FUNC_3(VAR_6);
    }

    if (VAR_8->sl_curr != 0) {

        VAR_10 = (item *)VAR_8->slots;
        VAR_8->slots = VAR_10->next;
        if (VAR_10->next) VAR_10->next->prev = 0;


        VAR_10->it_flags &= ~VAR_0;
        VAR_10->refcount = 1;
        VAR_8->sl_curr--;
        VAR_9 = (void *)VAR_10;
    } else {
        VAR_9 = ((void*)0);
    }

    if (VAR_9) {
        FUNC_0(VAR_5, VAR_6, VAR_8->size, VAR_9);
    } else {
        FUNC_1(VAR_5, VAR_6);
    }

    return VAR_9;
}
