
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int collected_number ;
struct TYPE_7__ {int hostname; } ;
struct TYPE_6__ {char* name; int id; TYPE_2__* rrdhost; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDHOST ;
typedef int RRDDIM ;


 int FUNC_0 (char*,char const*,char*,int ,int ) ;
 int * FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_3 (int) ;

collected_number FUNC_4(RRDSET *VAR_0, const char *VAR_1, collected_number VAR_2) {
    RRDHOST *VAR_3 = VAR_0->rrdhost;
    RRDDIM *VAR_4 = FUNC_1(VAR_0, VAR_1);
    if(FUNC_3(!VAR_4)) {
        FUNC_0("Cannot find dimension with id '%s' on stats '%s' (%s) on host '%s'.", VAR_1, VAR_0->name, VAR_0->id, VAR_3->hostname);
        return 0;
    }

    return FUNC_2(VAR_0, VAR_4, VAR_2);
}
