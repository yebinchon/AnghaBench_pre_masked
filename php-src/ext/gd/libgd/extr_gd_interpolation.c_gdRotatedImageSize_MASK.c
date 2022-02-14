
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gdRectPtr ;
struct TYPE_3__ {int height; int width; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ gdRect ;
typedef int gdImagePtr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (double*,float const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,double*,int ) ;

__attribute__((used)) static int FUNC_4(gdImagePtr VAR_2, const float VAR_3, gdRectPtr VAR_4)
{
    gdRect VAR_5;
    double VAR_6[6];

    FUNC_0(VAR_6, VAR_3);
    VAR_5.x = 0;
    VAR_5.y = 0;
    VAR_5.width = FUNC_1(VAR_2);
    VAR_5.height = FUNC_2(VAR_2);
    if (FUNC_3(&VAR_5, VAR_6, VAR_4) != VAR_1) {
        return VAR_0;
    }

    return VAR_1;
}
