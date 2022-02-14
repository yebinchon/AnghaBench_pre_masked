
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ usec_t ;
struct TYPE_6__ {int tv_sec; } ;
struct TYPE_7__ {scalar_t__ usec_since_last_update; TYPE_1__ last_collected_time; } ;
typedef TYPE_2__ RRDSET ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

inline void FUNC_3(RRDSET *VAR_1, usec_t VAR_2) {
    if(FUNC_2(!VAR_1->last_collected_time.tv_sec || !VAR_2 || (FUNC_0(VAR_1, VAR_0)))) {

        FUNC_1(VAR_1, VAR_2);
        return;
    }

    VAR_1->usec_since_last_update = VAR_2;
}
