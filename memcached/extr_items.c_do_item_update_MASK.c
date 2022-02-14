
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int it_flags; scalar_t__ time; int slabs_clsid; int nbytes; int nkey; } ;
typedef TYPE_1__ item ;
struct TYPE_11__ {scalar_t__ lru_segmented; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_2__ VAR_7 ;

void FUNC_8(item *VAR_8) {
    FUNC_3(FUNC_1(VAR_8), VAR_8->nkey, VAR_8->nbytes);


    if (VAR_7.lru_segmented) {
        FUNC_4((VAR_8->it_flags & VAR_3) == 0);
        if ((VAR_8->it_flags & VAR_2) != 0) {
            if (FUNC_2(VAR_8) == VAR_0 && (VAR_8->it_flags & VAR_1)) {
                VAR_8->time = VAR_6;
                FUNC_7(VAR_8);
                VAR_8->slabs_clsid = FUNC_0(VAR_8);
                VAR_8->slabs_clsid |= VAR_5;
                VAR_8->it_flags &= ~VAR_1;
                FUNC_6(VAR_8);
            } else {
                VAR_8->time = VAR_6;
            }
        }
    } else if (VAR_8->time < VAR_6 - VAR_4) {
        FUNC_4((VAR_8->it_flags & VAR_3) == 0);

        if ((VAR_8->it_flags & VAR_2) != 0) {
            VAR_8->time = VAR_6;
            FUNC_7(VAR_8);
            FUNC_5(VAR_8);
        }
    }
}
