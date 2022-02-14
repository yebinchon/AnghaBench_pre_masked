
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int INT ;
typedef int HWND ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int * FUNC_4 (int ,int ,int *,int) ;
 int FUNC_5 (int ,int *,int) ;

__attribute__((used)) static LPWSTR
FUNC_6(HWND VAR_0, INT *VAR_1, INT VAR_2)
{
    LPWSTR VAR_3 = ((void*)0), VAR_4;
    INT VAR_5, VAR_6 = *VAR_1;

    VAR_4 = FUNC_2(FUNC_1(), 0, VAR_6 * sizeof(WCHAR));
    for (;;)
    {
        if (!VAR_4)
        {
            FUNC_0("HeapAlloc failed\n");
            if (VAR_3)
                FUNC_3(FUNC_1(), 0, VAR_3);
            return ((void*)0);
        }
        VAR_3 = VAR_4;

        VAR_5 = VAR_6 - VAR_2;
        if (FUNC_5(VAR_0, VAR_3,
                                  VAR_5) < VAR_5 - 1)
        {
            break;
        }

        VAR_6 *= 2;
        VAR_4 = FUNC_4(FUNC_1(), 0, VAR_3,
                                  VAR_6 * sizeof(WCHAR));
    }

    *VAR_1 = VAR_6;
    return VAR_3;
}
