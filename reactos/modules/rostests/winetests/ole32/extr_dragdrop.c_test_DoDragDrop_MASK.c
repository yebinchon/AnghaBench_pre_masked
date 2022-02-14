
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ set_param; } ;
struct TYPE_6__ {scalar_t__ top; scalar_t__ left; } ;
typedef TYPE_1__ RECT ;
typedef int HWND ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (TYPE_2__**) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*,int ,int ,int ,int,int,int *,int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int *,scalar_t__,scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (int ,int ) ;
 int VAR_9 ;
 TYPE_2__** VAR_10 ;
 TYPE_2__* VAR_11 ;
 int FUNC_11 (int ,scalar_t__,int *) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (char*,int) ;

__attribute__((used)) static void FUNC_14(void)
{
    DWORD VAR_12;
    HRESULT VAR_13;
    HWND VAR_14;
    RECT VAR_15;
    int VAR_16;

    VAR_14 = FUNC_1(VAR_9, "WineOleTestClass", "Test", 0,
        VAR_0, VAR_0, 100, 100, ((void*)0),
        ((void*)0), ((void*)0), ((void*)0));
    FUNC_12(FUNC_5(VAR_14), "failed to create window\n");

    VAR_13 = FUNC_6(((void*)0));
    FUNC_12(VAR_13 == VAR_8, "got 0x%08x\n", VAR_13);

    VAR_13 = FUNC_8(VAR_14, &VAR_5);
    FUNC_12(VAR_13 == VAR_8, "got 0x%08x\n", VAR_13);


    VAR_13 = FUNC_3(((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_12(VAR_13 == VAR_6, "got 0x%08x\n", VAR_13);

    VAR_13 = FUNC_3(((void*)0), &VAR_4, 0, ((void*)0));
    FUNC_12(VAR_13 == VAR_6, "got 0x%08x\n", VAR_13);

    VAR_13 = FUNC_3(&VAR_1, ((void*)0), 0, ((void*)0));
    FUNC_12(VAR_13 == VAR_6, "got 0x%08x\n", VAR_13);

    VAR_13 = FUNC_3(((void*)0), ((void*)0), 0, &VAR_12);
    FUNC_12(VAR_13 == VAR_6, "got 0x%08x\n", VAR_13);

    VAR_13 = FUNC_3(&VAR_1, &VAR_4, 0, ((void*)0));
    FUNC_12(VAR_13 == VAR_6, "got 0x%08x\n", VAR_13);

    VAR_13 = FUNC_3(((void*)0), &VAR_4, 0, &VAR_12);
    FUNC_12(VAR_13 == VAR_6, "got 0x%08x\n", VAR_13);

    VAR_13 = FUNC_3(&VAR_1, ((void*)0), 0, &VAR_12);
    FUNC_12(VAR_13 == VAR_6, "got 0x%08x\n", VAR_13);

    FUNC_10(VAR_14, VAR_7);
    FUNC_4(VAR_14, &VAR_15);
    FUNC_12(FUNC_9(VAR_15.left+50, VAR_15.top+50), "SetCursorPos failed\n");

    for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_10); VAR_16++)
    {
        DWORD VAR_17;
        FUNC_13("%d\n", VAR_16);
        VAR_11 = VAR_10[VAR_16];
        VAR_17 = VAR_11->set_param;
        VAR_11++;

        VAR_13 = FUNC_3(&VAR_1, &VAR_4, VAR_17, &VAR_12);
        FUNC_11(VAR_3, VAR_13, ((void*)0));
        FUNC_11(VAR_2, VAR_12, ((void*)0));
    }

    FUNC_7();

    FUNC_2(VAR_14);
}
