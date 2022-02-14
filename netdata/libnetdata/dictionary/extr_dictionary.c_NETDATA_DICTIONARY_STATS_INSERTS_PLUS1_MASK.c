
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int inserts; } ;
struct TYPE_4__ {TYPE_2__* stats; } ;
typedef TYPE_1__ DICTIONARY ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_1(DICTIONARY *VAR_0) {
    if(FUNC_0(VAR_0->stats))
        VAR_0->stats->inserts++;
}
