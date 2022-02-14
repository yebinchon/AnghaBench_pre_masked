
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int uint16_t ;
struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct sockaddr {int dummy; } ;
struct nn_ctcp {int ep; void* state; int usock; int retry; } ;
typedef int remote ;
typedef int local ;
typedef int ipv4only ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct sockaddr_storage*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int*,size_t*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (char const*,int,int,struct sockaddr_storage*,size_t*) ;
 int FUNC_9 (char const*,int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int *,struct sockaddr*,size_t) ;
 int FUNC_12 (int *,struct sockaddr*,size_t) ;
 int FUNC_13 (int *,int ,int ,int*,int) ;
 int FUNC_14 (int *,scalar_t__,int ,int ) ;
 char* FUNC_15 (char const*,char) ;
 int FUNC_16 (char const*) ;
 char* FUNC_17 (char const*,char) ;

__attribute__((used)) static void FUNC_18 (struct nn_ctcp *VAR_17,
    struct sockaddr_storage *VAR_18, size_t VAR_19)
{
    int VAR_20;
    struct sockaddr_storage VAR_21;
    size_t VAR_22;
    struct sockaddr_storage VAR_23;
    size_t VAR_24;
    const char *VAR_25;
    const char *VAR_26;
    const char *VAR_27;
    const char *VAR_28;
    uint16_t VAR_29;
    int VAR_30;
    size_t VAR_31;
    int VAR_32;
    size_t VAR_33;


    VAR_25 = FUNC_5 (VAR_17->ep);
    FUNC_2 (&VAR_21, 0, sizeof (VAR_21));


    VAR_26 = VAR_25 + FUNC_16 (VAR_25);
    VAR_27 = FUNC_17 (VAR_25, ':');
    VAR_20 = FUNC_9 (VAR_27 + 1, VAR_26 - VAR_27 - 1);
    FUNC_0 (VAR_20 > 0, -VAR_20);
    VAR_29 = VAR_20;


    VAR_31 = sizeof (VAR_30);
    FUNC_6 (VAR_17->ep, VAR_8, VAR_5,
        &VAR_30, &VAR_31);
    FUNC_3 (VAR_31 == sizeof (VAR_30));


    VAR_28 = FUNC_15 (VAR_25, ';');
    FUNC_2 (&VAR_23, 0, sizeof (VAR_23));
    if (VAR_28)
        VAR_20 = FUNC_8 (VAR_25, VAR_28 - VAR_25, VAR_30,
            &VAR_23, &VAR_24);
    else
        VAR_20 = FUNC_8 ("*", 1, VAR_30, &VAR_23, &VAR_24);
    if (FUNC_10 (VAR_20 < 0)) {
        FUNC_4 (&VAR_17->retry);
        VAR_17->state = VAR_4;
        return;
    }


    VAR_21 = *VAR_18;
    VAR_22 = VAR_19;
    if (VAR_21.ss_family == VAR_0)
        ((struct sockaddr_in*) &VAR_21)->sin_port = FUNC_1 (VAR_29);
    else if (VAR_21.ss_family == VAR_1)
        ((struct sockaddr_in6*) &VAR_21)->sin6_port = FUNC_1 (VAR_29);
    else
        FUNC_3 (0);


    VAR_20 = FUNC_14 (&VAR_17->usock, VAR_21.ss_family, VAR_12, 0);
    if (FUNC_10 (VAR_20 < 0)) {
        FUNC_4 (&VAR_17->retry);
        VAR_17->state = VAR_4;
        return;
    }


    VAR_33 = sizeof (VAR_32);
    FUNC_6 (VAR_17->ep, VAR_8, VAR_7, &VAR_32, &VAR_33);
    FUNC_3 (VAR_33 == sizeof (VAR_32));
    FUNC_13 (&VAR_17->usock, VAR_13, VAR_15,
        &VAR_32, sizeof (VAR_32));
    VAR_33 = sizeof (VAR_32);
    FUNC_6 (VAR_17->ep, VAR_8, VAR_6, &VAR_32, &VAR_33);
    FUNC_3 (VAR_33 == sizeof (VAR_32));
    FUNC_13 (&VAR_17->usock, VAR_13, VAR_14,
        &VAR_32, sizeof (VAR_32));
    VAR_33 = sizeof (VAR_32);
    FUNC_6 (VAR_17->ep, VAR_10, VAR_11, &VAR_32, &VAR_33);
    FUNC_3 (VAR_33 == sizeof (VAR_32));
    FUNC_13 (&VAR_17->usock, VAR_2, VAR_16,
        &VAR_32, sizeof (VAR_32));


    VAR_20 = FUNC_11 (&VAR_17->usock, (struct sockaddr*) &VAR_23, VAR_24);
    if (FUNC_10 (VAR_20 != 0)) {
        FUNC_4 (&VAR_17->retry);
        VAR_17->state = VAR_4;
        return;
    }


    FUNC_12 (&VAR_17->usock, (struct sockaddr*) &VAR_21, VAR_22);
    VAR_17->state = VAR_3;
    FUNC_7 (VAR_17->ep, VAR_9, 1);
}
