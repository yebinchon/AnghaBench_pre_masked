
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int SHCONTF ;
typedef int LPITEMIDLIST ;
typedef int LPCITEMIDLIST ;
typedef int IShellView ;
typedef int IShellItem ;
typedef int IShellFolder ;
typedef int IEnumIDList ;
typedef int IDataObject ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int,int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int *,int *,void**) ;
 scalar_t__ FUNC_5 (int *,int *,int,int **) ;
 scalar_t__ FUNC_6 (int *,int *,int,int *,int *,int *,void**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (int **) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 int FUNC_12 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_13 (int *,int ,int *,void**) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static void FUNC_16(void)
{
    IShellFolder *VAR_14;
    IShellItem *VAR_15;
    IShellView *VAR_16;
    HRESULT VAR_17;

    if(!&FUNC_13)
    {
        FUNC_15("No SHGetItemFromDataObject.\n");
        return;
    }

    if(0)
    {

        FUNC_13(((void*)0), 0, &VAR_8, ((void*)0));
    }

    VAR_17 = FUNC_13(((void*)0), 0, &VAR_8, (void**)&VAR_16);
    FUNC_12(VAR_17 == VAR_6, "got 0x%08x\n", VAR_17);

    FUNC_10(&VAR_14);

    VAR_17 = FUNC_4(VAR_14, ((void*)0), &VAR_9, (void**)&VAR_16);
    FUNC_12(VAR_17 == VAR_13, "got 0x%08x\n", VAR_17);
    if(FUNC_11(VAR_17))
    {
        IEnumIDList *VAR_18;
        IDataObject *VAR_19;
        SHCONTF VAR_20;

        VAR_20 = VAR_12 | VAR_10 | VAR_11;
        VAR_17 = FUNC_5(VAR_14, ((void*)0), VAR_20, &VAR_18);
        FUNC_12(VAR_17 == VAR_13, "got 0x%08x\n", VAR_17);
        if(FUNC_11(VAR_17))
        {
            LPITEMIDLIST VAR_21[5];
            UINT VAR_22 = 0, VAR_23;

            for(VAR_22 = 0; VAR_22 < 5; VAR_22++)
                if(FUNC_1(VAR_18, 1, &VAR_21[VAR_22], ((void*)0)) != VAR_13)
                    break;

            if(VAR_22)
            {
                VAR_17 = FUNC_6(VAR_14, ((void*)0), 1, (LPCITEMIDLIST*)VAR_21,
                                                  &VAR_7, ((void*)0), (void**)&VAR_19);
                FUNC_12(VAR_17 == VAR_13, "got 0x%08x\n", VAR_17);
                if(FUNC_11(VAR_17))
                {
                    VAR_17 = FUNC_13(VAR_19, VAR_0, &VAR_8, (void**)&VAR_15);
                    FUNC_12(VAR_17 == VAR_13, "got 0x%08x\n", VAR_17);
                    if(FUNC_11(VAR_17)) FUNC_8(VAR_15);
                    VAR_17 = FUNC_13(VAR_19, VAR_4, &VAR_8, (void**)&VAR_15);
                    FUNC_12(VAR_17 == VAR_13, "got 0x%08x\n", VAR_17);
                    if(FUNC_11(VAR_17)) FUNC_8(VAR_15);
                    VAR_17 = FUNC_13(VAR_19, VAR_1, &VAR_8, (void**)&VAR_15);
                    FUNC_12(VAR_17 == VAR_13, "got 0x%08x\n", VAR_17);
                    if(FUNC_11(VAR_17)) FUNC_8(VAR_15);
                    VAR_17 = FUNC_13(VAR_19, VAR_2, &VAR_8, (void**)&VAR_15);
                    FUNC_12(VAR_17 == VAR_13, "got 0x%08x\n", VAR_17);
                    if(FUNC_11(VAR_17)) FUNC_8(VAR_15);
                    VAR_17 = FUNC_13(VAR_19, VAR_3, &VAR_8, (void**)&VAR_15);
                    FUNC_12(VAR_17 == VAR_13, "got 0x%08x\n", VAR_17);
                    if(FUNC_11(VAR_17)) FUNC_8(VAR_15);

                    FUNC_0(VAR_19);
                }
            }
            else
                FUNC_14("No file(s) found - skipping single-file test.\n");

            if(VAR_22 > 1)
            {
                VAR_17 = FUNC_6(VAR_14, ((void*)0), VAR_22, (LPCITEMIDLIST*)VAR_21,
                                                  &VAR_7, ((void*)0), (void**)&VAR_19);
                FUNC_12(VAR_17 == VAR_13, "got 0x%08x\n", VAR_17);
                if(FUNC_11(VAR_17))
                {
                    VAR_17 = FUNC_13(VAR_19, VAR_0, &VAR_8, (void**)&VAR_15);
                    FUNC_12(VAR_17 == VAR_13, "got 0x%08x\n", VAR_17);
                    if(FUNC_11(VAR_17)) FUNC_8(VAR_15);
                    VAR_17 = FUNC_13(VAR_19, VAR_4, &VAR_8, (void**)&VAR_15);
                    FUNC_12(VAR_17 == VAR_13, "got 0x%08x\n", VAR_17);
                    if(FUNC_11(VAR_17)) FUNC_8(VAR_15);
                    VAR_17 = FUNC_13(VAR_19, VAR_1, &VAR_8, (void**)&VAR_15);
                    FUNC_12(VAR_17 == VAR_13, "got 0x%08x\n", VAR_17);
                    if(FUNC_11(VAR_17)) FUNC_8(VAR_15);
                    VAR_17 = FUNC_13(VAR_19, VAR_2, &VAR_8, (void**)&VAR_15);
                    FUNC_12(VAR_17 == VAR_13, "got 0x%08x\n", VAR_17);
                    if(FUNC_11(VAR_17)) FUNC_8(VAR_15);
                    VAR_17 = FUNC_13(VAR_19, VAR_3, &VAR_8, (void**)&VAR_15);
                    FUNC_12(VAR_17 == VAR_5, "got 0x%08x\n", VAR_17);
                    if(FUNC_11(VAR_17)) FUNC_8(VAR_15);
                    FUNC_0(VAR_19);
                }
            }
            else
                FUNC_14("zero or one file found - skipping multi-file test.\n");

            for(VAR_23 = 0; VAR_23 < VAR_22; VAR_23++)
                FUNC_3(VAR_21[VAR_23]);

            FUNC_2(VAR_18);
        }

        FUNC_9(VAR_16);
    }

    FUNC_7(VAR_14);
}
