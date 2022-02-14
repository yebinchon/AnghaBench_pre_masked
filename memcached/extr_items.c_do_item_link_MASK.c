
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int it_flags; int time; int nbytes; int nkey; } ;
typedef TYPE_1__ item ;
struct TYPE_16__ {scalar_t__ use_cas; } ;
struct TYPE_15__ {int total_items; } ;
struct TYPE_14__ {int curr_items; int curr_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,int const) ;
 int VAR_2 ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;

int FUNC_12(item *VAR_6, const uint32_t VAR_7) {
    FUNC_3(FUNC_0(VAR_6), VAR_6->nkey, VAR_6->nbytes);
    FUNC_6((VAR_6->it_flags & (VAR_0|VAR_1)) == 0);
    VAR_6->it_flags |= VAR_0;
    VAR_6->time = VAR_2;

    FUNC_4();
    VAR_5.curr_bytes += FUNC_1(VAR_6);
    VAR_5.curr_items += 1;
    VAR_4.total_items += 1;
    FUNC_5();


    FUNC_2(VAR_6, (VAR_3.use_cas) ? FUNC_8() : 0);
    FUNC_7(VAR_6, VAR_7);
    FUNC_9(VAR_6);
    FUNC_11(VAR_6);
    FUNC_10(VAR_6);

    return 1;
}
