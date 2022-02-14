
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rrdengine_instance {int dummy; } ;
struct rrdeng_page_descr {unsigned long pg_cache_descr_state; struct page_cache_descr* pg_cache_descr; } ;
struct page_cache_descr {int refcnt; int flags; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rrdengine_instance*,struct page_cache_descr*) ;
 unsigned long FUNC_2 (unsigned long*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(struct rrdengine_instance *VAR_4, struct rrdeng_page_descr *VAR_5)
{
    unsigned long VAR_6, VAR_7, VAR_8, VAR_9;
    struct page_cache_descr *VAR_10;
    uint8_t VAR_11, VAR_12, VAR_13;

    VAR_11 = 0;
    VAR_12 = 0;
    VAR_13 = 0;
    while (1) {
        VAR_6 = VAR_5->pg_cache_descr_state;
        VAR_9 = VAR_6 >> VAR_3;

        if (FUNC_3(VAR_11)) {
            FUNC_0(0 == VAR_9);

            VAR_13 = 1;
            VAR_11 = 0;

            if (!VAR_10->flags && !VAR_10->refcnt) {
                FUNC_1(VAR_4, VAR_10);
                VAR_12 = 1;

                continue;
            }
            continue;
        }
        if (FUNC_3(VAR_13)) {
            FUNC_0(0 == VAR_9);

            if (VAR_12) {

                VAR_7 = 0;
            } else {
                VAR_7 = VAR_6 | VAR_1;
                VAR_7 &= ~VAR_2;
            }
            VAR_8 = FUNC_2(&VAR_5->pg_cache_descr_state, VAR_6, VAR_7);
            if (VAR_6 == VAR_8) {

                return;
            }
            continue;
        }
        if (!(VAR_6 & VAR_0)) {

            return;
        }
        if (VAR_6 & VAR_2) {
            FUNC_0(0 == VAR_9);
            continue;
        }
        VAR_10 = VAR_5->pg_cache_descr;

        if (0 == VAR_9) {
            VAR_7 = VAR_6 | VAR_2;
            VAR_8 = FUNC_2(&VAR_5->pg_cache_descr_state, VAR_6, VAR_7);
            if (VAR_6 == VAR_8) {
                VAR_11 = 1;

                continue;
            }
            continue;
        }
        if (VAR_6 & VAR_1) {

            return;
        }

        VAR_7 = VAR_6 | VAR_1;

        VAR_8 = FUNC_2(&VAR_5->pg_cache_descr_state, VAR_6, VAR_7);
        if (VAR_6 == VAR_8) {

            return;
        }

    }
}
