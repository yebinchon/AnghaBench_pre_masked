
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {float x; float y; } ;
struct TYPE_7__ {float x; float y; } ;
struct TYPE_6__ {float x; float y; } ;
struct TYPE_5__ {float x; float y; } ;
struct mp_csp_primaries {TYPE_4__ white; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;


 int FUNC_0 (float**) ;

void FUNC_1(struct mp_csp_primaries VAR_0, float VAR_1[3][3])
{
    float VAR_2[3], VAR_3[4], VAR_4[4];


    VAR_3[0] = VAR_0.red.x / VAR_0.red.y;
    VAR_3[1] = VAR_0.green.x / VAR_0.green.y;
    VAR_3[2] = VAR_0.blue.x / VAR_0.blue.y;
    VAR_3[3] = VAR_0.white.x / VAR_0.white.y;

    VAR_4[0] = (1 - VAR_0.red.x - VAR_0.red.y) / VAR_0.red.y;
    VAR_4[1] = (1 - VAR_0.green.x - VAR_0.green.y) / VAR_0.green.y;
    VAR_4[2] = (1 - VAR_0.blue.x - VAR_0.blue.y) / VAR_0.blue.y;
    VAR_4[3] = (1 - VAR_0.white.x - VAR_0.white.y) / VAR_0.white.y;


    for (int VAR_5 = 0; VAR_5 < 3; VAR_5++) {
        VAR_1[0][VAR_5] = VAR_3[VAR_5];
        VAR_1[1][VAR_5] = 1;
        VAR_1[2][VAR_5] = VAR_4[VAR_5];
    }

    FUNC_0(VAR_1);

    for (int VAR_6 = 0; VAR_6 < 3; VAR_6++)
        VAR_2[VAR_6] = VAR_1[VAR_6][0] * VAR_3[3] + VAR_1[VAR_6][1] * 1 + VAR_1[VAR_6][2] * VAR_4[3];


    for (int VAR_7 = 0; VAR_7 < 3; VAR_7++) {
        VAR_1[0][VAR_7] = VAR_2[VAR_7] * VAR_3[VAR_7];
        VAR_1[1][VAR_7] = VAR_2[VAR_7] * 1;
        VAR_1[2][VAR_7] = VAR_2[VAR_7] * VAR_4[VAR_7];
    }
}
