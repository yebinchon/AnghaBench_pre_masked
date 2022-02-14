
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int mstime_t ;
struct TYPE_11__ {long long reploffset; long numreplicas; int timeout; } ;
struct TYPE_12__ {long long woff; int flags; TYPE_1__ bpop; int * argv; } ;
typedef TYPE_2__ client ;
struct TYPE_13__ {int clients_waiting_acks; scalar_t__ masterhost; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,long) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,long*,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int *,int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 long FUNC_6 (long long) ;
 int FUNC_7 () ;
 TYPE_4__ VAR_4 ;

void FUNC_8(client *VAR_5) {
    mstime_t VAR_6;
    long VAR_7, VAR_8;
    long long VAR_9 = VAR_5->woff;

    if (VAR_4.masterhost) {
        FUNC_0(VAR_5,"WAIT cannot be used with replica instances. Please also note that since Redis 4.0 if a replica is configured to be writable (which is not the default) writes to replicas are just local and are not propagated.");
        return;
    }


    if (FUNC_3(VAR_5,VAR_5->argv[1],&VAR_7,((void*)0)) != VAR_2)
        return;
    if (FUNC_4(VAR_5,VAR_5->argv[2],&VAR_6,VAR_3)
        != VAR_2) return;


    VAR_8 = FUNC_6(VAR_5->woff);
    if (VAR_8 >= VAR_7 || VAR_5->flags & VAR_1) {
        FUNC_1(VAR_5,VAR_8);
        return;
    }



    VAR_5->bpop.timeout = VAR_6;
    VAR_5->bpop.reploffset = VAR_9;
    VAR_5->bpop.numreplicas = VAR_7;
    FUNC_5(VAR_4.clients_waiting_acks,VAR_5);
    FUNC_2(VAR_5,VAR_0);



    FUNC_7();
}
