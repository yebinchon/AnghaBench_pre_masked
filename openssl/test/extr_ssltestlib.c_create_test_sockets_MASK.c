
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sin ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *,int ) ;
 scalar_t__ FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int ) ;

int FUNC_10(int *VAR_4, int *VAR_5)
{
    struct sockaddr_in VAR_6;
    const char *VAR_7 = "127.0.0.1";
    int VAR_8 = 0, VAR_9 = 0;
    socklen_t VAR_10 = sizeof(VAR_6);
    int VAR_11 = -1;

    *VAR_4 = -1;
    *VAR_5 = -1;

    FUNC_7 ((char *) &VAR_6, 0, sizeof(VAR_6));
    VAR_6.sin_family = VAR_0;
    VAR_6.sin_addr.s_addr = FUNC_5(VAR_7);

    VAR_11 = FUNC_9(VAR_0, VAR_2, 0);
    if (VAR_11 < 0)
        return 0;

    if (FUNC_1(VAR_11, (struct sockaddr*)&VAR_6, sizeof(VAR_6)) < 0)
        goto out;

    if (FUNC_4(VAR_11, (struct sockaddr*)&VAR_6, &VAR_10) < 0)
        goto out;

    if (FUNC_6(VAR_11, 1) < 0)
        goto out;

    *VAR_4 = FUNC_9(VAR_0, VAR_2, 0);
    if (*VAR_4 < 0)
        goto out;

    if (FUNC_8(VAR_11) == -1)
        goto out;

    while (*VAR_5 == -1 || !VAR_8 ) {
        *VAR_5 = FUNC_0(VAR_11, ((void*)0), 0);
        if (*VAR_5 == -1 && VAR_3 != VAR_1)
            goto out;

        if (!VAR_8 && FUNC_3(*VAR_4, (struct sockaddr*)&VAR_6, sizeof(VAR_6)) < 0)
            goto out;
        else
            VAR_8 = 1;
    }

    if (FUNC_8(*VAR_4) == -1 || FUNC_8(*VAR_5) == -1)
        goto out;
    VAR_9 = 1;
    goto success;

out:
        if (*VAR_4 != -1)
            FUNC_2(*VAR_4);
        if (*VAR_5 != -1)
            FUNC_2(*VAR_5);
success:
        if (VAR_11 != -1)
            FUNC_2(VAR_11);
    return VAR_9;
}
