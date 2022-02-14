
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rrdengine_instance {int dummy; } ;
struct rrdeng_page_descr {unsigned long pg_cache_descr_state; struct page_cache_descr* pg_cache_descr; } ;
struct page_cache_descr {int refcnt; int flags; int mutex; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rrdengine_instance*,struct page_cache_descr*) ;
 unsigned long FUNC_2 (unsigned long*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct rrdengine_instance *VAR_5, struct rrdeng_page_descr *VAR_6)
{
    unsigned long VAR_7, VAR_8, VAR_9, VAR_10;
    struct page_cache_descr *VAR_11;
    uint8_t VAR_12;

    FUNC_4(&VAR_6->pg_cache_descr->mutex);

    VAR_12 = 0;
    while (1) {
        VAR_7 = VAR_6->pg_cache_descr_state;
        VAR_10 = VAR_7 >> VAR_4;

        if (FUNC_3(VAR_12)) {
            FUNC_0(0 == VAR_10);

            VAR_9 = FUNC_2(&VAR_6->pg_cache_descr_state, VAR_7, 0);
            if (VAR_7 == VAR_9) {

                break;
            }
            continue;
        }
        if (VAR_7 & VAR_3) {
            FUNC_0(0 == VAR_10);
            continue;
        }
        FUNC_0(VAR_7 & VAR_0);
        VAR_11 = VAR_6->pg_cache_descr;

        if ((VAR_7 & VAR_1) && (1 == VAR_10) &&
            !VAR_11->flags && !VAR_11->refcnt) {
            VAR_8 = VAR_3;
            VAR_9 = FUNC_2(&VAR_6->pg_cache_descr_state, VAR_7, VAR_8);
            if (VAR_7 == VAR_9) {
                VAR_12 = 1;
                FUNC_1(VAR_5, VAR_11);

                continue;
            }
            continue;
        }
        FUNC_0(VAR_10 > 0);
        VAR_8 = (VAR_10 - 1) << VAR_4;
        VAR_8 |= VAR_7 & VAR_2;

        VAR_9 = FUNC_2(&VAR_6->pg_cache_descr_state, VAR_7, VAR_8);
        if (VAR_7 == VAR_9) {

            break;
        }

    }

}
