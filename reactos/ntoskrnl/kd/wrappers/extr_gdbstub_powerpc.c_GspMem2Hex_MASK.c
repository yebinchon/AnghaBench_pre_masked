
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int* PCHAR ;
typedef scalar_t__ LONG ;
typedef int CHAR ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*) ;
 void** VAR_1 ;

__attribute__((used)) static PCHAR
FUNC_1(PCHAR VAR_2,
           PCHAR VAR_3,
           LONG VAR_4,
           BOOLEAN VAR_5)
{
    ULONG VAR_6;
    CHAR VAR_7;

    for (VAR_6 = 0; VAR_6 < (ULONG) VAR_4; VAR_6++)
    {
        if (VAR_5)
        {
            VAR_7 = FUNC_0(VAR_2);
            if (VAR_0)
                return VAR_3;
        }
        else
        {
            VAR_7 = *VAR_2;
        }
        *VAR_3++ = VAR_1[(VAR_7 >> 4) & 0xf];
        *VAR_3++ = VAR_1[VAR_7 & 0xf];
        VAR_2++;
    }

    *VAR_3 = 0;
    return VAR_3;
}
