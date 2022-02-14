
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sl_curr; TYPE_2__* slots; } ;
typedef TYPE_1__ slabclass_t ;
struct TYPE_6__ {int it_flags; unsigned int slabs_clsid; struct TYPE_6__* prev; struct TYPE_6__* next; } ;
typedef TYPE_2__ item ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t const,unsigned int,void*) ;
 unsigned int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,size_t const) ;
 unsigned int VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_3(void *VAR_5, const size_t VAR_6, unsigned int VAR_7) {
    slabclass_t *VAR_8;
    item *VAR_9;

    FUNC_1(VAR_7 >= VAR_2 && VAR_7 <= VAR_3);
    if (VAR_7 < VAR_2 || VAR_7 > VAR_3)
        return;

    FUNC_0(VAR_6, VAR_7, VAR_5);
    VAR_8 = &VAR_4[VAR_7];

    VAR_9 = (item *)VAR_5;
    if ((VAR_9->it_flags & VAR_0) == 0) {
        VAR_9->it_flags = VAR_1;
        VAR_9->slabs_clsid = VAR_7;
        VAR_9->prev = 0;
        VAR_9->next = VAR_8->slots;
        if (VAR_9->next) VAR_9->next->prev = VAR_9;
        VAR_8->slots = VAR_9;

        VAR_8->sl_curr++;
    } else {
        FUNC_2(VAR_9, VAR_6);
    }
    return;
}
