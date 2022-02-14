
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; int y; } ;
typedef TYPE_1__ bezier_vector ;
typedef int FLOAT ;


 int FUNC_0 (TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_1(const bezier_vector *VAR_0, bezier_vector *VAR_1, FLOAT VAR_2)
{
    bezier_vector VAR_3[3];
    bezier_vector VAR_4[3];
    bezier_vector VAR_5;
    int VAR_6;

    if(FUNC_0(VAR_0) <= VAR_2*VAR_2)
    {
        if(VAR_1)
            *VAR_1 = VAR_0[2];
        return 1;
    }

    VAR_5.x = (VAR_0[0].x + VAR_0[1].x*2 + VAR_0[2].x)/4;
    VAR_5.y = (VAR_0[0].y + VAR_0[1].y*2 + VAR_0[2].y)/4;

    VAR_3[0] = VAR_0[0];
    VAR_3[1].x = (VAR_0[0].x + VAR_0[1].x)/2;
    VAR_3[1].y = (VAR_0[0].y + VAR_0[1].y)/2;
    VAR_3[2] = VAR_5;

    VAR_4[0] = VAR_5;
    VAR_4[1].x = (VAR_0[2].x + VAR_0[1].x)/2;
    VAR_4[1].y = (VAR_0[2].y + VAR_0[1].y)/2;
    VAR_4[2] = VAR_0[2];

    VAR_6 = FUNC_1(VAR_3, VAR_1, VAR_2);
    if(VAR_1)
        VAR_1 += VAR_6;
    VAR_6 += FUNC_1(VAR_4, VAR_1, VAR_2);
    return VAR_6;
}
