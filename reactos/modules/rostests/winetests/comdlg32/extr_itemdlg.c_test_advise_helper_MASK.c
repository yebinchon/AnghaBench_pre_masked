
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int ref; } ;
typedef TYPE_1__ IFileDialogEventsImpl ;
typedef int IFileDialogEvents ;
typedef int IFileDialog ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int*) ;
 int FUNC_3 (int *,int) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int *) ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static void FUNC_7(IFileDialog *VAR_2)
{
    IFileDialogEventsImpl *VAR_3;
    IFileDialogEvents *VAR_4;
    DWORD VAR_5[10];
    UINT VAR_6;
    HRESULT VAR_7;

    VAR_4 = FUNC_0();
    VAR_3 = FUNC_5(VAR_4);


    if (0)
    {
        VAR_7 = FUNC_2(VAR_2, ((void*)0), ((void*)0));
        FUNC_6(VAR_7 == VAR_0, "got 0x%08x\n", VAR_7);
        VAR_7 = FUNC_2(VAR_2, VAR_4, ((void*)0));
        FUNC_6(VAR_7 == VAR_0, "got 0x%08x\n", VAR_7);
    }
    VAR_7 = FUNC_2(VAR_2, ((void*)0), &VAR_5[0]);
    FUNC_6(VAR_7 == VAR_0, "got 0x%08x\n", VAR_7);
    FUNC_6(VAR_3->ref == 1, "got ref %d\n", VAR_3->ref);
    FUNC_4(VAR_3);

    VAR_7 = FUNC_3(VAR_2, 0);
    FUNC_6(VAR_7 == VAR_0, "got 0x%08x\n", VAR_7);
    for(VAR_6 = 0; VAR_6 < 10; VAR_6++) {
        VAR_7 = FUNC_2(VAR_2, VAR_4, &VAR_5[VAR_6]);
        FUNC_6(VAR_7 == VAR_1, "got 0x%08x\n", VAR_7);
        FUNC_6(VAR_5[VAR_6] == VAR_6+VAR_5[0], "Got cookie: %d\n", VAR_5[VAR_6]);
    }
    FUNC_6(VAR_3->ref == 10+1, "got ref %d\n", VAR_3->ref);
    FUNC_4(VAR_3);

    for(VAR_6 = 3; VAR_6 < 7; VAR_6++) {
        VAR_7 = FUNC_3(VAR_2, VAR_5[VAR_6]);
        FUNC_6(VAR_7 == VAR_1, "got 0x%08x\n", VAR_7);
    }
    FUNC_6(VAR_3->ref == 6+1, "got ref %d\n", VAR_3->ref);
    FUNC_4(VAR_3);

    for(VAR_6 = 0; VAR_6 < 3; VAR_6++) {
        VAR_7 = FUNC_3(VAR_2, VAR_5[VAR_6]);
        FUNC_6(VAR_7 == VAR_1, "got 0x%08x\n", VAR_7);
    }
    FUNC_6(VAR_3->ref == 3+1, "got ref %d\n", VAR_3->ref);
    FUNC_4(VAR_3);

    for(VAR_6 = 7; VAR_6 < 10; VAR_6++) {
        VAR_7 = FUNC_3(VAR_2, VAR_5[VAR_6]);
        FUNC_6(VAR_7 == VAR_1, "got 0x%08x\n", VAR_7);
    }
    FUNC_6(VAR_3->ref == 1, "got ref %d\n", VAR_3->ref);
    FUNC_4(VAR_3);

    VAR_7 = FUNC_3(VAR_2, VAR_5[9]+1);
    FUNC_6(VAR_7 == VAR_0, "got 0x%08x\n", VAR_7);
    FUNC_6(VAR_3->ref == 1, "got ref %d\n", VAR_3->ref);
    FUNC_4(VAR_3);

    VAR_7 = FUNC_2(VAR_2, VAR_4, &VAR_5[0]);
    FUNC_6(VAR_7 == VAR_1, "got 0x%08x\n", VAR_7);
    FUNC_6(VAR_5[0] >= 1, "got cookie: %d\n", VAR_5[0]);
    FUNC_6(VAR_3->ref == 1+1, "got ref %d\n", VAR_3->ref);
    FUNC_4(VAR_3);

    VAR_7 = FUNC_3(VAR_2, VAR_5[0]);

    if(0)
    {


        FUNC_3(VAR_2, VAR_5[0]);
    }


    FUNC_1(VAR_4);
}
