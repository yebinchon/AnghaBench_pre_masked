
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef char* LPWSTR ;
typedef char* LPCWSTR ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char* const) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 (char* const) ;

int FUNC_15(int VAR_10, const LPWSTR VAR_11[])
{
    LPCWSTR VAR_12 = ((void*)0);
    LPCWSTR VAR_13 = ((void*)0);
    WCHAR VAR_14[50];
    int VAR_15, VAR_16;
    int VAR_17 = VAR_1;


    FUNC_1();




    FUNC_8(FUNC_6(((void*)0)), VAR_3, VAR_14, FUNC_0(VAR_14));
    FUNC_10(VAR_14);



    VAR_16 = 0;

    FUNC_4();


    if (VAR_10 < 2)
    {
        FUNC_11();
        FUNC_7();
    }

    else
    {
        for (VAR_15 = 1; VAR_15 < VAR_10; VAR_15++)
        {

            if ((VAR_11[VAR_15][0] == '/')||
                (VAR_11[VAR_15][0] == '-'))
            {
                VAR_13 = VAR_11[VAR_15] + 1;
            }
            else
            {

                FUNC_2(VAR_8, VAR_6, VAR_11[VAR_15]);
                VAR_17 = VAR_0;
                goto done;
            }



            if (FUNC_13(VAR_13, L"?") == 0)
            {
                FUNC_3(VAR_9, VAR_5);
                VAR_17 = VAR_1;
                goto done;
            }

            else if (FUNC_13(VAR_13, L"s") == 0)
            {
                if ((VAR_15 + 1) < VAR_10)
                {
                    VAR_15++;
                    VAR_12 = VAR_11[VAR_15];
                }
            }

            else if (FUNC_13(VAR_13, L"t") == 0)
            {
                if ((VAR_15 + 1) < VAR_10)
                {
                    VAR_15++;
                    VAR_16 = FUNC_14(VAR_11[VAR_15]);



                    if (VAR_16 < 0)
                        VAR_16 = 0;
                }
            }
            else
            {

                FUNC_2(VAR_8, VAR_6, VAR_13);
                VAR_17 = VAR_0;
                goto done;
            }
        }


        FUNC_11();


        if (VAR_12 != ((void*)0))
        {


            if (VAR_16 > 0)
                FUNC_12(VAR_16 * 1000);

            if (FUNC_9(VAR_12) == VAR_2)
            {
                VAR_17 = VAR_0;
                goto done;
            }
        }
        else
        {

            FUNC_2(VAR_8, VAR_7, VAR_12);
            VAR_17 = VAR_0;
            goto done;
        }
    }


    FUNC_3(VAR_9, VAR_4);

done:
    FUNC_5();

    return VAR_17;
}
