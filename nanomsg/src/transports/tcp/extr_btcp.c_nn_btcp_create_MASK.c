
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct nn_ep {int dummy; } ;
struct nn_btcp {int listen_error; int fsm; int usock; int atcps; int * atcp; int state; struct nn_ep* ep; } ;
typedef int ipv4only ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nn_btcp*) ;
 struct nn_btcp* FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct nn_btcp*) ;
 int VAR_10 ;
 char* FUNC_4 (struct nn_ep*) ;
 int FUNC_5 (struct nn_ep*) ;
 int FUNC_6 (struct nn_ep*,int ,int ,int*,size_t*) ;
 int FUNC_7 (struct nn_ep*,int *,struct nn_btcp*) ;
 int FUNC_8 (struct nn_btcp*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ,int ) ;
 int FUNC_11 (int *,int *,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char const*,int,int,struct sockaddr_storage*,size_t*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char const*,int) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int *,int ,int *) ;
 int FUNC_18 (char const*) ;
 char* FUNC_19 (char const*,char) ;

int FUNC_20 (struct nn_ep *VAR_11)
{
    int VAR_12;
    struct nn_btcp *VAR_13;
    const char *VAR_14;
    const char *VAR_15;
    const char *VAR_16;
    struct sockaddr_storage VAR_17;
    size_t VAR_18;
    int VAR_19;
    size_t VAR_20;


    VAR_13 = FUNC_1 (sizeof (struct nn_btcp), "btcp");
    VAR_13->ep = VAR_11;
    FUNC_0 (VAR_13);

    FUNC_7 (VAR_11, &VAR_8, VAR_13);
    VAR_14 = FUNC_4 (VAR_11);


    VAR_15 = VAR_14 + FUNC_18 (VAR_14);
    VAR_16 = FUNC_19 (VAR_14, ':');
    if (VAR_16 == ((void*)0)) {
        FUNC_8 (VAR_13);
        return -VAR_0;
    }
    ++VAR_16;
    VAR_12 = FUNC_15 (VAR_16, VAR_15 - VAR_16);
    if (VAR_12 < 0) {
        FUNC_8 (VAR_13);
        return -VAR_0;
    }


    VAR_20 = sizeof (VAR_19);
    FUNC_6 (VAR_11, VAR_7, VAR_6, &VAR_19, &VAR_20);
    FUNC_2 (VAR_20 == sizeof (VAR_19));


    VAR_12 = FUNC_13 (VAR_14, VAR_16 - VAR_14 - 1, VAR_19, &VAR_17, &VAR_18);
    if (FUNC_16 (VAR_12 < 0)) {
        FUNC_8 (VAR_13);
        return -VAR_1;
    }


    FUNC_10 (&VAR_13->fsm, VAR_9, VAR_10,
        FUNC_5 (VAR_11));
    FUNC_9 (&VAR_13->listen_error);
    VAR_13->state = VAR_4;
    VAR_13->atcp = ((void*)0);
    FUNC_14 (&VAR_13->atcps);


    FUNC_12 (&VAR_13->fsm);

    FUNC_17 (&VAR_13->usock, VAR_3, &VAR_13->fsm);

    VAR_12 = FUNC_3 (VAR_13);
    if (VAR_12 != 0) {
        FUNC_11 (&VAR_13->fsm, &VAR_13->listen_error,
            VAR_2, VAR_5);
        return VAR_12;
    }

    return 0;
}
