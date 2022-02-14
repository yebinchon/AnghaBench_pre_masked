
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int clsid ;
typedef int ULONG_PTR ;
struct TYPE_12__ {int* Data4; } ;
typedef scalar_t__ HRESULT ;
typedef int HANDLE ;
typedef TYPE_1__ GUID ;
typedef TYPE_1__ CLSID ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (scalar_t__,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int * VAR_7 ;
 int * VAR_8 ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int * VAR_9 ;

__attribute__((used)) static void FUNC_10(void)
{
    ULONG_PTR VAR_10 = 0;
    HANDLE VAR_11;
    CLSID VAR_12;
    HRESULT VAR_13 = FUNC_0(VAR_8, &VAR_12);
    FUNC_5(VAR_13 == VAR_5, "CLSIDFromProgID failed with error 0x%08x\n", VAR_13);
    FUNC_5(FUNC_2(&VAR_12, &VAR_1), "clsid wasn't equal to CLSID_StdFont\n");

    VAR_13 = FUNC_1(VAR_8, &VAR_12);
    FUNC_6(VAR_13, "CLSIDFromString");
    FUNC_5(FUNC_2(&VAR_12, &VAR_1), "clsid wasn't equal to CLSID_StdFont\n");



    VAR_13 = FUNC_0(VAR_9, ((void*)0));
    FUNC_5(VAR_13 == VAR_4, "CLSIDFromProgID should have returned E_INVALIDARG instead of 0x%08x\n", VAR_13);

    VAR_13 = FUNC_0(((void*)0), &VAR_12);
    FUNC_5(VAR_13 == VAR_4, "CLSIDFromProgID should have returned E_INVALIDARG instead of 0x%08x\n", VAR_13);

    FUNC_4(&VAR_12, 0xcc, sizeof(VAR_12));
    VAR_13 = FUNC_0(VAR_9, &VAR_12);
    FUNC_5(VAR_13 == VAR_3, "CLSIDFromProgID on nonexistent ProgID should have returned CO_E_CLASSSTRING instead of 0x%08x\n", VAR_13);
    FUNC_5(FUNC_2(&VAR_12, &VAR_0), "CLSIDFromProgID should have set clsid to all-zeros on failure\n");


    FUNC_4(&VAR_12, 0xcc, sizeof(VAR_12));
    VAR_13 = FUNC_0(VAR_7, &VAR_12);
    FUNC_5(VAR_13 == VAR_3, "got 0x%08x\n", VAR_13);
    FUNC_5(FUNC_2(&VAR_12, &VAR_0), "wrong clsid\n");

    if ((VAR_11 = FUNC_3(VAR_6, &VAR_10)))
    {
        GUID VAR_14;

        FUNC_4(&VAR_12, 0xcc, sizeof(VAR_12));
        VAR_13 = FUNC_0(VAR_9, &VAR_12);
        FUNC_5(VAR_13 == VAR_3, "got 0x%08x\n", VAR_13);
        FUNC_5(FUNC_2(&VAR_12, &VAR_0), "should have zero CLSID on failure\n");


        VAR_13 = FUNC_1(VAR_7, &VAR_12);
        FUNC_5(VAR_13 == VAR_3, "got 0x%08x\n", VAR_13);

        VAR_12 = VAR_0;
        VAR_13 = FUNC_0(VAR_7, &VAR_12);
        FUNC_5(VAR_13 == VAR_5, "got 0x%08x\n", VAR_13);

        FUNC_5(!FUNC_2(&VAR_12, &VAR_2) && !FUNC_2(&VAR_12, &VAR_0),
                 "got wrong clsid %s\n", FUNC_9(&VAR_12));


        VAR_12 = VAR_0;
        VAR_13 = FUNC_0(VAR_8, &VAR_12);
        FUNC_5(VAR_13 == VAR_5, "got 0x%08x\n", VAR_13);
        VAR_14 = VAR_1;

        VAR_14[7] = 0x52;
        FUNC_5(!FUNC_2(&VAR_12, &VAR_1) && !FUNC_2(&VAR_12, &VAR_0) && !FUNC_2(&VAR_12, &VAR_14),
            "got %s\n", FUNC_9(&VAR_12));

        FUNC_7(0, VAR_10);
        FUNC_8(VAR_11);
    }
}
