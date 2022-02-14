
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct nn_ep {int dummy; } ;
struct nn_ctcp {int fsm; int dns; int stcp; int retry; int usock; int state; struct nn_ep* ep; } ;
typedef int reconnect_ivl_max ;
typedef int reconnect_ivl ;
typedef int ipv4only ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct nn_ctcp*) ;
 struct nn_ctcp* FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int,int,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_4 (char const*,int) ;
 int FUNC_5 (int *,int ,int *) ;
 char* FUNC_6 (struct nn_ep*) ;
 int FUNC_7 (struct nn_ep*) ;
 int FUNC_8 (struct nn_ep*,int ,int ,int*,size_t*) ;
 int FUNC_9 (struct nn_ep*,int *,struct nn_ctcp*) ;
 int FUNC_10 (struct nn_ctcp*) ;
 int FUNC_11 (int *,int ,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char const*,int,int,struct sockaddr_storage*,size_t*) ;
 scalar_t__ FUNC_14 (char const*,int,int,struct sockaddr_storage*,size_t*) ;
 int FUNC_15 (char const*,int) ;
 int FUNC_16 (int *,int ,struct nn_ep*,int *) ;
 int FUNC_17 (int *,int ,int *) ;
 char* FUNC_18 (char const*,char) ;
 size_t FUNC_19 (char const*) ;
 char* FUNC_20 (char const*,char) ;

int FUNC_21 (struct nn_ep *VAR_14)
{
    int VAR_15;
    const char *VAR_16;
    size_t VAR_17;
    const char *VAR_18;
    const char *VAR_19;
    const char *VAR_20;
    const char *VAR_21;
    struct sockaddr_storage VAR_22;
    size_t VAR_23;
    int VAR_24;
    size_t VAR_25;
    struct nn_ctcp *VAR_26;
    int VAR_27;
    int VAR_28;
    size_t VAR_29;


    VAR_26 = FUNC_1 (sizeof (struct nn_ctcp), "ctcp");
    FUNC_0 (VAR_26);


    VAR_26->ep = VAR_14;
    FUNC_9 (VAR_14, &VAR_11, VAR_26);


    VAR_25 = sizeof (VAR_24);
    FUNC_8 (VAR_14, VAR_10, VAR_7, &VAR_24, &VAR_25);
    FUNC_2 (VAR_25 == sizeof (VAR_24));


    VAR_16 = FUNC_6 (VAR_14);
    VAR_17 = FUNC_19 (VAR_16);
    VAR_18 = FUNC_18 (VAR_16, ';');
    VAR_19 = VAR_18 ? VAR_18 + 1 : VAR_16;
    VAR_20 = FUNC_20 (VAR_16, ':');
    VAR_21 = VAR_16 + VAR_17;


    if (!VAR_20) {
        FUNC_10 (VAR_26);
        return -VAR_0;
    }
    VAR_15 = FUNC_15 (VAR_20 + 1, VAR_21 - VAR_20 - 1);
    if (VAR_15 < 0) {
        FUNC_10 (VAR_26);
        return -VAR_0;
    }



    if (FUNC_4 (VAR_19, VAR_20 - VAR_19) < 0 &&
          FUNC_14 (VAR_19, VAR_20 - VAR_19, VAR_24,
          &VAR_22, &VAR_23) < 0) {
        FUNC_10 (VAR_26);
        return -VAR_0;
    }


    if (VAR_18) {
        VAR_15 = FUNC_13 (VAR_16, VAR_18 - VAR_16, VAR_24, &VAR_22, &VAR_23);
        if (VAR_15 < 0) {
            FUNC_10 (VAR_26);
            return -VAR_1;
        }
    }


    FUNC_11 (&VAR_26->fsm, VAR_12, VAR_13,
        FUNC_7 (VAR_14));
    VAR_26->state = VAR_6;
    FUNC_17 (&VAR_26->usock, VAR_5, &VAR_26->fsm);
    VAR_29 = sizeof (VAR_27);
    FUNC_8 (VAR_14, VAR_10, VAR_8, &VAR_27, &VAR_29);
    FUNC_2 (VAR_29 == sizeof (VAR_27));
    VAR_29 = sizeof (VAR_28);
    FUNC_8 (VAR_14, VAR_10, VAR_9,
        &VAR_28, &VAR_29);
    FUNC_2 (VAR_29 == sizeof (VAR_28));
    if (VAR_28 == 0)
        VAR_28 = VAR_27;
    FUNC_3 (&VAR_26->retry, VAR_3,
        VAR_27, VAR_28, &VAR_26->fsm);
    FUNC_16 (&VAR_26->stcp, VAR_4, VAR_14, &VAR_26->fsm);
    FUNC_5 (&VAR_26->dns, VAR_2, &VAR_26->fsm);


    FUNC_12 (&VAR_26->fsm);

    return 0;
}
