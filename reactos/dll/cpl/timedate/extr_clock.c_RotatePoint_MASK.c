
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {size_t x; int y; } ;
typedef TYPE_1__ POINT ;
typedef size_t INT ;


 size_t VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;

__attribute__((used)) static VOID
FUNC_2(POINT VAR_1[], INT VAR_2, INT VAR_3)
{
     INT VAR_4;
     POINT VAR_5;

     for (VAR_4 = 0 ; VAR_4 < VAR_2 ; VAR_4++)
     {
          VAR_5.x = (INT) (VAR_1[VAR_4].x * FUNC_0 (VAR_0 * VAR_3 / 360) +
               VAR_1[VAR_4].y * FUNC_1 (VAR_0 * VAR_3 / 360));

          VAR_5.y = (INT) (VAR_1[VAR_4].y * FUNC_0 (VAR_0 * VAR_3 / 360) -
               VAR_1[VAR_4].x * FUNC_1 (VAR_0 * VAR_3 / 360));

          VAR_1[VAR_4] = VAR_5;
     }
}
