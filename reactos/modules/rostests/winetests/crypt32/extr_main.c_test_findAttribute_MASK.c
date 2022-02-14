
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* member_0; TYPE_1__* member_2; int member_1; } ;
struct TYPE_5__ {int member_0; int* member_1; } ;
typedef int * PCRYPT_ATTRIBUTE ;
typedef TYPE_1__ CRYPT_ATTR_BLOB ;
typedef TYPE_2__ CRYPT_ATTRIBUTE ;
typedef char CHAR ;
typedef int BYTE ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (char*,int,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    PCRYPT_ATTRIBUTE VAR_1;
    BYTE VAR_2[] = {0x02,0x01,0x01};
    static CHAR VAR_3[] = "1.2.3";
    CRYPT_ATTR_BLOB VAR_4[] = { { sizeof VAR_2, VAR_2 }, };
    CRYPT_ATTRIBUTE VAR_5 = { VAR_3, FUNC_0(VAR_4), VAR_4 };


    FUNC_3(0xdeadbeef);
    VAR_1 = FUNC_1(((void*)0), 0, ((void*)0));
    FUNC_4(VAR_1 == ((void*)0), "Expected failure\n");
    FUNC_4(FUNC_2() == 0xdeadbeef, "Last error was set to %08x\n",
     FUNC_2());
    if (0)
    {

        FUNC_1(((void*)0), 1, ((void*)0));



        FUNC_3(0xdeadbeef);
        VAR_1 = FUNC_1(((void*)0), 1, &VAR_5);
        FUNC_4(!VAR_1 && FUNC_2() == VAR_0,
         "Expected ERROR_INVALID_PARAMETER, got %d (%08x)\n", FUNC_2(),
         FUNC_2());
    }

    FUNC_3(0xdeadbeef);
    VAR_1 = FUNC_1("bogus", 1, &VAR_5);
    FUNC_4(VAR_1 == ((void*)0), "Expected failure\n");
    FUNC_4(FUNC_2() == 0xdeadbeef, "Last error was set to %08x\n",
     FUNC_2());

    FUNC_3(0xdeadbeef);
    VAR_1 = FUNC_1("1.2.4", 1, &VAR_5);
    FUNC_4(VAR_1 == ((void*)0), "Expected failure\n");
    FUNC_4(FUNC_2() == 0xdeadbeef, "Last error was set to %08x\n",
     FUNC_2());

    FUNC_3(0xdeadbeef);
    VAR_1 = FUNC_1("1.2.3", 1, &VAR_5);
    FUNC_4(VAR_1 != ((void*)0), "CertFindAttribute failed: %08x\n", FUNC_2());
}
