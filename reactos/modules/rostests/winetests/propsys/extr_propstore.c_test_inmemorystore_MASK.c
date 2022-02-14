
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int propvar ;
typedef int pkey ;
struct TYPE_16__ {int lVal; } ;
struct TYPE_17__ {int pid; void* vt; TYPE_1__ u; void* fmtid; } ;
typedef int PSC_STATE ;
typedef TYPE_2__ PROPVARIANT ;
typedef TYPE_2__ PROPERTYKEY ;
typedef int IPropertyStoreCache ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,TYPE_2__*) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int *,TYPE_2__*,int*) ;
 int FUNC_6 (int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_2__*,TYPE_2__*,int*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_2__*,int) ;
 int FUNC_10 (int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_11 (int *,TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_12 (void**,void**) ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_13 (TYPE_2__*,int ,int) ;
 int FUNC_14 (int,char*,...) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static void FUNC_16(void)
{
    IPropertyStoreCache *VAR_13;
    HRESULT VAR_14;
    PROPERTYKEY VAR_15;
    PROPVARIANT VAR_16;
    DWORD VAR_17;
    PSC_STATE VAR_18;

    VAR_14 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
        &VAR_4, (void**)&VAR_13);
    FUNC_14(VAR_14 == VAR_8, "CoCreateInstance failed, hr=%x\n", VAR_14);

    if (FUNC_1(VAR_14))
    {
        FUNC_15("CLSID_InMemoryPropertyStore not supported\n");
        return;
    }

    VAR_14 = FUNC_4(VAR_13, ((void*)0));
    FUNC_14(VAR_14 == VAR_3, "GetCount failed, hr=%x\n", VAR_14);

    VAR_14 = FUNC_4(VAR_13, &VAR_17);
    FUNC_14(VAR_14 == VAR_8, "GetCount failed, hr=%x\n", VAR_14);
    FUNC_14(VAR_17 == 0, "GetCount returned %i, expected 0\n", VAR_17);

    VAR_14 = FUNC_2(VAR_13);
    FUNC_14(VAR_14 == VAR_8, "Commit failed, hr=%x\n", VAR_14);

    VAR_14 = FUNC_2(VAR_13);
    FUNC_14(VAR_14 == VAR_8, "Commit failed, hr=%x\n", VAR_14);

    VAR_14 = FUNC_3(VAR_13, 0, &VAR_15);
    FUNC_14(VAR_14 == VAR_2, "GetAt failed, hr=%x\n", VAR_14);

    VAR_15.fmtid = VAR_5;
    VAR_15.pid = 4;

    FUNC_13(&VAR_16, 0, sizeof(VAR_16));
    VAR_16.vt = VAR_12;
    VAR_16.u.lVal = 12345;

    if (0)
    {

        VAR_14 = FUNC_10(VAR_13, ((void*)0), &VAR_16);
        FUNC_14(VAR_14 == VAR_3, "SetValue failed, hr=%x\n", VAR_14);

        VAR_14 = FUNC_10(VAR_13, &VAR_15, ((void*)0));
        FUNC_14(VAR_14 == VAR_3, "SetValue failed, hr=%x\n", VAR_14);
    }

    VAR_14 = FUNC_10(VAR_13, &VAR_15, &VAR_16);
    FUNC_14(VAR_14 == VAR_8, "SetValue failed, hr=%x\n", VAR_14);

    VAR_14 = FUNC_4(VAR_13, &VAR_17);
    FUNC_14(VAR_14 == VAR_8, "GetCount failed, hr=%x\n", VAR_14);
    FUNC_14(VAR_17 == 1, "GetCount returned %i, expected 0\n", VAR_17);

    FUNC_13(&VAR_15, 0, sizeof(VAR_15));

    VAR_14 = FUNC_3(VAR_13, 0, &VAR_15);
    FUNC_14(VAR_14 == VAR_8, "GetAt failed, hr=%x\n", VAR_14);
    FUNC_14(FUNC_12(&VAR_15.fmtid, &VAR_5), "got wrong pkey\n");
    FUNC_14(VAR_15.pid == 4, "got pid of %i, expected 4\n", VAR_15.pid);

    VAR_15.fmtid = VAR_5;
    VAR_15.pid = 4;

    FUNC_13(&VAR_16, 0, sizeof(VAR_16));

    if (0)
    {

        VAR_14 = FUNC_6(VAR_13, ((void*)0), &VAR_16);
        FUNC_14(VAR_14 == VAR_3, "GetValue failed, hr=%x\n", VAR_14);
    }

    VAR_14 = FUNC_6(VAR_13, &VAR_15, ((void*)0));
    FUNC_14(VAR_14 == VAR_3, "GetValue failed, hr=%x\n", VAR_14);

    VAR_14 = FUNC_6(VAR_13, &VAR_15, &VAR_16);
    FUNC_14(VAR_14 == VAR_8, "GetValue failed, hr=%x\n", VAR_14);
    FUNC_14(VAR_16.vt == VAR_12, "expected VT_I4, got %d\n", VAR_16.vt);
    FUNC_14(VAR_16.u.lVal == 12345, "expected 12345, got %d\n", VAR_16.u.lVal);

    VAR_15.fmtid = VAR_5;
    VAR_15.pid = 10;


    VAR_16.vt = VAR_11;
    VAR_14 = FUNC_6(VAR_13, &VAR_15, &VAR_16);
    FUNC_14(VAR_14 == VAR_8, "GetValue failed, hr=%x\n", VAR_14);
    FUNC_14(VAR_16.vt == VAR_10, "expected VT_EMPTY, got %d\n", VAR_16.vt);

    VAR_18 = 0xdeadbeef;
    VAR_14 = FUNC_5(VAR_13, &VAR_15, &VAR_18);
    FUNC_14(VAR_14 == VAR_9, "GetState failed, hr=%x\n", VAR_14);
    FUNC_14(VAR_18 == VAR_7, "expected PSC_NORMAL, got %d\n", VAR_18);

    VAR_16.vt = VAR_11;
    VAR_18 = 0xdeadbeef;
    VAR_14 = FUNC_7(VAR_13, &VAR_15, &VAR_16, &VAR_18);
    FUNC_14(VAR_14 == VAR_9, "GetValueAndState failed, hr=%x\n", VAR_14);
    FUNC_14(VAR_16.vt == VAR_10, "expected VT_EMPTY, got %d\n", VAR_16.vt);
    FUNC_14(VAR_18 == VAR_7, "expected PSC_NORMAL, got %d\n", VAR_18);


    VAR_14 = FUNC_9(VAR_13, &VAR_15, VAR_7);
    FUNC_14(VAR_14 == VAR_9, "SetState failed, hr=%x\n", VAR_14);


    VAR_15.fmtid = VAR_5;
    VAR_15.pid = 4;

    VAR_18 = 0xdeadbeef;
    VAR_14 = FUNC_5(VAR_13, &VAR_15, &VAR_18);
    FUNC_14(VAR_14 == VAR_8, "GetState failed, hr=%x\n", VAR_14);
    FUNC_14(VAR_18 == VAR_7, "expected PSC_NORMAL, got %d\n", VAR_18);

    VAR_14 = FUNC_9(VAR_13, &VAR_15, 10);
    FUNC_14(VAR_14 == VAR_8, "SetState failed, hr=%x\n", VAR_14);

    VAR_18 = 0xdeadbeef;
    VAR_14 = FUNC_5(VAR_13, &VAR_15, &VAR_18);
    FUNC_14(VAR_14 == VAR_8, "GetState failed, hr=%x\n", VAR_14);
    FUNC_14(VAR_18 == 10, "expected 10, got %d\n", VAR_18);

    VAR_16.vt = VAR_12;
    VAR_16.u.lVal = 12346;
    VAR_14 = FUNC_11(VAR_13, &VAR_15, &VAR_16, 5);
    FUNC_14(VAR_14 == VAR_8, "SetValueAndState failed, hr=%x\n", VAR_14);

    FUNC_13(&VAR_16, 0, sizeof(VAR_16));
    VAR_18 = 0xdeadbeef;
    VAR_14 = FUNC_7(VAR_13, &VAR_15, &VAR_16, &VAR_18);
    FUNC_14(VAR_14 == VAR_8, "GetValueAndState failed, hr=%x\n", VAR_14);
    FUNC_14(VAR_16.vt == VAR_12, "expected VT_I4, got %d\n", VAR_16.vt);
    FUNC_14(VAR_16.u.lVal == 12346, "expected 12346, got %d\n", VAR_16.vt);
    FUNC_14(VAR_18 == 5, "expected 5, got %d\n", VAR_18);


    VAR_15.fmtid = VAR_5;
    VAR_15.pid = 8;

    VAR_16.vt = VAR_12;
    VAR_16.u.lVal = 12347;
    VAR_14 = FUNC_11(VAR_13, &VAR_15, &VAR_16, VAR_6);
    FUNC_14(VAR_14 == VAR_8, "SetValueAndState failed, hr=%x\n", VAR_14);

    FUNC_13(&VAR_16, 0, sizeof(VAR_16));
    VAR_18 = 0xdeadbeef;
    VAR_14 = FUNC_7(VAR_13, &VAR_15, &VAR_16, &VAR_18);
    FUNC_14(VAR_14 == VAR_8, "GetValueAndState failed, hr=%x\n", VAR_14);
    FUNC_14(VAR_16.vt == VAR_12, "expected VT_I4, got %d\n", VAR_16.vt);
    FUNC_14(VAR_16.u.lVal == 12347, "expected 12347, got %d\n", VAR_16.vt);
    FUNC_14(VAR_18 == VAR_6, "expected PSC_DIRTY, got %d\n", VAR_18);

    FUNC_8(VAR_13);
}
