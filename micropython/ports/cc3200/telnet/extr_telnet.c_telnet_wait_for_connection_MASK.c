
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connected; } ;
struct TYPE_4__ {scalar_t__ n_sd; int credentialsValid; scalar_t__ timeout; scalar_t__ logginRetries; TYPE_1__ substate; int state; scalar_t__ txRetries; scalar_t__ rxRindex; scalar_t__ rxWindex; int sd; } ;
typedef int SlSocklen_t ;
typedef int SlSockAddr_t ;
typedef int SlSockAddrIn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 TYPE_2__ VAR_3 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4 (void) {
    SlSocklen_t VAR_4;
    SlSockAddrIn_t VAR_5;


    VAR_3.n_sd = FUNC_2(VAR_3.sd, (SlSockAddr_t *)&VAR_5, (SlSocklen_t *)&VAR_4);
    if (VAR_3.n_sd == VAR_2) {
        return;
    }
    else {
        if (VAR_3.n_sd <= 0) {

            FUNC_3();
            return;
        }


        FUNC_1(&VAR_3.sd);


        FUNC_0(VAR_3.n_sd, 0);


        VAR_3.rxWindex = 0;
        VAR_3.rxRindex = 0;
        VAR_3.txRetries = 0;

        VAR_3.state = VAR_0;
        VAR_3.substate.connected = VAR_1;
        VAR_3.credentialsValid = 1;
        VAR_3.logginRetries = 0;
        VAR_3.timeout = 0;
    }
}
