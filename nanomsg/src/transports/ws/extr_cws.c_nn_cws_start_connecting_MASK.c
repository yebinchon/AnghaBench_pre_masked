
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct sockaddr {int dummy; } ;
struct nn_cws {int ep; void* state; int usock; int retry; int remote_port; int nic; } ;
typedef int remote ;
typedef int local ;
typedef int ipv4only ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct sockaddr_storage*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,int*,size_t*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int,struct sockaddr_storage*,size_t*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *,struct sockaddr*,size_t) ;
 int FUNC_11 (int *,struct sockaddr*,size_t) ;
 int FUNC_12 (int *,int ,int ,int*,int) ;
 int FUNC_13 (int *,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_14 (struct nn_cws *VAR_13,
    struct sockaddr_storage *VAR_14, size_t VAR_15)
{
    int VAR_16;
    struct sockaddr_storage VAR_17;
    size_t VAR_18;
    struct sockaddr_storage VAR_19;
    size_t VAR_20;
    int VAR_21;
    int VAR_22;
    size_t VAR_23;

    FUNC_1 (&VAR_17, 0, sizeof (VAR_17));
    FUNC_1 (&VAR_19, 0, sizeof (VAR_19));


    VAR_23 = sizeof (VAR_21);
    FUNC_6 (VAR_13->ep, VAR_7, VAR_4, &VAR_21, &VAR_23);
    FUNC_2 (VAR_23 == sizeof (VAR_21));

    VAR_16 = FUNC_8 (FUNC_4 (&VAR_13->nic),
    FUNC_5 (&VAR_13->nic), VAR_21, &VAR_19, &VAR_20);

    if (FUNC_9 (VAR_16 < 0)) {
        FUNC_3 (&VAR_13->retry);
        VAR_13->state = VAR_3;
        return;
    }


    VAR_17 = *VAR_14;
    VAR_18 = VAR_15;
    if (VAR_17.ss_family == VAR_0)
        ((struct sockaddr_in*) &VAR_17)->sin_port = FUNC_0 (VAR_13->remote_port);
    else if (VAR_17.ss_family == VAR_1)
        ((struct sockaddr_in6*) &VAR_17)->sin6_port = FUNC_0 (VAR_13->remote_port);
    else
        FUNC_2 (0);


    VAR_16 = FUNC_13 (&VAR_13->usock, VAR_17.ss_family, VAR_9, 0);
    if (FUNC_9 (VAR_16 < 0)) {
        FUNC_3 (&VAR_13->retry);
        VAR_13->state = VAR_3;
        return;
    }


    VAR_23 = sizeof (VAR_22);
    FUNC_6 (VAR_13->ep, VAR_7, VAR_6, &VAR_22, &VAR_23);
    FUNC_2 (VAR_23 == sizeof (VAR_22));
    FUNC_12 (&VAR_13->usock, VAR_10, VAR_12,
        &VAR_22, sizeof (VAR_22));
    VAR_23 = sizeof (VAR_22);
    FUNC_6 (VAR_13->ep, VAR_7, VAR_5, &VAR_22, &VAR_23);
    FUNC_2 (VAR_23 == sizeof (VAR_22));
    FUNC_12 (&VAR_13->usock, VAR_10, VAR_11,
        &VAR_22, sizeof (VAR_22));


    VAR_16 = FUNC_10 (&VAR_13->usock, (struct sockaddr*) &VAR_19, VAR_20);
    if (FUNC_9 (VAR_16 != 0)) {
        FUNC_3 (&VAR_13->retry);
        VAR_13->state = VAR_3;
        return;
    }


    FUNC_11 (&VAR_13->usock, (struct sockaddr*) &VAR_17, VAR_18);
    VAR_13->state = VAR_2;
    FUNC_7 (VAR_13->ep, VAR_8, 1);
}
