
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 () ;
 int* FUNC_1 (int ,int ,int) ;

__attribute__((used)) static DWORD *FUNC_2(DWORD VAR_0)
{
        DWORD *VAR_1;
        DWORD VAR_2;

        VAR_1 = FUNC_1(FUNC_0(), 0, VAR_0 * sizeof(*VAR_1));
        if (!VAR_1)
            return ((void*)0);

        for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
        {
            VAR_1[VAR_2] = VAR_2;
        }

        return VAR_1;
}
