
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_10__ {int dwAddr; int dwIndex; TYPE_1__* table; } ;
struct TYPE_9__ {int dwIndex; } ;
typedef int * PTCHAR ;
typedef TYPE_2__* PMIB_IPNETTABLE ;
typedef TYPE_2__* PMIB_IPNETROW ;
typedef TYPE_2__ MIB_IPNETROW ;
typedef int INT ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int*,scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,TYPE_2__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,...) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,char*,int *) ;
 scalar_t__ FUNC_14 (int *,char*,int) ;

INT FUNC_15(PTCHAR VAR_7, PTCHAR VAR_8)
{
    PMIB_IPNETROW VAR_9 = ((void*)0);
    PMIB_IPNETTABLE VAR_10 = ((void*)0);
    ULONG VAR_11 = 0;
    DWORD VAR_12 = 0;
    BOOL VAR_13 = VAR_3;




    if (VAR_7 != ((void*)0))
    {

        if (FUNC_14(VAR_7, "*", 1) == 0)
            VAR_13 = VAR_6;
        else if ((VAR_12 = FUNC_12(VAR_7)) == VAR_4)
        {
            FUNC_10(FUNC_9("ARP: bad IP address: %s\n"), VAR_7);
            FUNC_11(VAR_1);
        }
    }
    else
    {
        FUNC_7();
        FUNC_11(VAR_1);
    }



    FUNC_3(((void*)0), &VAR_11, 0);


    VAR_10 = (PMIB_IPNETTABLE) FUNC_5(FUNC_4(), 0, VAR_11);
    if (VAR_10 == ((void*)0))
        goto cleanup;

    FUNC_8(VAR_10, sizeof(*VAR_10));

    if (FUNC_3(VAR_10, &VAR_11, VAR_6) != VAR_5)
    {
        FUNC_10(FUNC_9("failed to allocate memory for GetIpNetTable\n"));
        FUNC_1();
        goto cleanup;
    }


    VAR_9 = (MIB_IPNETROW *) FUNC_5(FUNC_4(), 0, sizeof(MIB_IPNETROW));
    if (VAR_9 == ((void*)0))
        goto cleanup;

    FUNC_8(VAR_9, sizeof(MIB_IPNETROW));




    if (VAR_8)
    {
        if (FUNC_13(VAR_8, "%lx", &VAR_9->dwIndex) == VAR_0)
        {
            goto cleanup;
        }
    }
    else
    {


        VAR_9->dwIndex = VAR_10->table[0].dwIndex;
    }

    if (VAR_13 != VAR_3)
    {

        if (FUNC_2(VAR_9->dwIndex) != VAR_5)
        {
            FUNC_1();
            goto cleanup;
        }
        else
        {
            FUNC_6(FUNC_4(), 0, VAR_9);
            return VAR_2;
        }
    }
    else

        VAR_9->dwAddr = VAR_12;


    if (FUNC_0(VAR_9) != VAR_5)
    {
        FUNC_1();
        goto cleanup;
    }

    FUNC_6(FUNC_4(), 0, VAR_9);

    return VAR_2;

cleanup:
    if (VAR_10 != ((void*)0))
        FUNC_6(FUNC_4(), 0, VAR_10);
    if (VAR_9 != ((void*)0))
        FUNC_6(FUNC_4(), 0, VAR_9);
    return VAR_1;
}
