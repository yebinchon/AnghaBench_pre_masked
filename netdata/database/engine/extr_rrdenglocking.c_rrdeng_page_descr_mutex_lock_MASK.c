
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rrdengine_instance {int dummy; } ;
struct rrdeng_page_descr {unsigned long pg_cache_descr_state; struct page_cache_descr* pg_cache_descr; } ;
struct page_cache_descr {int mutex; struct rrdeng_page_descr* descr; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long) ;
 struct page_cache_descr* FUNC_1 (struct rrdengine_instance*) ;
 int FUNC_2 (struct rrdengine_instance*,struct page_cache_descr*) ;
 unsigned long FUNC_3 (unsigned long*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct rrdengine_instance *VAR_4, struct rrdeng_page_descr *VAR_5)
{
    unsigned long VAR_6, VAR_7, VAR_8, VAR_9;
    struct page_cache_descr *VAR_10 = ((void*)0);
    uint8_t VAR_11;

    VAR_11 = 0;
    while (1) {
        VAR_6 = VAR_5->pg_cache_descr_state;
        VAR_7 = VAR_6 >> VAR_3;

        if (FUNC_4(VAR_11)) {
            FUNC_0(VAR_6 & VAR_2);
            VAR_8 = (1 << VAR_3) | VAR_0;
            VAR_9 = FUNC_3(&VAR_5->pg_cache_descr_state, VAR_6, VAR_8);
            if (VAR_6 == VAR_9) {

                break;
            }
            continue;
        }
        if (VAR_6 & VAR_2) {
            FUNC_0(0 == VAR_7);
            continue;
        }
        if (0 == VAR_6) {


            if (((void*)0) == VAR_10) {
                VAR_10 = FUNC_1(VAR_4);
            }
            VAR_8 = VAR_2;
            VAR_9 = FUNC_3(&VAR_5->pg_cache_descr_state, 0, VAR_8);
            if (0 == VAR_9) {
                VAR_11 = 1;
                VAR_5->pg_cache_descr = VAR_10;
                VAR_10->descr = VAR_5;
                VAR_10 = ((void*)0);

                continue;
            }
            continue;
        }

        FUNC_0(VAR_6 & VAR_0);

        VAR_8 = (VAR_7 + 1) << VAR_3;
        VAR_8 |= VAR_6 & VAR_1;

        VAR_9 = FUNC_3(&VAR_5->pg_cache_descr_state, VAR_6, VAR_8);
        if (VAR_6 == VAR_9) {

            break;
        }

    }

    if (VAR_10) {
        FUNC_2(VAR_4, VAR_10);
    }
    VAR_10 = VAR_5->pg_cache_descr;
    FUNC_5(&VAR_10->mutex);
}
