
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {int it_flags; int time; } ;
typedef TYPE_2__ item ;
struct TYPE_12__ {TYPE_1__* thread; } ;
typedef TYPE_3__ conn ;
struct TYPE_13__ {scalar_t__ lru_segmented; } ;
struct TYPE_10__ {int lru_bump_buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*,int const) ;
 TYPE_4__ VAR_4 ;

void FUNC_3(conn *VAR_5, item *VAR_6, const uint32_t VAR_7) {






    if (VAR_4.lru_segmented) {
        if ((VAR_6->it_flags & VAR_1) == 0) {
            if ((VAR_6->it_flags & VAR_2) == 0) {
                VAR_6->it_flags |= VAR_2;
            } else {
                VAR_6->it_flags |= VAR_1;
                if (FUNC_0(VAR_6) != VAR_0) {
                    VAR_6->time = VAR_3;
                } else if (!FUNC_2(VAR_5->thread->lru_bump_buf, VAR_6, VAR_7)) {

                    VAR_6->it_flags &= ~VAR_1;
                }
            }
        }
    } else {
        VAR_6->it_flags |= VAR_2;
        FUNC_1(VAR_6);
    }
}
