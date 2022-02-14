
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iface {scalar_t__ ifindex; scalar_t__ iflink; int device; struct iface* next; } ;
typedef scalar_t__ pid_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct iface*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct iface*) ;
 scalar_t__ FUNC_4 (struct iface*) ;
 int FUNC_5 (char*,scalar_t__) ;
 int * VAR_1 ;
 struct iface* FUNC_6 (char*,int *) ;
 scalar_t__ FUNC_7 (int *,scalar_t__) ;

void FUNC_8(pid_t VAR_2) {
    struct iface *VAR_3 = ((void*)0);
    struct iface *VAR_4, *VAR_5, *VAR_6;

    VAR_4 = FUNC_6("host", VAR_1);
    if(!VAR_4) {
        VAR_0 = 0;
        FUNC_2("cannot read host interface list.");
        goto cleanup;
    }

    if(!FUNC_1(VAR_4)) {
        VAR_0 = 0;
        FUNC_2("there are no double-linked host interfaces available.");
        goto cleanup;
    }

    if(FUNC_7(VAR_1, VAR_2)) {
        VAR_0 = 0;
        FUNC_2("cannot switch to the namespace of pid %u", (unsigned int) VAR_2);
        goto cleanup;
    }





    VAR_3 = FUNC_6("cgroup", ((void*)0));
    if(!VAR_3) {
        VAR_0 = 0;
        FUNC_2("cannot read cgroup interface list.");
        goto cleanup;
    }

    if(!FUNC_1(VAR_3)) {
        VAR_0 = 0;
        FUNC_2("there are not double-linked cgroup interfaces available.");
        goto cleanup;
    }

    for(VAR_5 = VAR_4; VAR_5 ; VAR_5 = VAR_5->next) {
        if(FUNC_4(VAR_5)) {
            for (VAR_6 = VAR_3; VAR_6; VAR_6 = VAR_6->next) {
                if(FUNC_4(VAR_6) && VAR_5->ifindex == VAR_6->iflink && VAR_5->iflink == VAR_6->ifindex) {
                    FUNC_0(VAR_5->device, VAR_6->device);
                }
            }
        }
    }

cleanup:
    FUNC_3(VAR_3);
    FUNC_3(VAR_4);
}
