
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_2__ {int fmt; int sample_fmt; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

enum AVSampleFormat FUNC_0(int VAR_2)
{
    for (int VAR_3 = 0; VAR_1[VAR_3].fmt; VAR_3++) {
        if (VAR_1[VAR_3].fmt == VAR_2)
            return VAR_1[VAR_3].sample_fmt;
    }
    return VAR_0;
}
