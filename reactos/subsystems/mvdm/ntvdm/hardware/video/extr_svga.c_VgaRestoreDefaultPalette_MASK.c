
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef size_t USHORT ;
struct TYPE_3__ {scalar_t__ peFlags; void* peBlue; void* peGreen; void* peRed; } ;
typedef TYPE_1__* PPALETTEENTRY ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 int * VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static VOID FUNC_4(PPALETTEENTRY VAR_2, USHORT VAR_3)
{
    USHORT VAR_4;


    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {

        VAR_2[VAR_4].peRed = FUNC_2(VAR_1[VAR_4]);
        VAR_2[VAR_4].peGreen = FUNC_1(VAR_1[VAR_4]);
        VAR_2[VAR_4].peBlue = FUNC_0(VAR_1[VAR_4]);
        VAR_2[VAR_4].peFlags = 0;


        VAR_0[VAR_4 * 3] = FUNC_3(FUNC_2(VAR_1[VAR_4]));
        VAR_0[VAR_4 * 3 + 1] = FUNC_3(FUNC_1(VAR_1[VAR_4]));
        VAR_0[VAR_4 * 3 + 2] = FUNC_3(FUNC_0(VAR_1[VAR_4]));
    }
}
