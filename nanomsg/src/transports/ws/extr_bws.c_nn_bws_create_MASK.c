
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct nn_ep {int dummy; } ;
struct nn_bws {int fsm; int usock; int awss; int * aws; int state; struct nn_ep* ep; } ;
typedef int ipv4only ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nn_bws*) ;
 struct nn_bws* FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct nn_bws*) ;
 int VAR_8 ;
 char* FUNC_4 (struct nn_ep*) ;
 int FUNC_5 (struct nn_ep*) ;
 int FUNC_6 (struct nn_ep*,int ,int ,int*,size_t*) ;
 int FUNC_7 (struct nn_ep*,int *,struct nn_bws*) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char const*,int,int,struct sockaddr_storage*,size_t*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char const*,int) ;
 int FUNC_13 (int *,int ,int *) ;
 int FUNC_14 (char const*) ;
 char* FUNC_15 (char const*,char) ;

int FUNC_16 (struct nn_ep *VAR_9)
{
    int VAR_10;
    struct nn_bws *VAR_11;
    const char *VAR_12;
    const char *VAR_13;
    const char *VAR_14;
    struct sockaddr_storage VAR_15;
    size_t VAR_16;
    int VAR_17;
    size_t VAR_18;


    VAR_11 = FUNC_1 (sizeof (struct nn_bws), "bws");
    FUNC_0 (VAR_11);
    VAR_11->ep = VAR_9;

    FUNC_7 (VAR_9, &VAR_6, VAR_11);
    VAR_12 = FUNC_4 (VAR_9);


    VAR_13 = VAR_12 + FUNC_14 (VAR_12);
    VAR_14 = FUNC_15 (VAR_12, ':');
    if (!VAR_14) {
        return -VAR_0;
    }
    ++VAR_14;
    VAR_10 = FUNC_12 (VAR_14, VAR_13 - VAR_14);
    if (VAR_10 < 0) {
        return -VAR_0;
    }


    VAR_18 = sizeof (VAR_17);
    FUNC_6 (VAR_9, VAR_5, VAR_4, &VAR_17, &VAR_18);
    FUNC_2 (VAR_18 == sizeof (VAR_17));


    VAR_10 = FUNC_10 (VAR_12, VAR_14 - VAR_12 - 1, VAR_17, &VAR_15, &VAR_16);
    if (VAR_10 < 0) {
        return -VAR_1;
    }


    FUNC_8 (&VAR_11->fsm, VAR_7, VAR_8,
        FUNC_5 (VAR_9));
    VAR_11->state = VAR_3;
    VAR_11->aws = ((void*)0);
    FUNC_11 (&VAR_11->awss);


    FUNC_9 (&VAR_11->fsm);

    FUNC_13 (&VAR_11->usock, VAR_2, &VAR_11->fsm);

    VAR_10 = FUNC_3 (VAR_11);
    if (VAR_10 != 0) {
        return VAR_10;
    }

    return 0;
}
