
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ hash_chart; int chart; } ;
struct TYPE_5__ {scalar_t__ hash; scalar_t__ hash_name; int name; int id; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDCALC ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1(RRDCALC *VAR_0, RRDSET *VAR_1) {
    if( (VAR_0->hash_chart == VAR_1->hash && !FUNC_0(VAR_0->chart, VAR_1->id)) ||
            (VAR_0->hash_chart == VAR_1->hash_name && !FUNC_0(VAR_0->chart, VAR_1->name)))
        return 1;

    return 0;
}
