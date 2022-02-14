
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_2__ {int fmt; int sample_fmt; } ;


 TYPE_1__* VAR_0 ;

int FUNC_0(enum AVSampleFormat VAR_1)
{
    for (int VAR_2 = 0; VAR_0[VAR_2].fmt; VAR_2++) {
        if (VAR_0[VAR_2].sample_fmt == VAR_1)
            return VAR_0[VAR_2].fmt;
    }
    return 0;
}
