
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int clsid ;
typedef char WCHAR ;
typedef int UINT ;
struct TYPE_11__ {int Data1; } ;
struct TYPE_10__ {int Data1; int Data2; } ;
typedef int HRESULT ;
typedef TYPE_1__ CLSID ;


 int FUNC_0 (char*,TYPE_1__*) ;
 TYPE_5__ VAR_0 ;
 TYPE_5__ VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,TYPE_5__*) ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 char* VAR_6 ;

__attribute__((used)) static void FUNC_8(void)
{
    CLSID VAR_7;
    WCHAR VAR_8[50];
    UINT VAR_9;

    HRESULT VAR_10 = FUNC_0(VAR_6, &VAR_7);
    FUNC_6(VAR_10, "CLSIDFromString");
    FUNC_5(FUNC_1(&VAR_7, &VAR_1), "clsid wasn't equal to CLSID_StdFont\n");

    FUNC_4(&VAR_7, 0xab, sizeof(VAR_7));
    VAR_10 = FUNC_0(((void*)0), &VAR_7);
    FUNC_5(VAR_10 == VAR_4, "got 0x%08x\n", VAR_10);
    FUNC_5(FUNC_1(&VAR_7, &VAR_0), "clsid wasn't equal to CLSID_NULL\n");


    FUNC_4(&VAR_7, 0, sizeof(VAR_7));
    VAR_10 = FUNC_0(VAR_5, &VAR_7);
    FUNC_5(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);
    FUNC_5(FUNC_1(&VAR_7, &VAR_3), "got %s\n", FUNC_7(&VAR_7));

    FUNC_2(VAR_8, VAR_6);
    for(VAR_9 = FUNC_3(VAR_6); VAR_9 < 49; VAR_9++)
        VAR_8[VAR_9] = 'A';
    VAR_8[VAR_9] = '\0';

    FUNC_4(&VAR_7, 0, sizeof(CLSID));
    VAR_10 = FUNC_0(VAR_8, &VAR_7);
    FUNC_5(VAR_10 == VAR_2, "Got %08x\n", VAR_10);
    FUNC_5(FUNC_1(&VAR_7, &VAR_1), "clsid wasn't equal to CLSID_StdFont\n");

    VAR_8[FUNC_3(VAR_6)-1] = 'A';
    FUNC_4(&VAR_7, 0, sizeof(CLSID));
    VAR_10 = FUNC_0(VAR_8, &VAR_7);
    FUNC_5(VAR_10 == VAR_2, "Got %08x\n", VAR_10);
    FUNC_5(FUNC_1(&VAR_7, &VAR_1), "clsid wasn't equal to CLSID_StdFont\n");

    VAR_8[FUNC_3(VAR_6)] = '\0';
    FUNC_4(&VAR_7, 0, sizeof(CLSID));
    VAR_10 = FUNC_0(VAR_8, &VAR_7);
    FUNC_5(VAR_10 == VAR_2, "Got %08x\n", VAR_10);
    FUNC_5(FUNC_1(&VAR_7, &VAR_1), "clsid wasn't equal to CLSID_StdFont\n");

    VAR_8[FUNC_3(VAR_6)-1] = '\0';
    FUNC_4(&VAR_7, 0, sizeof(CLSID));
    VAR_10 = FUNC_0(VAR_8, &VAR_7);
    FUNC_5(VAR_10 == VAR_2, "Got %08x\n", VAR_10);
    FUNC_5(FUNC_1(&VAR_7, &VAR_1), "clsid wasn't equal to CLSID_StdFont\n");

    FUNC_4(&VAR_7, 0xcc, sizeof(CLSID));
    VAR_10 = FUNC_0(VAR_8+1, &VAR_7);
    FUNC_5(VAR_10 == VAR_2, "Got %08x\n", VAR_10);
    FUNC_5(FUNC_1(&VAR_7, &VAR_0), "clsid wasn't equal to CLSID_NULL\n");

    VAR_8[9] = '*';
    FUNC_4(&VAR_7, 0xcc, sizeof(CLSID));
    VAR_10 = FUNC_0(VAR_8, &VAR_7);
    FUNC_5(VAR_10 == VAR_2, "Got %08x\n", VAR_10);
    FUNC_5(VAR_7.Data1 == VAR_1.Data1, "Got %08x\n", VAR_7.Data1);
    FUNC_5(VAR_7.Data2 == 0xcccc, "Got %04x\n", VAR_7.Data2);

    VAR_8[3] = '*';
    FUNC_4(&VAR_7, 0xcc, sizeof(CLSID));
    VAR_10 = FUNC_0(VAR_8, &VAR_7);
    FUNC_5(VAR_10 == VAR_2, "Got %08x\n", VAR_10);
    FUNC_5(VAR_7.Data1 == 0xb, "Got %08x\n", VAR_7.Data1);
    FUNC_5(VAR_7.Data2 == 0xcccc, "Got %04x\n", VAR_7.Data2);

    VAR_8[3] = '\0';
    FUNC_4(&VAR_7, 0xcc, sizeof(CLSID));
    VAR_10 = FUNC_0(VAR_8, &VAR_7);
    FUNC_5(VAR_10 == VAR_2, "Got %08x\n", VAR_10);
    FUNC_5(VAR_7.Data1 == 0xb, "Got %08x\n", VAR_7.Data1);
    FUNC_5(VAR_7.Data2 == 0xcccc, "Got %04x\n", VAR_7.Data2);
}
