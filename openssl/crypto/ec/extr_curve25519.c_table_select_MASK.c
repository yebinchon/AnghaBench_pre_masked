
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_7__ {int xy2d; int yplusx; int yminusx; } ;
typedef TYPE_1__ ge_precomp ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,char) ;
 char FUNC_1 (char,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__** VAR_0 ;
 char FUNC_5 (char) ;

__attribute__((used)) static void FUNC_6(ge_precomp *VAR_1, int VAR_2, signed char VAR_3)
{
    ge_precomp VAR_4;
    uint8_t VAR_5 = FUNC_5(VAR_3);
    uint8_t VAR_6 = VAR_3 - ((uint8_t)((-VAR_5) & VAR_3) << 1);

    FUNC_4(VAR_1);
    FUNC_0(VAR_1, &VAR_0[VAR_2][0], FUNC_1(VAR_6, 1));
    FUNC_0(VAR_1, &VAR_0[VAR_2][1], FUNC_1(VAR_6, 2));
    FUNC_0(VAR_1, &VAR_0[VAR_2][2], FUNC_1(VAR_6, 3));
    FUNC_0(VAR_1, &VAR_0[VAR_2][3], FUNC_1(VAR_6, 4));
    FUNC_0(VAR_1, &VAR_0[VAR_2][4], FUNC_1(VAR_6, 5));
    FUNC_0(VAR_1, &VAR_0[VAR_2][5], FUNC_1(VAR_6, 6));
    FUNC_0(VAR_1, &VAR_0[VAR_2][6], FUNC_1(VAR_6, 7));
    FUNC_0(VAR_1, &VAR_0[VAR_2][7], FUNC_1(VAR_6, 8));
    FUNC_2(VAR_4.yplusx, VAR_1->yminusx);
    FUNC_2(VAR_4.yminusx, VAR_1->yplusx);
    FUNC_3(VAR_4.xy2d, VAR_1->xy2d);
    FUNC_0(VAR_1, &VAR_4, VAR_5);
}
