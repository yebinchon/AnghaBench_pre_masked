
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;
typedef scalar_t__ SOCKET ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__,struct sockaddr*,int*) ;
 int FUNC_2 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_5 (scalar_t__,struct sockaddr*,int*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (struct sockaddr_in*,int ,int) ;

__attribute__((used)) static int FUNC_9(SOCKET *VAR_5, SOCKET *VAR_6)
{
    SOCKET VAR_7 = VAR_1;
    struct sockaddr_in VAR_8;
    int VAR_9, VAR_10;

    *VAR_5 = VAR_1;
    *VAR_6 = VAR_1;

    *VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_2, ((void*)0), 0, VAR_4);
    if (*VAR_5 == VAR_1)
        goto end;

    VAR_7 = FUNC_0(VAR_0, VAR_3, VAR_2, ((void*)0), 0, VAR_4);
    if (VAR_7 == VAR_1)
        goto end;

    FUNC_8(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.sin_family = VAR_0;
    VAR_8.sin_addr.s_addr = FUNC_6("127.0.0.1");
    VAR_10 = FUNC_2(VAR_7, (struct sockaddr *)&VAR_8, sizeof(VAR_8));
    if (VAR_10 != 0)
        goto end;

    VAR_9 = sizeof(VAR_8);
    VAR_10 = FUNC_5(VAR_7, (struct sockaddr *)&VAR_8, &VAR_9);
    if (VAR_10 != 0)
        goto end;

    VAR_10 = FUNC_7(VAR_7, 1);
    if (VAR_10 != 0)
        goto end;

    VAR_10 = FUNC_4(*VAR_5, (struct sockaddr *)&VAR_8, sizeof(VAR_8));
    if (VAR_10 != 0)
        goto end;

    VAR_9 = sizeof(VAR_8);
    *VAR_6 = FUNC_1(VAR_7, (struct sockaddr *)&VAR_8, &VAR_9);

end:
    if (VAR_7 != VAR_1)
        FUNC_3(VAR_7);
    if (*VAR_5 != VAR_1 && *VAR_6 != VAR_1)
        return 0;
    FUNC_3(*VAR_5);
    FUNC_3(*VAR_6);
    return -1;
}
