
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hostname; int rrdhost_rwlock; } ;
typedef TYPE_1__ RRDHOST ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (char*,int ,char const*,unsigned long const,char const*) ;
 int FUNC_2 (int *) ;

void FUNC_3(RRDHOST *VAR_1, const char *VAR_2, const char *VAR_3, const unsigned long VAR_4) {
    FUNC_0(VAR_0, "Checking read lock on host '%s'", VAR_1->hostname);

    int VAR_5 = FUNC_2(&VAR_1->rrdhost_rwlock);
    if(VAR_5 == 0)
        FUNC_1("RRDHOST '%s' should be read-locked, but it is not, at function %s() at line %lu of file '%s'", VAR_1->hostname, VAR_3, VAR_4, VAR_2);
}
