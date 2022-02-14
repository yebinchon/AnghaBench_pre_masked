
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct rrdeng_page_descr {int dummy; } ;
struct pg_cache_page_index {int JudyL_array; } ;
typedef scalar_t__ Word_t ;
typedef struct rrdeng_page_descr* Pvoid_t ;


 struct rrdeng_page_descr** FUNC_0 (int ,scalar_t__*,int ) ;
 struct rrdeng_page_descr** FUNC_1 (int ,scalar_t__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct rrdeng_page_descr*,int,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline struct rrdeng_page_descr *
        FUNC_4(struct pg_cache_page_index *VAR_2, usec_t VAR_3, usec_t VAR_4)
{
    struct rrdeng_page_descr *VAR_5 = ((void*)0);
    Pvoid_t *VAR_6;
    Word_t VAR_7;

    VAR_7 = (Word_t)(VAR_3 / VAR_1);
    VAR_6 = FUNC_1(VAR_2->JudyL_array, &VAR_7, VAR_0);
    if (FUNC_3(((void*)0) != VAR_6)) {
        VAR_5 = *VAR_6;
        if (FUNC_2(VAR_5, VAR_3, VAR_4)) {
            return VAR_5;
        }
    }

    VAR_7 = (Word_t)(VAR_3 / VAR_1);
    VAR_6 = FUNC_0(VAR_2->JudyL_array, &VAR_7, VAR_0);
    if (FUNC_3(((void*)0) != VAR_6)) {
        VAR_5 = *VAR_6;
        if (FUNC_2(VAR_5, VAR_3, VAR_4)) {
            return VAR_5;
        }
    }

    return ((void*)0);
}
