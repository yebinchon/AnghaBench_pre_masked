
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WORD ;
typedef int WCHAR ;
struct TYPE_3__ {int output; int* parts; } ;
typedef int INT ;
typedef int HDC ;
typedef TYPE_1__ ConsonantComponents ;



__attribute__((used)) static void FUNC_0(HDC VAR_0, WCHAR *VAR_1, INT *VAR_2, const ConsonantComponents VAR_3[], WORD* VAR_4)
{
    int VAR_5;
    int VAR_6 = 0;
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < *VAR_2; VAR_7 += 2)
    {
        for (VAR_5 = 0; VAR_3[VAR_5].output!= 0x0; VAR_5++)
        {
            int VAR_8;
            for (VAR_8 = 0; VAR_8 + VAR_7 < *VAR_2 && VAR_3[VAR_5].parts[VAR_8]!=0x0; VAR_8++)
                if (VAR_1[VAR_7+VAR_8] != VAR_3[VAR_5].parts[VAR_8])
                    break;

            if (VAR_3[VAR_5].parts[VAR_8]==0x0)
            {
                int VAR_9;
                VAR_8--;
                VAR_1[VAR_7] = VAR_3[VAR_5].output;
                for(VAR_9 = VAR_7+1; VAR_9 < *VAR_2 - VAR_8; VAR_9++)
                    VAR_1[VAR_9] = VAR_1[VAR_9+VAR_8];
                *VAR_2 = *VAR_2 - VAR_8;
                for (VAR_9 = VAR_8 ; VAR_9 > 0; VAR_9--)
                    VAR_4[VAR_7 + VAR_9 + VAR_6] = VAR_4[VAR_7 + VAR_6];
                VAR_6 += VAR_8;
                for (VAR_9 = VAR_7 + VAR_8 + VAR_6; VAR_9 < *VAR_2 + VAR_6; VAR_9++)
                    VAR_4[VAR_9]--;
                break;
            }
        }
    }
}
