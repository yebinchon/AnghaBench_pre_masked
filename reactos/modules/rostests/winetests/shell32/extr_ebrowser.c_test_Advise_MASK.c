
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; int completed; TYPE_1__ IExplorerBrowserEvents_iface; } ;
typedef TYPE_1__ IExplorerBrowserEvents ;
typedef int IExplorerBrowser ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int,char*,int,...) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(void)
{
    IExplorerBrowser *VAR_4;
    IExplorerBrowserEvents *VAR_5;
    DWORD VAR_6[10];
    HRESULT VAR_7;
    UINT VAR_8, VAR_9;


    VAR_2.IExplorerBrowserEvents_iface.lpVtbl = &VAR_3;
    VAR_5 = &VAR_2.IExplorerBrowserEvents_iface;

    FUNC_6(&VAR_4);

    if(0)
    {

        FUNC_0(VAR_4, VAR_5, ((void*)0));
        FUNC_0(VAR_4, ((void*)0), &VAR_6[0]);
    }



    VAR_7 = FUNC_3(VAR_4, 11);
    FUNC_7(VAR_7 == VAR_0, "got (0x%08x)\n", VAR_7);


    for(VAR_8 = 0; VAR_8 < 5; VAR_8++)
    {
        VAR_7 = FUNC_0(VAR_4, VAR_5, &VAR_6[VAR_8]);
        FUNC_7(VAR_7 == VAR_1, "got (0x%08x)\n", VAR_7);
    }

    FUNC_5(VAR_4);


    for(VAR_8 = 5; VAR_8 < 10; VAR_8++)
    {
        VAR_7 = FUNC_0(VAR_4, VAR_5, &VAR_6[VAR_8]);
        FUNC_7(VAR_7 == VAR_1, "got (0x%08x)\n", VAR_7);
    }

    FUNC_7(VAR_2.ref == 10, "Got %d\n", VAR_2.ref);

    VAR_2.completed = 0;
    FUNC_4(VAR_4);
    FUNC_8();
    FUNC_7(VAR_2.completed == 10, "Got %d\n", VAR_2.completed);


    for(VAR_8 = 4; VAR_8 < 8; VAR_8++)
    {
        VAR_7 = FUNC_3(VAR_4, VAR_6[VAR_8]);
        FUNC_7(VAR_7 == VAR_1, "got (0x%08x)\n", VAR_7);
    }

    VAR_2.completed = 0;
    FUNC_4(VAR_4);
    FUNC_8();
    FUNC_7(VAR_2.completed == 6, "Got %d\n", VAR_2.completed);

    if(0)
    {


        FUNC_3(VAR_4, VAR_6[5]);
    }


    for(VAR_8 = 0; VAR_8 < 10; VAR_8++)
    {
        if(VAR_8<4||VAR_8>7)
        {
            VAR_7 = FUNC_3(VAR_4, VAR_6[VAR_8]);
            FUNC_7(VAR_7 == VAR_1, "%d: got (0x%08x)\n", VAR_8, VAR_7);
        }
    }

    FUNC_7(VAR_2.ref == 0, "Got %d\n", VAR_2.ref);

    VAR_2.completed = 0;
    FUNC_4(VAR_4);
    FUNC_8();
    FUNC_7(VAR_2.completed == 0, "Got %d\n", VAR_2.completed);


    VAR_7 = FUNC_0(VAR_4, VAR_5, &VAR_6[0]);
    FUNC_7(VAR_7 == VAR_1, "Got 0x%08x\n", VAR_7);
    FUNC_7(VAR_2.ref == 1, "Got %d\n", VAR_2.ref);

    VAR_7 = FUNC_1(VAR_4);
    FUNC_7(VAR_7 == VAR_1, "Got 0x%08x\n", VAR_7);
    FUNC_7(VAR_2.ref == 0, "Got %d\n", VAR_2.ref);

    VAR_9 = FUNC_2(VAR_4);
    FUNC_7(!VAR_9, "Got %d\n", VAR_9);
}
