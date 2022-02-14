
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* s_addr; } ;
struct sockaddr_in {void* sin_port; TYPE_1__ sin_addr; void* sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;
typedef scalar_t__ NTSTATUS ;
typedef int HANDLE ;
typedef int CHAR ;
typedef int Buffer ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct sockaddr const*,int) ;
 scalar_t__ FUNC_1 (int *,void*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int,struct sockaddr const*,int) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_5 (int) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (struct sockaddr_in*,int ,int) ;
 int FUNC_8 (int,char*,scalar_t__) ;

__attribute__((used)) static
void
FUNC_9(void)
{
    NTSTATUS VAR_4;
    HANDLE VAR_5;
    CHAR VAR_6[32];
    struct sockaddr_in VAR_7;

    FUNC_4(VAR_6, sizeof(VAR_6));

    VAR_4 = FUNC_1(&VAR_5, VAR_0, VAR_2, VAR_1);
    FUNC_8(VAR_4 == VAR_3, "AfdCreateSocket failed with %lx\n", VAR_4);

    FUNC_7(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.sin_family = VAR_0;
    VAR_7.sin_addr.s_addr = FUNC_6("0.0.0.0");
    VAR_7.sin_port = FUNC_5(0);

    VAR_4 = FUNC_0(VAR_5, (const struct sockaddr *)&VAR_7, sizeof(VAR_7));
    FUNC_8(VAR_4 == VAR_3, "AfdBind failed with %lx\n", VAR_4);

    FUNC_7(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.sin_family = VAR_0;
    VAR_7.sin_addr.s_addr = FUNC_6("8.8.8.8");
    VAR_7.sin_port = FUNC_5(53);

    VAR_4 = FUNC_2(VAR_5, ((void*)0), 0, (const struct sockaddr *)&VAR_7, sizeof(VAR_7));
    FUNC_8(VAR_4 == VAR_3, "AfdSendTo failed with %lx\n", VAR_4);

    VAR_4 = FUNC_2(VAR_5, VAR_6, sizeof(VAR_6), (const struct sockaddr *)&VAR_7, sizeof(VAR_7));
    FUNC_8(VAR_4 == VAR_3, "AfdSendTo failed with %lx\n", VAR_4);

    FUNC_3(VAR_5);
}
