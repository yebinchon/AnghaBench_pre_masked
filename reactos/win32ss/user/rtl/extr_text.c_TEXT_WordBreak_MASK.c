
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int SIZE ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,scalar_t__*,unsigned int,int ,int *,int *,int *) ;
 int FUNC_1 (int ,scalar_t__*,unsigned int,int ,int *,int *,int *,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5 (HDC VAR_10, WCHAR *VAR_11, unsigned int VAR_12,
                            unsigned int *VAR_13,
                            int VAR_14, int VAR_15, unsigned int VAR_16,
                            unsigned int *VAR_17, SIZE *VAR_18)
{
    WCHAR *VAR_19;
    int VAR_20;
    FUNC_3 (VAR_15 & VAR_4);
    FUNC_3 (VAR_16 < *VAR_13);




    VAR_19 = VAR_11 + VAR_16;
    VAR_20 = VAR_9;
    if (!VAR_16)
        VAR_20 = VAR_6;
    else if (*VAR_19 == VAR_8)
        VAR_19--;
    else
    {
        while (VAR_19 > VAR_11 && *(--VAR_19) != VAR_8 && (!FUNC_2(VAR_19[1]) ||
                VAR_19[1] == L'\0' || FUNC_4(VAR_7, VAR_19[1]) != ((void*)0)))
            ;
        VAR_20 = (VAR_19 != VAR_11 || *VAR_19 == VAR_8 || FUNC_2(VAR_19[1]));
    }

    if (VAR_20)
    {
        int VAR_21;

        if (!(VAR_15 & (VAR_3 | VAR_0)) || *VAR_19 != VAR_8)
            VAR_19++;
        VAR_21 = (unsigned int) (VAR_19 - VAR_11) < *VAR_13 && *VAR_19 == VAR_8;
        *VAR_13 = VAR_19 - VAR_11;

        *VAR_17 = *VAR_13;
        if (VAR_21)
            (*VAR_17)++;
    }

    else
    {
        if ((VAR_15 & (VAR_1 | VAR_5 | VAR_2)) ==
            VAR_1)
        {


            if (!VAR_16)
                ++VAR_16;
            *VAR_13 = VAR_16;
            *VAR_17 = VAR_16;





        }

        else
        {

            const WCHAR *VAR_22 = VAR_11 + *VAR_13;
            VAR_19 = VAR_11 + VAR_16;
            while (VAR_19 < VAR_22 && *VAR_19 != VAR_8)
                VAR_19++;
            *VAR_17 = VAR_19 - VAR_11;
            if (VAR_19 < VAR_22)
                (*VAR_17)++;


            *VAR_13 = VAR_19 - VAR_11;



        }
    }




    FUNC_0 (VAR_10, VAR_11, *VAR_13, 0, ((void*)0), ((void*)0), VAR_18);

}
