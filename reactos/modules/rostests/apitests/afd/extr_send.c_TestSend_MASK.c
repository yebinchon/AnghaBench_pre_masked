
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
 scalar_t__ FUNC_1 (int ,struct sockaddr const*,int) ;
 scalar_t__ FUNC_2 (int *,void*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (char*) ;
 int FUNC_8 (struct sockaddr_in*,int ,int) ;
 int FUNC_9 (int,char*,scalar_t__) ;

__attribute__((used)) static
void
FUNC_10(void)
{
    NTSTATUS VAR_5;
    HANDLE VAR_6;
    CHAR VAR_7[32];
    struct sockaddr_in VAR_8;

    FUNC_5(VAR_7, sizeof(VAR_7));

    VAR_5 = FUNC_2(&VAR_6, VAR_0, VAR_2, VAR_1);
    FUNC_9(VAR_5 == VAR_4, "AfdCreateSocket failed with %lx\n", VAR_5);

    VAR_5 = FUNC_3(VAR_6, ((void*)0), 0);
    FUNC_9(VAR_5 == VAR_3, "AfdSend failed with %lx\n", VAR_5);

    VAR_5 = FUNC_3(VAR_6, VAR_7, sizeof(VAR_7));
    FUNC_9(VAR_5 == VAR_3, "AfdSend failed with %lx\n", VAR_5);

    FUNC_8(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.sin_family = VAR_0;
    VAR_8.sin_addr.s_addr = FUNC_7("0.0.0.0");
    VAR_8.sin_port = FUNC_6(0);

    VAR_5 = FUNC_0(VAR_6, (const struct sockaddr *)&VAR_8, sizeof(VAR_8));
    FUNC_9(VAR_5 == VAR_4, "AfdBind failed with %lx\n", VAR_5);

    FUNC_8(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.sin_family = VAR_0;
    VAR_8.sin_addr.s_addr = FUNC_7("8.8.8.8");
    VAR_8.sin_port = FUNC_6(53);

    VAR_5 = FUNC_1(VAR_6, (const struct sockaddr *)&VAR_8, sizeof(VAR_8));
    FUNC_9(VAR_5 == VAR_4, "AfdConnect failed with %lx\n", VAR_5);

    VAR_5 = FUNC_3(VAR_6, ((void*)0), 0);
    FUNC_9(VAR_5 == VAR_4, "AfdSend failed with %lx\n", VAR_5);

    VAR_5 = FUNC_3(VAR_6, VAR_7, sizeof(VAR_7));
    FUNC_9(VAR_5 == VAR_4, "AfdSend failed with %lx\n", VAR_5);

    FUNC_4(VAR_6);
}
