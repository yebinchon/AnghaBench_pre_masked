
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tv_sec; int tv_usec; } ;
struct TYPE_6__ {int update_every; TYPE_1__ last_collected_time; } ;
typedef TYPE_2__ RRDSET ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(RRDSET *VAR_1) {
    VAR_1->last_collected_time.tv_sec -= VAR_1->last_collected_time.tv_sec % VAR_1->update_every;

    if(FUNC_1(FUNC_0(VAR_1, VAR_0)))
        VAR_1->last_collected_time.tv_usec = 0;
    else
        VAR_1->last_collected_time.tv_usec = 500000;
}
