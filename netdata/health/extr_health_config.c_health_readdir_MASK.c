
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hostname; int health_enabled; } ;
typedef TYPE_1__ RRDHOST ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (char const*,char const*,char const*,int ,void*,int ) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(RRDHOST *VAR_2, const char *VAR_3, const char *VAR_4, const char *VAR_5) {
    if(FUNC_2(!VAR_2->health_enabled)) {
        FUNC_0(VAR_0, "CONFIG health is not enabled for host '%s'", VAR_2->hostname);
        return;
    }

    FUNC_1(VAR_3, VAR_4, VAR_5, VAR_1, (void *) VAR_2, 0);
}
