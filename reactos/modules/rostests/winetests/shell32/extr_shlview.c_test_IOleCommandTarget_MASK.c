
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cmdID; } ;
typedef TYPE_1__ OLECMD ;
typedef int IShellView ;
typedef int IShellFolder ;
typedef int IOleCommandTarget ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int ,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *,int,TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int *,void**) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (int **) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_11(void)
{
    IShellFolder *VAR_6;
    IShellView *VAR_7;
    IOleCommandTarget *VAR_8;
    HRESULT VAR_9;

    VAR_9 = FUNC_7(&VAR_6);
    FUNC_10(VAR_9 == VAR_5, "got (0x%08x)\n", VAR_9);

    VAR_9 = FUNC_3(VAR_6, ((void*)0), &VAR_3, (void**)&VAR_7);
    FUNC_10(VAR_9 == VAR_5, "got (0x%08x)\n", VAR_9);
    if(FUNC_8(VAR_9))
    {
        VAR_9 = FUNC_5(VAR_7, &VAR_2, (void**)&VAR_8);
        FUNC_10(VAR_9 == VAR_5 || FUNC_9(VAR_9 == VAR_1) , "Got 0x%08x\n", VAR_9);
        if(FUNC_8(VAR_9))
        {
            OLECMD VAR_10;

            VAR_9 = FUNC_1(VAR_8, ((void*)0), 0, ((void*)0), ((void*)0));
            FUNC_10(VAR_9 == VAR_0, "Got 0x%08x\n", VAR_9);

            VAR_10.cmdID = 1;
            VAR_9 = FUNC_1(VAR_8, ((void*)0), 0, &VAR_10, ((void*)0));
            FUNC_10(VAR_9 == VAR_4, "Got 0x%08x\n", VAR_9);

            VAR_10.cmdID = 1;
            VAR_9 = FUNC_1(VAR_8, ((void*)0), 1, &VAR_10, ((void*)0));
            FUNC_10(VAR_9 == VAR_4, "Got 0x%08x\n", VAR_9);

            VAR_9 = FUNC_0(VAR_8, ((void*)0), 0, 0, ((void*)0), ((void*)0));
            FUNC_10(VAR_9 == VAR_4, "Got 0x%08x\n", VAR_9);

            FUNC_2(VAR_8);
        }

        FUNC_6(VAR_7);
    }

    FUNC_4(VAR_6);
}
