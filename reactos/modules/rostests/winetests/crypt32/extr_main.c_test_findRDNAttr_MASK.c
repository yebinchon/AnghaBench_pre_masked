
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {char* member_0; TYPE_2__* member_1; } ;
struct TYPE_8__ {int member_0; int* member_1; } ;
struct TYPE_9__ {char* member_0; struct TYPE_9__* member_1; TYPE_1__ member_2; } ;
typedef int * PCERT_RDN_ATTR ;
typedef char CHAR ;
typedef TYPE_2__ CERT_RDN_ATTR ;
typedef TYPE_2__ CERT_RDN ;
typedef TYPE_4__ CERT_NAME_INFO ;
typedef int BYTE ;


 char* FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 int * FUNC_1 (char*,TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    PCERT_RDN_ATTR VAR_2;
    static CHAR VAR_3[] = "1.2.3";
    BYTE VAR_4[] = { 0x16,0x09,'J','u','a','n',' ','L','a','n','g' };
    CERT_RDN_ATTR VAR_5[] = {
     { VAR_3, VAR_0, { sizeof VAR_4, VAR_4 } },
    };
    CERT_RDN VAR_6[] = { { FUNC_0(VAR_5), VAR_5 } };
    CERT_NAME_INFO VAR_7 = { FUNC_0(VAR_6), VAR_6 };

    if (0)
    {

        FUNC_3(0xdeadbeef);
        FUNC_1(((void*)0), ((void*)0));



        FUNC_3(0xdeadbeef);
        VAR_2 = FUNC_1(((void*)0), &VAR_7);
        FUNC_4(!VAR_2 && FUNC_2() == VAR_1,
         "Expected ERROR_INVALID_PARAMETER, got %d (%08x)\n", FUNC_2(),
         FUNC_2());
    }

    FUNC_3(0xdeadbeef);
    VAR_2 = FUNC_1("bogus", &VAR_7);
    FUNC_4(VAR_2 == ((void*)0), "Expected failure\n");
    FUNC_4(FUNC_2() == 0xdeadbeef, "Last error was set to %08x\n",
     FUNC_2());

    FUNC_3(0xdeadbeef);
    VAR_2 = FUNC_1("1.2.4", &VAR_7);
    FUNC_4(VAR_2 == ((void*)0), "Expected failure\n");
    FUNC_4(FUNC_2() == 0xdeadbeef, "Last error was set to %08x\n",
     FUNC_2());

    FUNC_3(0xdeadbeef);
    VAR_2 = FUNC_1("1.2.3", &VAR_7);
    FUNC_4(VAR_2 != ((void*)0), "CertFindRDNAttr failed: %08x\n", FUNC_2());
}
