
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef scalar_t__ INT ;
typedef int DWORD ;
typedef float BYTE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (void const**,int,scalar_t__*,int*,int) ;

__attribute__((used)) static void FUNC_2 (const void *VAR_0, void *VAR_1, UINT VAR_2,
        UINT VAR_3, INT VAR_4, UINT VAR_5, UINT VAR_6)
{
    while (VAR_4 > 0)
    {
        DWORD VAR_7 = FUNC_0(*(DWORD *) VAR_0);
        float VAR_8 = *((float *) &VAR_7);
        BYTE *VAR_9 = VAR_1;

        if (VAR_8 < -1.0f)
        {
            VAR_9[0] = 0;
            VAR_9[1] = 0;
            VAR_9[2] = 0x80;
        }
        else if (VAR_8 > 1.0f)
        {
            VAR_9[0] = 0xff;
            VAR_9[1] = 0xff;
            VAR_9[2] = 0x7f;
        }
        else if (VAR_8 < 0.0f)
        {
            VAR_9[0] = VAR_8 * 8388608.0f;
            VAR_9[1] = VAR_8 * 32768.0f;
            VAR_9[2] = VAR_8 * 128.0f;
        }
        else if (VAR_8 >= 0.0f)
        {
            VAR_9[0] = VAR_8 * 8388608.0f;
            VAR_9[1] = VAR_8 * 32768.0f;
            VAR_9[2] = VAR_8 * 127.0f;
        }

        VAR_1 = (char *)VAR_1 + VAR_3;
        FUNC_1(&VAR_0, VAR_2, &VAR_4, &VAR_5, VAR_6);
    }
}
