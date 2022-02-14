
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int it_flags; int nkey; int nbytes; } ;
typedef TYPE_1__ item ;
struct TYPE_10__ {int curr_items; int curr_bytes; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int const) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_2__ VAR_1 ;

void FUNC_9(item *VAR_2, const uint32_t VAR_3) {
    FUNC_2(FUNC_0(VAR_2), VAR_2->nkey, VAR_2->nbytes);
    if ((VAR_2->it_flags & VAR_0) != 0) {
        VAR_2->it_flags &= ~VAR_0;
        FUNC_3();
        VAR_1.curr_bytes -= FUNC_1(VAR_2);
        VAR_1.curr_items -= 1;
        FUNC_4();
        FUNC_8(VAR_2);
        FUNC_5(FUNC_0(VAR_2), VAR_2->nkey, VAR_3);
        FUNC_7(VAR_2);
        FUNC_6(VAR_2);
    }
}
