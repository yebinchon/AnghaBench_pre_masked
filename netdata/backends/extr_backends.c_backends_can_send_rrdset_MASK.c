
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int rrd_memory_mode; int hostname; } ;
struct TYPE_7__ {scalar_t__ rrd_memory_mode; int id; int name; TYPE_2__* rrdhost; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDHOST ;
typedef int BACKEND_OPTIONS ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int ,int ,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int) ;

inline int FUNC_8(BACKEND_OPTIONS VAR_6, RRDSET *VAR_7) {
    RRDHOST *VAR_8 = VAR_7->rrdhost;
    (void)VAR_8;

    if(FUNC_7(FUNC_3(VAR_7, VAR_2)))
        return 0;

    if(FUNC_7(!FUNC_3(VAR_7, VAR_3))) {

        if(FUNC_6(VAR_5, VAR_7->id) || FUNC_6(VAR_5, VAR_7->name))
            FUNC_4(VAR_7, VAR_3);
        else {
            FUNC_4(VAR_7, VAR_2);
            FUNC_1(VAR_1, "BACKEND: not sending chart '%s' of host '%s', because it is disabled for backends.", VAR_7->id, VAR_8->hostname);
            return 0;
        }
    }

    if(FUNC_7(!FUNC_5(VAR_7))) {
        FUNC_1(VAR_1, "BACKEND: not sending chart '%s' of host '%s', because it is not available for backends.", VAR_7->id, VAR_8->hostname);
        return 0;
    }

    if(FUNC_7(VAR_7->rrd_memory_mode == VAR_4 && !(FUNC_0(VAR_6) == VAR_0))) {
        FUNC_1(VAR_1, "BACKEND: not sending chart '%s' of host '%s' because its memory mode is '%s' and the backend requires database access.", VAR_7->id, VAR_8->hostname, FUNC_2(VAR_8->rrd_memory_mode));
        return 0;
    }

    return 1;
}
