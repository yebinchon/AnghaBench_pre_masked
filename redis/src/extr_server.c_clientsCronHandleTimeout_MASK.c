
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int mstime_t ;
struct TYPE_9__ {int timeout; } ;
struct TYPE_10__ {int flags; scalar_t__ lastinteraction; TYPE_1__ bpop; } ;
typedef TYPE_2__ client ;
struct TYPE_11__ {scalar_t__ maxidletime; scalar_t__ cluster_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_4__ VAR_5 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(client *VAR_6, mstime_t VAR_7) {
    time_t VAR_8 = VAR_7/1000;

    if (VAR_5.maxidletime &&
        !(VAR_6->flags & VAR_3) &&
        !(VAR_6->flags & VAR_1) &&
        !(VAR_6->flags & VAR_0) &&
        !(VAR_6->flags & VAR_2) &&
        (VAR_8 - VAR_6->lastinteraction > VAR_5.maxidletime))
    {
        FUNC_3(VAR_4,"Closing idle client");
        FUNC_1(VAR_6);
        return 1;
    } else if (VAR_6->flags & VAR_0) {




        if (VAR_6->bpop.timeout != 0 && VAR_6->bpop.timeout < VAR_7) {

            FUNC_2(VAR_6);
            FUNC_4(VAR_6);
        } else if (VAR_5.cluster_enabled) {


            if (FUNC_0(VAR_6))
                FUNC_4(VAR_6);
        }
    }
    return 0;
}
