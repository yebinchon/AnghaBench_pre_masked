
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int buffer ;
typedef scalar_t__ USHORT ;
typedef int ULONG ;
struct TYPE_5__ {int s_b1; int s_b2; int s_b3; int s_b4; } ;
struct TYPE_6__ {TYPE_1__ S_un_b; } ;
struct TYPE_7__ {TYPE_2__ S_un; } ;
typedef scalar_t__ NTSTATUS ;
typedef char* LPSTR ;
typedef TYPE_3__ IN_ADDR ;
typedef int DWORD ;
typedef char CHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char,int) ;
 int FUNC_2 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__,char*,int*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    CHAR VAR_2[] = "1.2.3.4";
    CHAR VAR_3[] = "1.2.3.4:80";
    LPSTR VAR_4;
    CHAR VAR_5[30];
    NTSTATUS VAR_6;
    IN_ADDR VAR_7;
    ULONG VAR_8;
    DWORD VAR_9;
    USHORT VAR_10;

    if (!&FUNC_3)
    {
        FUNC_6("RtlIpv4AddressToStringExA not available\n");
        return;
    }

    VAR_7.S_un.S_un_b.s_b1 = 1;
    VAR_7.S_un.S_un_b.s_b2 = 2;
    VAR_7.S_un.S_un_b.s_b3 = 3;
    VAR_7.S_un.S_un_b.s_b4 = 4;

    VAR_10 = FUNC_0(80);
    VAR_4 = VAR_3;

    VAR_8 = sizeof(VAR_5);
    FUNC_1(VAR_5, '#', sizeof(VAR_5) - 1);
    VAR_5[sizeof(VAR_5) -1] = 0;
    VAR_6 = FUNC_3(&VAR_7, VAR_10, VAR_5, &VAR_8);
    VAR_9 = FUNC_5(VAR_5);
    FUNC_2( (VAR_6 == VAR_1) &&
        (VAR_8 == FUNC_5(VAR_4) + 1) && !FUNC_4(VAR_5, VAR_4),
        "got 0x%x and size %d with '%s'\n", VAR_6, VAR_8, VAR_5);

    VAR_8 = VAR_9 + 1;
    FUNC_1(VAR_5, '#', sizeof(VAR_5) - 1);
    VAR_5[sizeof(VAR_5) -1] = 0;
    VAR_6 = FUNC_3(&VAR_7, VAR_10, VAR_5, &VAR_8);
    FUNC_2( (VAR_6 == VAR_1) &&
        (VAR_8 == FUNC_5(VAR_4) + 1) && !FUNC_4(VAR_5, VAR_4),
        "got 0x%x and size %d with '%s'\n", VAR_6, VAR_8, VAR_5);

    VAR_8 = VAR_9;
    FUNC_1(VAR_5, '#', sizeof(VAR_5) - 1);
    VAR_5[sizeof(VAR_5) -1] = 0;
    VAR_6 = FUNC_3(&VAR_7, VAR_10, VAR_5, &VAR_8);
    FUNC_2( (VAR_6 == VAR_0) && (VAR_8 == VAR_9 + 1),
        "got 0x%x and %d with '%s' (expected STATUS_INVALID_PARAMETER and %d)\n",
        VAR_6, VAR_8, VAR_5, VAR_9 + 1);

    VAR_8 = VAR_9 - 1;
    FUNC_1(VAR_5, '#', sizeof(VAR_5) - 1);
    VAR_5[sizeof(VAR_5) -1] = 0;
    VAR_6 = FUNC_3(&VAR_7, VAR_10, VAR_5, &VAR_8);
    FUNC_2( (VAR_6 == VAR_0) && (VAR_8 == VAR_9 + 1),
        "got 0x%x and %d with '%s' (expected STATUS_INVALID_PARAMETER and %d)\n",
        VAR_6, VAR_8, VAR_5, VAR_9 + 1);



    VAR_10 = 0;
    VAR_4 = VAR_2;

    VAR_8 = sizeof(VAR_5);
    FUNC_1(VAR_5, '#', sizeof(VAR_5) - 1);
    VAR_5[sizeof(VAR_5) -1] = 0;
    VAR_6 = FUNC_3(&VAR_7, VAR_10, VAR_5, &VAR_8);
    VAR_9 = FUNC_5(VAR_5);
    FUNC_2( (VAR_6 == VAR_1) &&
        (VAR_8 == FUNC_5(VAR_4) + 1) && !FUNC_4(VAR_5, VAR_4),
        "got 0x%x and size %d with '%s'\n", VAR_6, VAR_8, VAR_5);

    VAR_8 = VAR_9 + 1;
    FUNC_1(VAR_5, '#', sizeof(VAR_5) - 1);
    VAR_5[sizeof(VAR_5) -1] = 0;
    VAR_6 = FUNC_3(&VAR_7, VAR_10, VAR_5, &VAR_8);
    FUNC_2( (VAR_6 == VAR_1) &&
        (VAR_8 == FUNC_5(VAR_4) + 1) && !FUNC_4(VAR_5, VAR_4),
        "got 0x%x and size %d with '%s'\n", VAR_6, VAR_8, VAR_5);

    VAR_8 = VAR_9;
    FUNC_1(VAR_5, '#', sizeof(VAR_5) - 1);
    VAR_5[sizeof(VAR_5) -1] = 0;
    VAR_6 = FUNC_3(&VAR_7, VAR_10, VAR_5, &VAR_8);
    FUNC_2( (VAR_6 == VAR_0) && (VAR_8 == VAR_9 + 1),
        "got 0x%x and %d with '%s' (expected STATUS_INVALID_PARAMETER and %d)\n",
        VAR_6, VAR_8, VAR_5, VAR_9 + 1);

    VAR_8 = VAR_9 - 1;
    FUNC_1(VAR_5, '#', sizeof(VAR_5) - 1);
    VAR_5[sizeof(VAR_5) -1] = 0;
    VAR_6 = FUNC_3(&VAR_7, VAR_10, VAR_5, &VAR_8);
    FUNC_2( (VAR_6 == VAR_0) && (VAR_8 == VAR_9 + 1),
        "got 0x%x and %d with '%s' (expected STATUS_INVALID_PARAMETER and %d)\n",
        VAR_6, VAR_8, VAR_5, VAR_9 + 1);



    FUNC_1(VAR_5, '#', sizeof(VAR_5) - 1);
    VAR_5[sizeof(VAR_5) -1] = 0;
    VAR_6 = FUNC_3(&VAR_7, 0, VAR_5, ((void*)0));
    FUNC_2(VAR_6 == VAR_0,
        "got 0x%x with '%s' (expected STATUS_INVALID_PARAMETER)\n", VAR_6, VAR_5);

    VAR_8 = sizeof(VAR_5);
    VAR_6 = FUNC_3(&VAR_7, 0, ((void*)0), &VAR_8);
    FUNC_2( VAR_6 == VAR_0,
        "got 0x%x and size %d (expected STATUS_INVALID_PARAMETER)\n", VAR_6, VAR_8);

    VAR_8 = sizeof(VAR_5);
    FUNC_1(VAR_5, '#', sizeof(VAR_5) - 1);
    VAR_5[sizeof(VAR_5) -1] = 0;
    VAR_6 = FUNC_3(((void*)0), 0, VAR_5, &VAR_8);
    FUNC_2( VAR_6 == VAR_0,
        "got 0x%x and size %d with '%s' (expected STATUS_INVALID_PARAMETER)\n",
        VAR_6, VAR_8, VAR_5);
}
