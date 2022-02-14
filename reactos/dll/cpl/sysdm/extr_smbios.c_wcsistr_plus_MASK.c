
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;


 int * FUNC_0 (int const*,int) ;
 int* FUNC_1 (int const*,int*) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static
wchar_t * FUNC_3(const wchar_t *VAR_0, wchar_t *VAR_1)
{
    wchar_t * VAR_2 = FUNC_1(VAR_0, VAR_1);
    UINT VAR_3 = FUNC_2(VAR_1);

    if (!VAR_2 && VAR_1[VAR_3 - 1] == L' ' && FUNC_0(VAR_0, L',') != ((void*)0))
    {
        VAR_1[VAR_3 - 1] = L',';
        VAR_2 = FUNC_1(VAR_0, VAR_1);
        VAR_1[VAR_3 - 1] = L' ';
        if (!VAR_2)
        {
            VAR_1[0] = L',';
            VAR_2 = FUNC_1(VAR_0, VAR_1);
            VAR_1[0] = L' ';
        }
    }
    if (!VAR_2 && VAR_1[VAR_3 - 1] == L' ' && FUNC_0(VAR_0, L'(') != ((void*)0))
    {
        VAR_1[VAR_3 - 1] = L'(';
        VAR_2 = FUNC_1(VAR_0, VAR_1);
        VAR_1[VAR_3 - 1] = L' ';
    }
    if (!VAR_2 && VAR_1[VAR_3 - 1] == L' ' && FUNC_0(VAR_0, L'_') != ((void*)0))
    {
        VAR_1[0] = L'_';
        VAR_2 = FUNC_1(VAR_0, VAR_1);
        VAR_1[0] = L' ';
    }
    if (!VAR_2 && VAR_1[0] == L' ' && VAR_1[VAR_3 - 1] == L' ' && FUNC_0(VAR_0, L')') != ((void*)0))
    {
        VAR_1[0] = L')';
        VAR_2 = FUNC_1(VAR_0, VAR_1);
        if (!VAR_2 && FUNC_0(VAR_0, L'.'))
        {
            VAR_1[VAR_3 - 1] = L'.';
            VAR_2 = FUNC_1(VAR_0, VAR_1);
            VAR_1[VAR_3 - 1] = L' ';
        }
        VAR_1[0] = L' ';
    }
    return VAR_2;
}
