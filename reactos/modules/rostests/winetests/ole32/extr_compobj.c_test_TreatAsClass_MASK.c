
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_11__ {int member_0; int member_1; int member_2; TYPE_1__ member_3; } ;
typedef scalar_t__ LONG ;
typedef int IInternetProtocol ;
typedef scalar_t__ HRESULT ;
typedef int HKEY ;
typedef TYPE_2__ GUID ;
typedef int CLSID ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *,int ,int *,void**) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,char const*,int ,int *,int ,int ,int *,int *,int *) ;
 int FUNC_7 (int ,char const*) ;
 scalar_t__ FUNC_8 (int ,char*,int ,int ,int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,char*,...) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_12 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static void FUNC_14(void)
{
    HRESULT VAR_12;
    CLSID VAR_13;
    static GUID VAR_14 = {0xdeadbeef,0xdead,0xbeef,{0xde,0xad,0xbe,0xef,0xde,0xad,0xbe,0xef}};
    static const char VAR_15[] = "{DEADBEEF-DEAD-BEEF-DEAD-BEEFDEADBEEF}";
    IInternetProtocol *VAR_16 = ((void*)0);
    HKEY VAR_17, VAR_18;
    LONG VAR_19;

    if (!&FUNC_11)
    {
        FUNC_13("CoGetTreatAsClass not present\n");
        return;
    }

    VAR_12 = FUNC_11(&VAR_14,&VAR_13);
    FUNC_10 (VAR_12 == VAR_10, "expected S_FALSE got %x\n",VAR_12);
    FUNC_10 (FUNC_2(&VAR_13,&VAR_14), "expected to get same clsid back\n");

    VAR_12 = FUNC_11(((void*)0), &VAR_13);
    FUNC_10(VAR_12 == VAR_3, "expected E_INVALIDARG got %08x\n", VAR_12);
    FUNC_10(FUNC_2(&VAR_13, &VAR_14), "expected no change to the clsid\n");

    VAR_12 = FUNC_11(&VAR_14, ((void*)0));
    FUNC_10(VAR_12 == VAR_3, "expected E_INVALIDARG got %08x\n", VAR_12);

    VAR_19 = FUNC_8(VAR_4, "CLSID", 0, VAR_6, &VAR_17);
    FUNC_10(!VAR_19, "Couldn't open CLSID key, error %d\n", VAR_19);

    VAR_19 = FUNC_6(VAR_17, VAR_15, 0, ((void*)0), 0, VAR_7, ((void*)0), &VAR_18, ((void*)0));
    if (VAR_19) {
        FUNC_13("CoGetTreatAsClass() tests will be skipped (failed to create a test key, error %d)\n", VAR_19);
        FUNC_5(VAR_17);
        return;
    }

    VAR_12 = FUNC_12(&VAR_14, &VAR_14);
    FUNC_10(VAR_12 == VAR_9, "CoTreatAsClass gave wrong error: %08x\n", VAR_12);

    VAR_12 = FUNC_12(&VAR_14, &VAR_1);
    if(VAR_12 == VAR_9){
        FUNC_13("Insufficient privileges to use CoTreatAsClass\n");
        goto exit;
    }
    FUNC_10(VAR_12 == VAR_11, "CoTreatAsClass failed: %08x\n", VAR_12);

    VAR_12 = FUNC_11(&VAR_14, &VAR_13);
    FUNC_10(VAR_12 == VAR_11, "CoGetTreatAsClass failed: %08x\n",VAR_12);
    FUNC_10(FUNC_2(&VAR_13, &VAR_1), "expected to get substituted clsid\n");

    FUNC_3(((void*)0));

    VAR_12 = FUNC_0(&VAR_14, ((void*)0), VAR_0, &VAR_5, (void **)&VAR_16);
    if(VAR_12 == VAR_8)
    {
        FUNC_13("IE not installed so can't test CoCreateInstance\n");
        goto exit;
    }

    FUNC_10(VAR_12 == VAR_11, "CoCreateInstance failed: %08x\n", VAR_12);
    if(VAR_16){
        FUNC_1(VAR_16);
        VAR_16 = ((void*)0);
    }

    VAR_12 = FUNC_12(&VAR_14, &VAR_2);
    FUNC_10(VAR_12 == VAR_11, "CoTreatAsClass failed: %08x\n", VAR_12);

    VAR_12 = FUNC_11(&VAR_14, &VAR_13);
    FUNC_10(VAR_12 == VAR_10, "expected S_FALSE got %08x\n", VAR_12);
    FUNC_10(FUNC_2(&VAR_13, &VAR_14), "expected to get same clsid back\n");


    FUNC_9(200);

    VAR_12 = FUNC_0(&VAR_14, ((void*)0), VAR_0, &VAR_5, (void **)&VAR_16);
    FUNC_10(VAR_12 == VAR_8, "CoCreateInstance gave wrong error: %08x\n", VAR_12);

    if(VAR_16)
        FUNC_1(VAR_16);

exit:
    FUNC_4();
    FUNC_5(VAR_18);
    FUNC_7(VAR_17, VAR_15);
    FUNC_5(VAR_17);
}
