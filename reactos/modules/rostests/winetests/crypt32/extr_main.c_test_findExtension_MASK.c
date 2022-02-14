
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; int* member_1; } ;
struct TYPE_5__ {char* member_0; TYPE_1__ member_2; int member_1; } ;
typedef int * PCERT_EXTENSION ;
typedef char CHAR ;
typedef TYPE_2__ CERT_EXTENSION ;
typedef int BYTE ;


 int * FUNC_0 (char*,int,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static void FUNC_4(void)
{
    PCERT_EXTENSION VAR_2;
    static CHAR VAR_3[] = "1.2.3";
    BYTE VAR_4[] = {0x02,0x01,0x01};
    CERT_EXTENSION VAR_5 = { VAR_3, VAR_1, { sizeof VAR_4, VAR_4 } };


    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_0(((void*)0), 0, ((void*)0));
    FUNC_3(VAR_2 == ((void*)0), "Expected failure\n");
    FUNC_3(FUNC_1() == 0xdeadbeef, "Last error was set to %08x\n",
     FUNC_1());
    if (0)
    {

        FUNC_2(0xdeadbeef);
        FUNC_0(((void*)0), 1, ((void*)0));



        FUNC_2(0xdeadbeef);
        VAR_2 = FUNC_0(((void*)0), 1, &VAR_5);
        FUNC_3(!VAR_2 && FUNC_1() == VAR_0,
         "Expected ERROR_INVALID_PARAMETER, got %d (%08x)\n", FUNC_1(),
         FUNC_1());
    }

    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_0("bogus", 1, &VAR_5);
    FUNC_3(VAR_2 == ((void*)0), "Expected failure\n");
    FUNC_3(FUNC_1() == 0xdeadbeef, "Last error was set to %08x\n",
     FUNC_1());

    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_0("1.2.4", 1, &VAR_5);
    FUNC_3(VAR_2 == ((void*)0), "Expected failure\n");
    FUNC_3(FUNC_1() == 0xdeadbeef, "Last error was set to %08x\n",
     FUNC_1());

    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_0("1.2.3", 1, &VAR_5);
    FUNC_3(VAR_2 != ((void*)0), "CertFindExtension failed: %08x\n", FUNC_1());
}
