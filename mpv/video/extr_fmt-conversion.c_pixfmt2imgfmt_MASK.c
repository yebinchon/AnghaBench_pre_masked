
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_2__ {int pix_fmt; int fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_4 ;

int FUNC_1(enum AVPixelFormat VAR_5)
{
    if (VAR_5 == VAR_0)
        return VAR_3;

    for (int VAR_6 = 0; VAR_4[VAR_6].pix_fmt != VAR_0; VAR_6++) {
        if (VAR_4[VAR_6].pix_fmt == VAR_5)
            return VAR_4[VAR_6].fmt;
    }

    int VAR_7 = VAR_2 + VAR_5;
    if (VAR_7 < VAR_1 && FUNC_0(VAR_5))
        return VAR_7;

    return 0;
}
