
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int val ;
struct sockaddr_un {int sun_path; } ;
struct sockaddr_storage {int ss_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {int sec_attr; int outbuffersz; int inbuffersz; } ;
struct nn_cipc {int ep; int state; TYPE_1__ usock; int retry; } ;
typedef int ss ;


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
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct sockaddr_storage*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int*,size_t*) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,struct sockaddr*,int) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int*,int) ;
 int FUNC_9 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int ,char const*,int) ;

__attribute__((used)) static void FUNC_12 (struct nn_cipc *VAR_15)
{
    int VAR_16;
    struct sockaddr_storage VAR_17;
    struct sockaddr_un *VAR_18;
    const char *VAR_19;
    int VAR_20;
    size_t VAR_21;


    VAR_16 = FUNC_9 (&VAR_15->usock, VAR_0, VAR_11, 0);
    if (FUNC_6 (VAR_16 < 0)) {
        FUNC_2 (&VAR_15->retry);
        VAR_15->state = VAR_2;
        return;
    }


    VAR_21 = sizeof (VAR_20);
    FUNC_4 (VAR_15->ep, VAR_9, VAR_8, &VAR_20, &VAR_21);
    FUNC_1 (VAR_21 == sizeof (VAR_20));
    FUNC_8 (&VAR_15->usock, VAR_12, VAR_14,
        &VAR_20, sizeof (VAR_20));
    VAR_21 = sizeof (VAR_20);
    FUNC_4 (VAR_15->ep, VAR_9, VAR_7, &VAR_20, &VAR_21);
    FUNC_1 (VAR_21 == sizeof (VAR_20));
    FUNC_8 (&VAR_15->usock, VAR_12, VAR_13,
        &VAR_20, sizeof (VAR_20));


    VAR_19 = FUNC_3 (VAR_15->ep);
    FUNC_0 (&VAR_17, 0, sizeof (VAR_17));
    VAR_18 = (struct sockaddr_un*) &VAR_17;
    FUNC_1 (FUNC_10 (VAR_19) < sizeof (VAR_18->sun_path));
    VAR_17.ss_family = VAR_0;
    FUNC_11 (VAR_18->sun_path, VAR_19, sizeof (VAR_18->sun_path));
    FUNC_7 (&VAR_15->usock, (struct sockaddr*) &VAR_17,
        sizeof (struct sockaddr_un));
    VAR_15->state = VAR_1;

    FUNC_5 (VAR_15->ep, VAR_10, 1);
}
