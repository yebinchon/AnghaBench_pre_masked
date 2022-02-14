
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apdwStyles ;
typedef int albStyle ;
typedef int alHatch ;
typedef int aflJoin ;
typedef int aflEndCap ;
typedef int adwWidth ;
typedef int adwStyleCount ;
typedef int ULONG_PTR ;
typedef int ULONG ;
typedef int UINT ;
typedef int* PULONG ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int,int,int,int*,int,int) ;
 int FUNC_1 (char*,int*,int*) ;

void FUNC_2()
{
    ULONG VAR_17[] = {VAR_1, VAR_9, 0x20000};
    ULONG VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
    DWORD VAR_27[17] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    DWORD VAR_28[17] = {0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};

    FUNC_1("adwStyles=%p, adwStyles2=%p\n", VAR_27, VAR_28);


    for (VAR_18 = 0; VAR_18 < 3; VAR_18++)
    {
        ULONG VAR_29[] = {VAR_15, VAR_2, VAR_5, VAR_3, VAR_4, VAR_14, VAR_10, VAR_16, VAR_0, 9};

        for (VAR_19 = 0; VAR_19 < 10; VAR_19++)
        {
            ULONG VAR_30[] = {VAR_7, VAR_8, VAR_6, 0x300, 0x400};
            for (VAR_20 = 0; VAR_20 < sizeof(VAR_30) / sizeof(VAR_30[0]); VAR_20++)
            {
                ULONG VAR_31[] = {VAR_13, VAR_11, VAR_12, 0x3000, 0x4000};
                for (VAR_21 = 0; VAR_21 < sizeof(VAR_31) / sizeof(VAR_31[0]); VAR_21++)
                {
                    DWORD VAR_32[] = {0, 1, 2};
                    ULONG VAR_33 = VAR_17[VAR_18] | VAR_29[VAR_19] | VAR_30[VAR_20] | VAR_31[VAR_21];

                    for (VAR_22 = 0; VAR_22 < sizeof(VAR_32) / sizeof(VAR_32[0]); VAR_22++)
                    {
                        ULONG VAR_34[] = {0, 1, 2, 16, 17};
                        for (VAR_23 = 0; VAR_23 < sizeof(VAR_34) / sizeof(VAR_34[0]); VAR_23++)
                        {
                            PULONG VAR_35[] = {((void*)0), VAR_27, VAR_28};
                            for (VAR_24 = 0; VAR_24 < sizeof(VAR_35) / sizeof(VAR_35[0]); VAR_24++)
                            {
                                UINT VAR_36[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
                                for (VAR_25 = 0; VAR_25 < sizeof(VAR_36) / sizeof(VAR_36[0]); VAR_25++)
                                {
                                    ULONG_PTR VAR_37[] = {0, 1, 6, 7, 8, 9, 10, 11, 12, 13};

                                    for (VAR_26 = 0; VAR_26 < sizeof(VAR_37) / sizeof(VAR_37[0]); VAR_26++)
                                    {
                                        FUNC_0(VAR_33,
                                                                 VAR_32[VAR_22],
                                                                 VAR_34[VAR_23],
                                                                 VAR_35[VAR_24],
                                                                 VAR_36[VAR_25],
                                                                 VAR_37[VAR_26]);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

}
