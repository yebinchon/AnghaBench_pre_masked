
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_3__ {int* sample_fmts; } ;
typedef TYPE_1__ AVCodec ;


 int const VAR_0 ;
 int FUNC_0 (int const) ;

__attribute__((used)) static bool FUNC_1(const AVCodec *VAR_1, int VAR_2)
{
    for (const enum AVSampleFormat *VAR_3 = VAR_1->sample_fmts;
         VAR_3 && *VAR_3 != VAR_0;
         VAR_3++)
    {
        if (FUNC_0(*VAR_3) == VAR_2)
            return 1;
    }
    return 0;
}
