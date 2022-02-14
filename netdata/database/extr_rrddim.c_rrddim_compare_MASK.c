
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hash; int id; } ;
typedef TYPE_1__ RRDDIM ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(void* VAR_0, void* VAR_1) {
    if(((RRDDIM *)VAR_0)->hash < ((RRDDIM *)VAR_1)->hash) return -1;
    else if(((RRDDIM *)VAR_0)->hash > ((RRDDIM *)VAR_1)->hash) return 1;
    else return FUNC_0(((RRDDIM *)VAR_0)->id, ((RRDDIM *)VAR_1)->id);
}
