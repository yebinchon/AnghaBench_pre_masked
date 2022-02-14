
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
 scalar_t__ FUNC_0 (scalar_t__,struct sockaddr*,int*) ;
 int FUNC_1 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_4 (scalar_t__,struct sockaddr*,int*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (struct sockaddr_in*,int ,int) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(SOCKET *VAR_4, SOCKET *VAR_5)
{
    SOCKET VAR_6 = VAR_1;
    struct sockaddr_in VAR_7;
    int VAR_8;
    int VAR_9;

    *VAR_4 = VAR_1;
    *VAR_5 = VAR_1;

    *VAR_4 = FUNC_8(VAR_0, VAR_3, VAR_2);
    if (*VAR_4 == VAR_1)
        goto end;

    VAR_6 = FUNC_8(VAR_0, VAR_3, VAR_2);
    if (VAR_6 == VAR_1)
        goto end;

    FUNC_7(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.sin_family = VAR_0;
    VAR_7.sin_addr.s_addr = FUNC_5("127.0.0.1");
    VAR_9 = FUNC_1(VAR_6, (struct sockaddr*)&VAR_7, sizeof(VAR_7));
    if (VAR_9 != 0)
        goto end;

    VAR_8 = sizeof(VAR_7);
    VAR_9 = FUNC_4(VAR_6, (struct sockaddr*)&VAR_7, &VAR_8);
    if (VAR_9 != 0)
        goto end;

    VAR_9 = FUNC_6(VAR_6, 1);
    if (VAR_9 != 0)
        goto end;

    VAR_9 = FUNC_3(*VAR_4, (struct sockaddr*)&VAR_7, sizeof(VAR_7));
    if (VAR_9 != 0)
        goto end;

    VAR_8 = sizeof(VAR_7);
    *VAR_5 = FUNC_0(VAR_6, (struct sockaddr*)&VAR_7, &VAR_8);

end:
    if (VAR_6 != VAR_1)
        FUNC_2(VAR_6);
    if (*VAR_4 != VAR_1 && *VAR_5 != VAR_1)
        return 0;
    FUNC_2(*VAR_4);
    FUNC_2(*VAR_5);
    return -1;
}
