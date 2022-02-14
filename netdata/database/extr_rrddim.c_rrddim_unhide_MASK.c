
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hostname; } ;
struct TYPE_5__ {char* name; int id; TYPE_2__* rrdhost; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDHOST ;
typedef int RRDDIM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,char const*) ;
 int FUNC_1 (char*,char const*,char*,int ,int ) ;
 int * FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(RRDSET *VAR_2, const char *VAR_3) {
    FUNC_0(VAR_0, "rrddim_unhide() for chart %s, dimension %s", VAR_2->name, VAR_3);

    RRDHOST *VAR_4 = VAR_2->rrdhost;
    RRDDIM *VAR_5 = FUNC_2(VAR_2, VAR_3);
    if(FUNC_4(!VAR_5)) {
        FUNC_1("Cannot find dimension with id '%s' on stats '%s' (%s) on host '%s'.", VAR_3, VAR_2->name, VAR_2->id, VAR_4->hostname);
        return 1;
    }

    FUNC_3(VAR_5, VAR_1);
    return 0;
}
