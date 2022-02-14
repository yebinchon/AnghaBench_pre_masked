
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ uType; int * pOleStr; } ;
struct TYPE_5__ {scalar_t__ fmt; TYPE_1__ str; } ;
typedef TYPE_2__ SHELLDETAILS ;
typedef int SHCOLSTATEF ;
typedef int * LPITEMIDLIST ;
typedef int IShellFolder2 ;
typedef int IPersistFolder2 ;
typedef int INT ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int **) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,int*) ;
 int FUNC_9 (int *,int *,int,TYPE_2__*) ;
 int FUNC_10 (int *,int *,void**) ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,int **) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (int,char*,...) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static void FUNC_18(void)
{
    IShellFolder2 *VAR_14;
    IPersistFolder2 *VAR_15;
    SHELLDETAILS VAR_16;
    SHCOLSTATEF VAR_17;
    LPITEMIDLIST VAR_18, VAR_19;
    HRESULT VAR_20;
    INT VAR_21;

    FUNC_1( ((void*)0) );

    VAR_20 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_6, (void**)&VAR_14);
    if (VAR_20 != VAR_13)
    {
        FUNC_17("Failed to created IShellFolder2 for Printers folder\n");
        FUNC_2();
        return;
    }

if (0)
{

    FUNC_9(VAR_14, ((void*)0), 0, ((void*)0));
    FUNC_8(VAR_14, 0, ((void*)0));
    FUNC_5(VAR_15, ((void*)0));
}


    VAR_20 = FUNC_9(VAR_14, ((void*)0), 6, &VAR_16);
    FUNC_16(VAR_20 == VAR_4, "got 0x%08x\n", VAR_20);

    VAR_20 = FUNC_8(VAR_14, 6, &VAR_17);
    FUNC_16(FUNC_15(VAR_20 == VAR_4) || VAR_20 == VAR_3 , "got 0x%08x\n", VAR_20);

    VAR_16.str.pOleStr = ((void*)0);
    VAR_20 = FUNC_9(VAR_14, ((void*)0), 0, &VAR_16);
    FUNC_16(VAR_20 == VAR_13 || FUNC_15(VAR_20 == VAR_4) , "got 0x%08x\n", VAR_20);
    if (FUNC_12()) FUNC_13(VAR_16.str.pOleStr);


    if (VAR_20 == VAR_13)
    {
        FUNC_16(VAR_16.str.uType == VAR_11, "got %d\n", VAR_16.str.uType);

        for(VAR_21 = 0; VAR_21 < 6; VAR_21++)
        {
            VAR_20 = FUNC_9(VAR_14, ((void*)0), VAR_21, &VAR_16);
            FUNC_16(VAR_20 == VAR_13, "got 0x%08x\n", VAR_20);


            FUNC_16(VAR_16.fmt == VAR_7, "got 0x%x\n", VAR_16.fmt);


            if (FUNC_12()) FUNC_13(VAR_16.str.pOleStr);

            VAR_20 = FUNC_8(VAR_14, VAR_21, &VAR_17);
            FUNC_16(VAR_20 == VAR_13, "got 0x%08x\n", VAR_20);

            if (VAR_21 == 1)
                FUNC_16(VAR_17 == (VAR_9 | VAR_8), "got 0x%x\n", VAR_17);
            else
                FUNC_16(VAR_17 == (VAR_10 | VAR_8), "got 0x%x\n", VAR_17);
        }
    }


    VAR_20 = FUNC_10(VAR_14, &VAR_5, (void**)&VAR_15);
    FUNC_16(VAR_20 == VAR_13, "got 0x%08x\n", VAR_20);


    VAR_18 = (void*)0xdeadbeef;
    VAR_20 = FUNC_5(VAR_15, &VAR_18);
    FUNC_16(VAR_20 == VAR_12, "got 0x%08x\n", VAR_20);
    FUNC_16(VAR_18 == ((void*)0), "got %p\n", VAR_18);

    VAR_20 = FUNC_14(((void*)0), VAR_2, &VAR_19);
    FUNC_16(VAR_20 == VAR_13, "got 0x%08x\n", VAR_20);

    VAR_20 = FUNC_6(VAR_15, VAR_19);
    FUNC_16(VAR_20 == VAR_13, "got 0x%08x\n", VAR_20);

    VAR_20 = FUNC_5(VAR_15, &VAR_18);
    FUNC_16(VAR_20 == VAR_13, "got 0x%08x\n", VAR_20);

    FUNC_16(FUNC_4(VAR_18, VAR_19), "expected same PIDL\n");
    FUNC_7(VAR_15);

    FUNC_3(VAR_18);
    FUNC_3(VAR_19);
    FUNC_11(VAR_14);

    FUNC_2();
}
