
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;
 int * FUNC_4 () ;
 int * FUNC_5 () ;

__attribute__((used)) static int FUNC_6(const int **VAR_0)
{
    static int VAR_1[6] = { 0, 0, 0, 0, 0, 0 };
    static int VAR_2 = 0;
    static int VAR_3 = 0;

    if (!VAR_3) {
        const EVP_MD *VAR_4;
        if ((VAR_4 = FUNC_1()) != ((void*)0))
            VAR_1[VAR_2++] = FUNC_0(VAR_4);
        if ((VAR_4 = FUNC_2()) != ((void*)0))
            VAR_1[VAR_2++] = FUNC_0(VAR_4);
        if ((VAR_4 = FUNC_3()) != ((void*)0))
            VAR_1[VAR_2++] = FUNC_0(VAR_4);
        if ((VAR_4 = FUNC_4()) != ((void*)0))
            VAR_1[VAR_2++] = FUNC_0(VAR_4);
        if ((VAR_4 = FUNC_5()) != ((void*)0))
            VAR_1[VAR_2++] = FUNC_0(VAR_4);
        VAR_1[VAR_2] = 0;
        VAR_3 = 1;
    }
    *VAR_0 = VAR_1;
    return VAR_2;
}
