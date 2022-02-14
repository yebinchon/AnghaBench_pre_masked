
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_5__ {int s_b1; int s_b2; int s_b3; int s_b4; } ;
struct TYPE_6__ {TYPE_1__ S_un_b; } ;
struct TYPE_7__ {TYPE_2__ S_un; } ;
typedef TYPE_3__ IN_ADDR ;
typedef int DWORD_PTR ;
typedef char CHAR ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char,int) ;
 int FUNC_2 (int,char*,char*,...) ;
 char* FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    CHAR VAR_0[20];
    CHAR *VAR_1;
    IN_ADDR VAR_2;
    DWORD_PTR VAR_3;

    if (!&FUNC_3)
    {
        FUNC_6("RtlIpv4AddressToStringA not available\n");
        return;
    }

    VAR_2.S_un.S_un_b.s_b1 = 1;
    VAR_2.S_un.S_un_b.s_b2 = 2;
    VAR_2.S_un.S_un_b.s_b3 = 3;
    VAR_2.S_un.S_un_b.s_b4 = 4;

    FUNC_1(VAR_0, '#', sizeof(VAR_0) - 1);
    VAR_0[sizeof(VAR_0) -1] = 0;
    VAR_1 = FUNC_3(&VAR_2, VAR_0);
    VAR_3 = FUNC_4(VAR_0);
    FUNC_2(VAR_1 == (VAR_0 + VAR_3), "got %p with '%s' (expected %p)\n", VAR_1, VAR_0, VAR_0 + VAR_3);

    VAR_1 = FUNC_3(&VAR_2, ((void*)0));
    FUNC_2( (VAR_1 == (char *)~0) ||
        FUNC_0(VAR_1 == (char *)VAR_3),
        "got %p (expected ~0)\n", VAR_1);

    if (0) {

        FUNC_1(VAR_0, '#', sizeof(VAR_0) - 1);
        VAR_0[sizeof(VAR_0) -1] = 0;
        VAR_1 = FUNC_3(((void*)0), VAR_0);
        FUNC_5("got %p with '%s'\n", VAR_1, VAR_0);
    }

    if (0) {

        VAR_1 = FUNC_3(((void*)0), ((void*)0));
        FUNC_5("got %p\n", VAR_1);
    }
}
