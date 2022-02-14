
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DSO ;


 int * FUNC_0 (int *,char*,int *,int) ;
 int FUNC_1 (void*,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;

DSO *FUNC_4(void *VAR_0, int VAR_1)
{
    DSO *VAR_2 = ((void*)0);
    char *VAR_3 = ((void*)0);
    int VAR_4 = FUNC_1(VAR_0, ((void*)0), 0);

    if (VAR_4 < 0)
        return ((void*)0);

    VAR_3 = FUNC_3(VAR_4);
    if (VAR_3 != ((void*)0)
            && FUNC_1(VAR_0, VAR_3, VAR_4) == VAR_4)
        VAR_2 = FUNC_0(((void*)0), VAR_3, ((void*)0), VAR_1);

    FUNC_2(VAR_3);
    return VAR_2;
}
