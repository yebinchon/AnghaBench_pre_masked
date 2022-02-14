
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; } ;
typedef TYPE_1__ bezier_vector ;


 int FUNC_0 (double,double) ;
 double FUNC_1 (int ,double) ;
 double FUNC_2 (int) ;

__attribute__((used)) static double FUNC_3(const bezier_vector *VAR_0)
{
    bezier_vector VAR_1;
    bezier_vector VAR_2;
    bezier_vector VAR_3;
    double VAR_4;
    double VAR_5;

    VAR_2.x = (VAR_0[0].x + VAR_0[1].x*2 + VAR_0[2].x)/4 - VAR_0[0].x;
    VAR_2.y = (VAR_0[0].y + VAR_0[1].y*2 + VAR_0[2].y)/4 - VAR_0[0].y;

    VAR_3.x = VAR_0[2].x - VAR_0[0].x;
    VAR_3.y = VAR_0[2].y - VAR_0[0].y;

    VAR_4 = FUNC_2(VAR_3.x*VAR_3.x + VAR_3.y*VAR_3.y);
    VAR_3.x /= VAR_4;
    VAR_3.y /= VAR_4;

    VAR_5 = VAR_3.x*VAR_2.x + VAR_3.y*VAR_2.y;
    VAR_5 = FUNC_1(FUNC_0(VAR_5, 0.0), VAR_4);
    VAR_3.x *= VAR_5;
    VAR_3.y *= VAR_5;

    VAR_1.x = VAR_2.x-VAR_3.x;
    VAR_1.y = VAR_2.y-VAR_3.y;

    return VAR_1.x*VAR_1.x + VAR_1.y*VAR_1.y;
}
