
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct sockaddr_storage {int dummy; } ;
struct nn_ep {int dummy; } ;
struct nn_cws {int remote_hostname_len; int remote_port; char msg_type; int fsm; int dns; int sws; int retry; int usock; int state; int resource; int nic; int remote_host; scalar_t__ peer_gone; struct nn_ep* ep; } ;
typedef int reconnect_ivl_max ;
typedef int reconnect_ivl ;
typedef int msg_type ;
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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct nn_cws*) ;
 int FUNC_1 (scalar_t__,char const*,int) ;
 struct nn_cws* FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int,int,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_7 (char const*,int) ;
 int FUNC_8 (int *,int ,int *) ;
 char* FUNC_9 (struct nn_ep*) ;
 int FUNC_10 (struct nn_ep*) ;
 int FUNC_11 (struct nn_ep*,int ,int ,int*,size_t*) ;
 int FUNC_12 (struct nn_ep*,int *,struct nn_cws*) ;
 int FUNC_13 (struct nn_cws*) ;
 int FUNC_14 (int *,int ,int ,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char const*,int,int,struct sockaddr_storage*,size_t*) ;
 scalar_t__ FUNC_17 (char const*,int,int,struct sockaddr_storage*,size_t*) ;
 int FUNC_18 (char const*,int) ;
 int FUNC_19 (int *,int ,struct nn_ep*,int *) ;
 int FUNC_20 (int *,int ,int *) ;
 char* FUNC_21 (char const*,char) ;
 size_t FUNC_22 (char const*) ;
 int FUNC_23 (scalar_t__,char const*,int) ;
 char* FUNC_24 (char const*,char) ;

int FUNC_25 (struct nn_ep *VAR_16)
{
    int VAR_17;
    const char *VAR_18;
    size_t VAR_19;
    const char *VAR_20;
    const char *VAR_21;
    size_t VAR_22;
    const char *VAR_23;
    const char *VAR_24;
    const char *VAR_25;
    size_t VAR_26;
    struct sockaddr_storage VAR_27;
    size_t VAR_28;
    int VAR_29;
    size_t VAR_30;
    struct nn_cws *VAR_31;
    int VAR_32;
    int VAR_33;
    int VAR_34;
    size_t VAR_35;


    VAR_31 = FUNC_2 (sizeof (struct nn_cws), "cws");
    FUNC_0 (VAR_31);
    VAR_31->ep = VAR_16;
    VAR_31->peer_gone = 0;


    FUNC_12 (VAR_16, &VAR_13, VAR_31);


    VAR_30 = sizeof (VAR_29);
    FUNC_11 (VAR_16, VAR_10, VAR_7, &VAR_29, &VAR_30);
    FUNC_3 (VAR_30 == sizeof (VAR_29));


    VAR_18 = FUNC_9 (VAR_16);
    VAR_19 = FUNC_22 (VAR_18);
    VAR_20 = FUNC_21 (VAR_18, ';');
    VAR_21 = VAR_20 ? VAR_20 + 1 : VAR_18;
    VAR_23 = FUNC_24 (VAR_18, ':');
    VAR_24 = VAR_23 ? FUNC_21 (VAR_23, '/') : FUNC_21 (VAR_18, '/');
    VAR_25 = VAR_24 ? VAR_24 : VAR_18 + VAR_19;
    VAR_31->remote_hostname_len = VAR_23 ? VAR_23 - VAR_21 : VAR_25 - VAR_21;


    VAR_22 = VAR_25 - VAR_21;


    if (VAR_23 != ((void*)0)) {
        VAR_17 = FUNC_18 (VAR_23 + 1, VAR_25 - VAR_23 - 1);
        if (VAR_17 < 0) {
            FUNC_13(VAR_31);
            return -VAR_0;
        }
        VAR_31->remote_port = VAR_17;
    }
    else {
        VAR_31->remote_port = 80;
    }



    if (FUNC_7 (VAR_21, VAR_31->remote_hostname_len) < 0 &&
          FUNC_17 (VAR_21, VAR_31->remote_hostname_len, VAR_29,
          &VAR_27, &VAR_28) < 0) {
        FUNC_13(VAR_31);
        return -VAR_0;
    }


    if (VAR_20) {
        VAR_17 = FUNC_16 (VAR_18, VAR_20 - VAR_18, VAR_29, &VAR_27, &VAR_28);
        if (VAR_17 < 0) {
            FUNC_13(VAR_31);
            return -VAR_1;
        }
    }


    FUNC_6 (&VAR_31->remote_host, VAR_22 + 1);
    FUNC_1 (FUNC_5 (&VAR_31->remote_host), VAR_21, VAR_22);
    ((uint8_t *) FUNC_5 (&VAR_31->remote_host)) [VAR_22] = '\0';

    if (VAR_20) {
        FUNC_6 (&VAR_31->nic, VAR_20 - VAR_18);
        FUNC_1 (FUNC_5 (&VAR_31->nic),
            VAR_18, VAR_20 - VAR_18);
    }
    else {
        FUNC_6 (&VAR_31->nic, 1);
        FUNC_1 (FUNC_5 (&VAR_31->nic), "*", 1);
    }


    VAR_26 = FUNC_22 (VAR_25);
    if (VAR_26) {
        FUNC_6 (&VAR_31->resource, VAR_26 + 1);
        FUNC_23 (FUNC_5 (&VAR_31->resource),
            VAR_25, VAR_26 + 1);
    }
    else {

        FUNC_6 (&VAR_31->resource, 2);
        FUNC_23 (FUNC_5 (&VAR_31->resource), "/", 2);
    }


    FUNC_14 (&VAR_31->fsm, VAR_14, VAR_15,
        FUNC_10 (VAR_16));
    VAR_31->state = VAR_6;
    FUNC_20 (&VAR_31->usock, VAR_5, &VAR_31->fsm);

    VAR_35 = sizeof (VAR_34);
    FUNC_11 (VAR_16, VAR_11, VAR_12, &VAR_34, &VAR_35);
    FUNC_3 (VAR_35 == sizeof (VAR_34));
    VAR_31->msg_type = (uint8_t) VAR_34;

    VAR_35 = sizeof (VAR_32);
    FUNC_11 (VAR_16, VAR_10, VAR_8, &VAR_32, &VAR_35);
    FUNC_3 (VAR_35 == sizeof (VAR_32));
    VAR_35 = sizeof (VAR_33);
    FUNC_11 (VAR_16, VAR_10, VAR_9,
        &VAR_33, &VAR_35);
    FUNC_3 (VAR_35 == sizeof (VAR_33));
    if (VAR_33 == 0)
        VAR_33 = VAR_32;
    FUNC_4 (&VAR_31->retry, VAR_3,
        VAR_32, VAR_33, &VAR_31->fsm);

    FUNC_19 (&VAR_31->sws, VAR_4, VAR_16, &VAR_31->fsm);
    FUNC_8 (&VAR_31->dns, VAR_2, &VAR_31->fsm);


    FUNC_15 (&VAR_31->fsm);

    return 0;
}
