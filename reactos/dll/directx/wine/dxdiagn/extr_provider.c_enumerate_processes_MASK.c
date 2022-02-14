
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 (int*,int,int*) ;
 int FUNC_1 () ;
 int* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int*) ;
 int* FUNC_4 (int ,int ,int*,int) ;

__attribute__((used)) static DWORD *FUNC_5(DWORD *VAR_0)
{
    DWORD *VAR_1, VAR_2 = 1024 * sizeof(*VAR_1), VAR_3;

    VAR_1 = FUNC_2(FUNC_1(), 0, VAR_2);
    if (!VAR_1)
        return ((void*)0);

    for (;;)
    {
        DWORD *VAR_4;

        if (!FUNC_0(VAR_1, VAR_2, &VAR_3))
        {
            FUNC_3(FUNC_1(), 0, VAR_1);
            return ((void*)0);
        }






        if (VAR_2 != VAR_3)
            break;

        VAR_2 *= 2;
        VAR_4 = FUNC_4(FUNC_1(), 0, VAR_1, VAR_2);
        if (!VAR_4)
        {
            FUNC_3(FUNC_1(), 0, VAR_1);
            return ((void*)0);
        }
        VAR_1 = VAR_4;
    }

    *VAR_0 = VAR_3 / sizeof(*VAR_1);
    return VAR_1;
}
