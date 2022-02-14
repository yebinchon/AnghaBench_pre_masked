
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;
typedef int TCHAR ;
typedef int SIZE_T ;
typedef int * LPTSTR ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int) ;

__attribute__((used)) static LPTSTR FUNC_8(FILE *VAR_1, TCHAR *VAR_2)
{
    SIZE_T VAR_3 = 0;
    SIZE_T VAR_4 = 1000;

    LPTSTR VAR_5 = FUNC_5(VAR_4 * sizeof(TCHAR));
    if (!VAR_5)
    {
        FUNC_0("Cannot allocate memory for Contents!\n");
        return ((void*)0);
    }

    while (FUNC_2(VAR_2, VAR_0, VAR_1))
    {
        ULONG_PTR VAR_6 = FUNC_4(VAR_2);
        while (VAR_3 + VAR_6 >= VAR_4)
        {
            LPTSTR VAR_7 = VAR_5;
            VAR_5 = FUNC_7(VAR_5, (VAR_4 *= 2) * sizeof(TCHAR));
            if (!VAR_5)
            {
                FUNC_0("Cannot reallocate memory for Contents!\n");
                FUNC_6(VAR_7);
                return ((void*)0);
            }
        }
        FUNC_3(&VAR_5[VAR_3], VAR_2);
        VAR_3 += VAR_6;
    }

    VAR_5[VAR_3] = FUNC_1('\0');
    return VAR_5;
}
