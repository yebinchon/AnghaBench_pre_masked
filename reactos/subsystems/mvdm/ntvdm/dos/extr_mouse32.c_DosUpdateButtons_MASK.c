
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
typedef int USHORT ;
struct TYPE_2__ {int ButtonState; int Position; int * LastRelease; int * ReleaseCount; int * LastPress; int * PressCount; } ;
typedef int BYTE ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline VOID FUNC_1(BYTE VAR_2)
{
    USHORT VAR_3;
    USHORT VAR_4 = 0x0000;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {
        BOOLEAN VAR_5 = (VAR_0.ButtonState >> VAR_3) & 1;
        BOOLEAN VAR_6 = (VAR_2 >> VAR_3) & 1;

        if (VAR_6 > VAR_5)
        {

            VAR_0.PressCount[VAR_3]++;
            VAR_0.LastPress[VAR_3] = VAR_0.Position;

            VAR_4 |= (1 << (2 * VAR_3 + 1));
        }
        else if (VAR_6 < VAR_5)
        {

            VAR_0.ReleaseCount[VAR_3]++;
            VAR_0.LastRelease[VAR_3] = VAR_0.Position;

            VAR_4 |= (1 << (2 * VAR_3 + 2));
        }
    }

    VAR_0.ButtonState = VAR_2;


    FUNC_0(VAR_4);
}
