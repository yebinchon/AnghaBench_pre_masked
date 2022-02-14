
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbol ;
struct SN_env {int* I; unsigned char* B; int ** S; int * p; } ;


 int FUNC_0 (struct SN_env*,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 void* FUNC_2 () ;

extern struct SN_env * FUNC_3(int VAR_0, int VAR_1, int VAR_2)
{
    struct SN_env * VAR_3 = (struct SN_env *) FUNC_1(1, sizeof(struct SN_env));
    if (VAR_3 == ((void*)0)) return ((void*)0);
    VAR_3->p = FUNC_2();
    if (VAR_3->p == ((void*)0)) goto error;
    if (VAR_0)
    {
        int VAR_4;
        VAR_3->S = (symbol * *) FUNC_1(VAR_0, sizeof(symbol *));
        if (VAR_3->S == ((void*)0)) goto error;

        for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
        {
            VAR_3->S[VAR_4] = FUNC_2();
            if (VAR_3->S[VAR_4] == ((void*)0)) goto error;
        }
    }

    if (VAR_1)
    {
        VAR_3->I = (int *) FUNC_1(VAR_1, sizeof(int));
        if (VAR_3->I == ((void*)0)) goto error;
    }

    if (VAR_2)
    {
        VAR_3->B = (unsigned char *) FUNC_1(VAR_2, sizeof(unsigned char));
        if (VAR_3->B == ((void*)0)) goto error;
    }

    return VAR_3;
error:
    FUNC_0(VAR_3, VAR_0);
    return ((void*)0);
}
