
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int * LPWSTR ;
typedef int * LPCWSTR ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 () ;
 int* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int,int *,int *,int*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int,int const*,int *,int) ;

__attribute__((used)) static void FUNC_7(int VAR_0, LPWSTR VAR_1, LPCWSTR VAR_2, const WORD * VAR_3,
                      BYTE * VAR_4, int VAR_5, const BOOL * VAR_6)
{
    int VAR_7 = 0;
    int VAR_8 = 0;
    int *VAR_9;

    VAR_9 = FUNC_1(FUNC_0(), 0, VAR_5 * sizeof(int));
    if (!VAR_9)
    {
        FUNC_4("Out of memory\n");
        return;
    }

    do
    {

        VAR_7 = FUNC_5(VAR_2, VAR_6, VAR_5);


        FUNC_6(VAR_0, VAR_3, VAR_4, VAR_7);

        if (VAR_1)
        {
            int VAR_10;

            FUNC_3(VAR_7, VAR_4, ((void*)0), VAR_9);
            for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
                VAR_1[VAR_8+VAR_9[VAR_10]] = VAR_2[VAR_10];
        }

        VAR_2 += VAR_7;
        VAR_4 += VAR_7;
        VAR_6 += VAR_6 ? VAR_7 : 0;
        VAR_3 += VAR_7;
        VAR_5 -= VAR_7;
        VAR_8 += VAR_7;

    } while (VAR_5);

    FUNC_2(FUNC_0(), 0, VAR_9);
}
