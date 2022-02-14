
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dir; scalar_t__ y; scalar_t__ x; } ;
typedef int HDC ;
typedef int HBRUSH ;


 int FUNC_0 (int,int,int,int ,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(int VAR_1, HDC VAR_2, HBRUSH VAR_3)
{
    FUNC_0((int) VAR_0[VAR_1].x, (int) VAR_0[VAR_1].y, (int) VAR_0[VAR_1].dir, VAR_2, VAR_3);

    VAR_0[VAR_1 + 1].dir = -1;
    switch (VAR_0[VAR_1].dir) {
    case 0: VAR_0[VAR_1 + 1].x = VAR_0[VAR_1].x;
        VAR_0[VAR_1 + 1].y = VAR_0[VAR_1].y - 1;
        break;
    case 1: VAR_0[VAR_1 + 1].x = VAR_0[VAR_1].x + 1;
        VAR_0[VAR_1 + 1].y = VAR_0[VAR_1].y;
        break;
    case 2: VAR_0[VAR_1 + 1].x = VAR_0[VAR_1].x;
        VAR_0[VAR_1 + 1].y = VAR_0[VAR_1].y + 1;
        break;
    case 3: VAR_0[VAR_1 + 1].x = VAR_0[VAR_1].x - 1;
        VAR_0[VAR_1 + 1].y = VAR_0[VAR_1].y;
        break;
    }
}
