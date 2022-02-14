
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef float INT16 ;
typedef scalar_t__ INT ;
typedef int DWORD ;


 float FUNC_0 (float) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void const**,int,scalar_t__*,int*,int) ;

__attribute__((used)) static void FUNC_3 (const void *VAR_0, void *VAR_1, UINT VAR_2,
        UINT VAR_3, INT VAR_4, UINT VAR_5, UINT VAR_6)
{
    while (VAR_4 > 0)
    {
        DWORD VAR_7 = FUNC_1(*(DWORD *) VAR_0);
        float VAR_8 = *((float *) &VAR_7);

        INT16 *VAR_9 = (INT16 *) VAR_1;

        if (VAR_8 < -1.0f)
            *VAR_9 = -32768;
        else if (VAR_8 > 1.0f)
            *VAR_9 = 32767;
        else
            *VAR_9 = VAR_8 * 32767.5f - 0.5f;

        *VAR_9 = FUNC_0(*VAR_9);

        VAR_1 = (char *)VAR_1 + VAR_3;
        FUNC_2(&VAR_0, VAR_2, &VAR_4, &VAR_5, VAR_6);
    }
}
