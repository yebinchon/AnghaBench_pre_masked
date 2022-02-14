
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_5__ {int update_every; TYPE_1__ last_updated; } ;
typedef TYPE_2__ RRDSET ;



__attribute__((used)) static inline void FUNC_0(RRDSET *VAR_0) {
    VAR_0->last_updated.tv_sec -= VAR_0->last_updated.tv_sec % VAR_0->update_every;
    VAR_0->last_updated.tv_usec = 0;
}
