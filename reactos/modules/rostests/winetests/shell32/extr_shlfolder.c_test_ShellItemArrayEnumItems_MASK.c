
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int ULONG ;
typedef int UINT ;
typedef int REFIID ;
typedef int LPITEMIDLIST ;
typedef int LPCITEMIDLIST ;
typedef int IShellItemArray ;
typedef void IShellItem ;
typedef int IShellFolder ;
typedef void IEnumShellItems ;
typedef int IEnumIDList ;
typedef void* HRESULT ;


 int FUNC_0 () ;
 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int,char*) ;
 void* FUNC_3 (int *,int,int *,int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (void*,void**) ;
 void* FUNC_6 (void*,int,void**,int*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 int VAR_2 ;
 int FUNC_9 (int ) ;
 void* FUNC_10 (int *,int ,int *,int ,void**) ;
 void* FUNC_11 (int *,int *,int,int **) ;
 void* FUNC_12 (int *,int *,int *,char*,int *,int *,int ) ;
 int FUNC_13 (int *) ;
 void* FUNC_14 (int *,void**) ;
 int FUNC_15 (int *,int*) ;
 void* FUNC_16 (int *,int,void**) ;
 int FUNC_17 (int *) ;
 void* FUNC_18 (void*,void*,int ,int*) ;
 int FUNC_19 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_20 (int **) ;
 scalar_t__ FUNC_21 (void*) ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 (char*,char const*) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (int,char*,...) ;
 void* FUNC_26 (int *,int *,int,int *,int **) ;
 int FUNC_27 (char*) ;

__attribute__((used)) static void FUNC_28(void)
{
    IShellFolder *VAR_8, *VAR_9;
    IEnumIDList *VAR_10;
    WCHAR VAR_11[VAR_3];
    HRESULT VAR_12;
    LPITEMIDLIST VAR_13;
    static const WCHAR VAR_14[] = {'t','e','s','t','d','i','r',0};

    if(!&FUNC_26)
    {
        FUNC_27("No SHCreateShellItemArray, skipping test...\n");
        return;
    }

    FUNC_0();

    FUNC_20(&VAR_8);

    FUNC_2(VAR_3, VAR_11);
    FUNC_24(VAR_11);
    FUNC_23(VAR_11, VAR_14);

    VAR_12 = FUNC_12(VAR_8, ((void*)0), ((void*)0), VAR_11, ((void*)0), &VAR_13, 0);
    FUNC_25(VAR_12 == VAR_7, "got 0x%08x\n", VAR_12);
    if(FUNC_21(VAR_12))
    {
        VAR_12 = FUNC_10(VAR_8, VAR_13, ((void*)0), (REFIID)&VAR_2,
                                       (void**)&VAR_9);
        FUNC_25(VAR_12 == VAR_7, "Got 0x%08x\n", VAR_12);
        FUNC_9(VAR_13);
    }
    FUNC_13(VAR_8);
    if (FUNC_1(VAR_12)) return;

    VAR_12 = FUNC_11(VAR_9, ((void*)0), VAR_4 | VAR_5, &VAR_10);
    FUNC_25(VAR_12 == VAR_7, "Got %08x\n", VAR_12);
    if(FUNC_21(VAR_12))
    {
        IShellItemArray *VAR_15;
        LPITEMIDLIST VAR_16[5];
        UINT VAR_17, VAR_18, VAR_19;

        for(VAR_17 = 0; VAR_17 < 5; VAR_17++)
            if(FUNC_3(VAR_10, 1, &VAR_16[VAR_17], ((void*)0)) != VAR_7)
                break;
        FUNC_25(VAR_17 == 5, "Got %d pidls\n", VAR_17);
        FUNC_4(VAR_10);


        VAR_12 = FUNC_26(((void*)0), VAR_9, VAR_17, (LPCITEMIDLIST*)VAR_16, &VAR_15);
        FUNC_25(VAR_12 == VAR_7, "Got 0x%08x\n", VAR_12);
        if(FUNC_21(VAR_12))
        {
            IEnumShellItems *VAR_20;
            IShellItem *VAR_21[10];
            ULONG VAR_22;

            FUNC_15(VAR_15, &VAR_18);
            FUNC_25(VAR_18 == VAR_17, "Got %d, expected %d\n", VAR_18, VAR_17);

            VAR_20 = ((void*)0);
            VAR_12 = FUNC_14(VAR_15, &VAR_20);
            FUNC_25(VAR_12 == VAR_7, "Got 0x%08x\n", VAR_12);
            FUNC_25(VAR_20 != ((void*)0), "Got NULL\n");
            if(FUNC_21(VAR_12))
            {
                IEnumShellItems *VAR_23;


                for(VAR_19 = 0; VAR_19 < 10; VAR_19++) VAR_21[VAR_19] = (void*)0xdeadbeef;
                VAR_12 = FUNC_6(VAR_20, 2, VAR_21, ((void*)0));
                FUNC_25(VAR_12 == VAR_0 || FUNC_22(VAR_12 == VAR_7) , "Got 0x%08x\n", VAR_12);
                for(VAR_19 = 0; VAR_19 < 2; VAR_19++)
                {
                    FUNC_25(VAR_21[VAR_19] == (void*)0xdeadbeef ||
                       FUNC_22(VAR_21[VAR_19] != (void*)0xdeadbeef && VAR_21[VAR_19] != ((void*)0)),
                       "Got %p (%d)\n", VAR_21[VAR_19], VAR_19);

                    if(VAR_21[VAR_19] != (void*)0xdeadbeef)
                        FUNC_19(VAR_21[VAR_19]);
                }
                FUNC_25(VAR_21[2] == (void*)0xdeadbeef, "Got %p\n", VAR_21[2]);

                FUNC_8(VAR_20);
                for(VAR_19 = 0; VAR_19 < 10; VAR_19++) VAR_21[VAR_19] = (void*)0xdeadbeef;
                VAR_12 = FUNC_6(VAR_20, 1, VAR_21, ((void*)0));
                FUNC_25(VAR_12 == VAR_7, "Got 0x%08x\n", VAR_12);
                FUNC_25(VAR_21[0] != ((void*)0) && VAR_21[0] != (void*)0xdeadbeef, "Got %p\n", VAR_21[0]);
                if(VAR_21[0] != ((void*)0) && VAR_21[0] != (void*)0xdeadbeef)
                    FUNC_19(VAR_21[0]);
                FUNC_25(VAR_21[1] == (void*)0xdeadbeef, "Got %p\n", VAR_21[1]);

                FUNC_8(VAR_20);
                VAR_22 = 0;
                for(VAR_19 = 0; VAR_19 < 10; VAR_19++) VAR_21[VAR_19] = (void*)0xdeadbeef;
                VAR_12 = FUNC_6(VAR_20, VAR_18, VAR_21, &VAR_22);
                FUNC_25(VAR_12 == VAR_7, "Got 0x%08x\n", VAR_12);
                FUNC_25(VAR_22 == VAR_18, "Got %d\n", VAR_22);
                for(VAR_19 = 0;VAR_19 < VAR_18; VAR_19++)
                {
                    FUNC_25(VAR_21[VAR_19] != ((void*)0) && VAR_21[VAR_19] != (void*)0xdeadbeef,
                       "Got %p at %d\n", VAR_21[VAR_19], VAR_19);

                    if(VAR_21[VAR_19] != ((void*)0) && VAR_21[VAR_19] != (void*)0xdeadbeef)
                        FUNC_19(VAR_21[VAR_19]);
                }
                FUNC_25(VAR_21[VAR_19] == (void*)0xdeadbeef, "Got %p\n", VAR_21[VAR_19]);


                FUNC_8(VAR_20);
                for(VAR_19 = 0; VAR_19 < VAR_18; VAR_19++)
                {
                    IShellItem *VAR_24;
                    int VAR_25;

                    VAR_12 = FUNC_16(VAR_15, VAR_19, &VAR_24);
                    FUNC_25(VAR_12 == VAR_7, "Got 0x%08x\n", VAR_12);
                    VAR_12 = FUNC_6(VAR_20, 1, VAR_21, &VAR_22);
                    FUNC_25(VAR_12 == VAR_7, "Got 0x%08x\n", VAR_12);
                    FUNC_25(VAR_22 == 1, "Got %d\n", VAR_22);

                    VAR_12 = FUNC_18(VAR_24, VAR_21[0], 0, &VAR_25);
                    FUNC_25(VAR_12 == VAR_7, "Got 0x%08x\n", VAR_12);
                    FUNC_25(VAR_25 == 0, "Got %d\n", VAR_25);

                    FUNC_19(VAR_24);
                    FUNC_19(VAR_21[0]);
                }

                VAR_21[0] = (void*)0xdeadbeef;
                VAR_12 = FUNC_6(VAR_20, 1, VAR_21, &VAR_22);
                FUNC_25(VAR_12 == VAR_6, "Got 0x%08x\n", VAR_12);
                FUNC_25(VAR_22 == 0, "Got %d\n", VAR_22);
                FUNC_25(VAR_21[0] == (void*)0xdeadbeef, "Got %p\n", VAR_21[0]);


                VAR_23 = (void*)0xdeadbeef;
                VAR_12 = FUNC_5(VAR_20, &VAR_23);
                FUNC_25(VAR_12 == VAR_1, "Got 0x%08x\n", VAR_12);
                FUNC_25(VAR_23 == ((void*)0) || FUNC_22(VAR_23 == (void*)0xdeadbeef) , "Got %p\n", VAR_23);

                FUNC_7(VAR_20);
            }

            FUNC_17(VAR_15);
        }

        for(VAR_19 = 0; VAR_19 < VAR_17; VAR_19++)
            FUNC_9(VAR_16[VAR_19]);
    }
}
