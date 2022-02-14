
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szBuffer ;
typedef int TCHAR ;
typedef int LPBYTE ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int ,int ,int *,int *,int) ;
 unsigned long VAR_11 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ,int **) ;
 int FUNC_7 (int *,int *,int *,unsigned long*,int ,unsigned long*) ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;
 int * FUNC_9 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

extern void FUNC_10(void)
{
    HKEY VAR_15 = ((void*)0);
    int VAR_16 = -1;

    if (FUNC_6(VAR_4, VAR_12, 0, VAR_8, &VAR_15) == VAR_2)
    {
        TCHAR VAR_17[VAR_9];
        DWORD VAR_18;
        unsigned long VAR_19 = VAR_11, VAR_20 = 1024;


        if (FUNC_4(VAR_4, VAR_12, FUNC_9("Font"), VAR_17, (sizeof(VAR_17)/sizeof(VAR_17[0]))) == VAR_2)
        {

            VAR_14 = FUNC_3(VAR_13, VAR_7);


            VAR_16 = FUNC_1(VAR_14, -1, VAR_17);
            if(VAR_16 != VAR_1)
            {
                FUNC_2(VAR_14, VAR_16);
                FUNC_0(VAR_13);
            }
        }


        if (FUNC_4(VAR_4, VAR_12, FUNC_9("CodePage"), VAR_17, (sizeof(VAR_17)/sizeof(VAR_17[0]))) == VAR_2)
        {

            VAR_14 = FUNC_3(VAR_13, VAR_6);

            VAR_16 = FUNC_1(VAR_14, -1, VAR_17);
            if(VAR_16 != VAR_1)
            {
                FUNC_2(VAR_14, VAR_16);
            }
        }

        FUNC_7(VAR_15, FUNC_9("Advanced"), ((void*)0), &VAR_19, (LPBYTE)&VAR_18, &VAR_20);

        if(VAR_18 != VAR_3)
            FUNC_8(VAR_13, VAR_5, VAR_0, VAR_10, 0);

    FUNC_5(VAR_15);
    }
    else
    {

        VAR_14 = FUNC_3(VAR_13, VAR_7);

        VAR_16 = FUNC_1(VAR_14, -1, FUNC_9("Arial"));
        if(VAR_16 != VAR_1)
        {
            FUNC_2(VAR_14, VAR_16);
            FUNC_0(VAR_13);
        }
    }
}
