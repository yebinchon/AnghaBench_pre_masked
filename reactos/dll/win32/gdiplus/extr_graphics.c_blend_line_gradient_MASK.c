
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float X; float Width; } ;
struct TYPE_5__ {scalar_t__ wrap; int blendcount; float* blendpos; float* blendfac; scalar_t__ pblendcount; float* pblendpos; int * pblendcolor; int endcolor; int startcolor; TYPE_1__ rect; } ;
typedef float REAL ;
typedef TYPE_2__ GpLineGradient ;
typedef int ARGB ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,float) ;
 float FUNC_1 (float,float) ;

__attribute__((used)) static ARGB FUNC_2(GpLineGradient* VAR_1, REAL VAR_2)
{
    REAL VAR_3;


    VAR_2 = (VAR_2 - VAR_1->rect.X) / VAR_1->rect.Width;
    if (VAR_1->wrap == VAR_0)
    {
        VAR_2 = FUNC_1(VAR_2, 1.0f);
        if (VAR_2 < 0.0f) VAR_2 += 1.0f;
    }
    else
    {
        VAR_2 = FUNC_1(VAR_2, 2.0f);
        if (VAR_2 < 0.0f) VAR_2 += 2.0f;
        if (VAR_2 > 1.0f) VAR_2 = 2.0f - VAR_2;
    }

    if (VAR_1->blendcount == 1)
        VAR_3 = VAR_2;
    else
    {
        int VAR_4=1;
        REAL VAR_5, VAR_6, VAR_7, VAR_8;
        REAL VAR_9;


        while (VAR_2 > VAR_1->blendpos[VAR_4])
            VAR_4++;


        VAR_5 = VAR_1->blendpos[VAR_4-1];
        VAR_6 = VAR_1->blendfac[VAR_4-1];
        VAR_7 = VAR_1->blendpos[VAR_4];
        VAR_8 = VAR_1->blendfac[VAR_4];
        VAR_9 = VAR_7 - VAR_5;
        VAR_3 = (VAR_6 * (VAR_7 - VAR_2) +
                    VAR_8 * (VAR_2 - VAR_5)) / VAR_9;
    }

    if (VAR_1->pblendcount == 0)
        return FUNC_0(VAR_1->startcolor, VAR_1->endcolor, VAR_3);
    else
    {
        int VAR_10=1;
        ARGB VAR_11, VAR_12;
        REAL VAR_13, VAR_14;


        while (VAR_3 > VAR_1->pblendpos[VAR_10])
            VAR_10++;


        VAR_13 = VAR_1->pblendpos[VAR_10-1];
        VAR_11 = VAR_1->pblendcolor[VAR_10-1];
        VAR_14 = VAR_1->pblendpos[VAR_10];
        VAR_12 = VAR_1->pblendcolor[VAR_10];
        VAR_3 = (VAR_3 - VAR_13) / (VAR_14 - VAR_13);
        return FUNC_0(VAR_11, VAR_12, VAR_3);
    }
}
