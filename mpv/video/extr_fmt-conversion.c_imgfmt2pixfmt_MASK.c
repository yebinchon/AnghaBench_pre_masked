
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_2__ {int fmt; int pix_fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int) ;

enum AVPixelFormat FUNC_2(int VAR_5)
{
    if (VAR_5 == VAR_3)
        return VAR_0;

    if (VAR_5 >= VAR_2 && VAR_5 < VAR_1) {
        enum AVPixelFormat VAR_6 = VAR_5 - VAR_2;

        int VAR_7 = FUNC_1(VAR_6);
        if (VAR_7 == VAR_5 && FUNC_0(VAR_6))
            return VAR_6;
        return VAR_0;
    }

    for (int VAR_8 = 0; VAR_4[VAR_8].fmt; VAR_8++) {
        if (VAR_4[VAR_8].fmt == VAR_5)
            return VAR_4[VAR_8].pix_fmt;
    }
    return VAR_0;
}
