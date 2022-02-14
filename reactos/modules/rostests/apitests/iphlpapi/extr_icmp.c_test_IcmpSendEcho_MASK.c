
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SendData ;
typedef int PVOID ;
typedef int ICMP_ECHO_REPLY ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 () ;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,unsigned long,char*,int,int *,int ,scalar_t__,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__,char*,...) ;
 int FUNC_8 (char*,scalar_t__) ;

__attribute__((used)) static
void
FUNC_9(void)
{
    HANDLE VAR_4;
    unsigned long VAR_5 = VAR_0;
    DWORD VAR_6 = 0, VAR_7 = 0;
    char VAR_8[32] = "Data Buffer";
    PVOID VAR_9;
    DWORD VAR_10 = 0;

    FUNC_4(0xDEADBEEF);
    VAR_4 = FUNC_2();
    if (VAR_4 == VAR_1)
    {
        FUNC_8("IcmpCreateFile failed unexpectedly: %lu\n", FUNC_0());
        return;
    }

    VAR_5 = 0x08080808;
    VAR_9 = FUNC_6(sizeof(ICMP_ECHO_REPLY) + sizeof(VAR_8));

    VAR_10 = sizeof(ICMP_ECHO_REPLY);
    FUNC_4(0xDEADBEEF);
    VAR_6 = FUNC_3(VAR_4, VAR_5, VAR_8, sizeof(VAR_8),
        ((void*)0), VAR_9, VAR_10, 5000);

    FUNC_7(!VAR_6, "IcmpSendEcho succeeded unexpectedly\n");
    VAR_7 = FUNC_0();
    FUNC_7(VAR_7 == VAR_2 ||
       VAR_7 == VAR_3 ,
       "IcmpSendEcho returned unexpected error: %lu\n", VAR_7);

    VAR_10 = sizeof(ICMP_ECHO_REPLY) + sizeof(VAR_8);
    FUNC_4(0xDEADBEEF);
    VAR_6 = FUNC_3(VAR_4, VAR_5, VAR_8, sizeof(VAR_8),
        ((void*)0), VAR_9, VAR_10, 5000);

    FUNC_7(VAR_6, "IcmpSendEcho failed unexpectedly: %lu\n", FUNC_0());

    FUNC_5(VAR_9);
    FUNC_1(VAR_4);
}
