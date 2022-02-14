
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct argb_conversion_info {int* destshift; int channelmask; TYPE_2__* destformat; TYPE_1__* srcformat; scalar_t__* process_channel; } ;
typedef int UINT ;
struct TYPE_4__ {int* shift; } ;
struct TYPE_3__ {scalar_t__* bits; } ;
typedef int DWORD ;



__attribute__((used)) static DWORD FUNC_0(const struct argb_conversion_info *VAR_0, const DWORD *VAR_1)
{
    UINT VAR_2;
    DWORD VAR_3 = 0;

    for(VAR_2 = 0;VAR_2 < 4;VAR_2++) {
        if(VAR_0->process_channel[VAR_2]) {

            signed int VAR_4;
            for(VAR_4 = VAR_0->destshift[VAR_2]; VAR_4 > VAR_0->destformat->shift[VAR_2]; VAR_4 -= VAR_0->srcformat->bits[VAR_2]) VAR_3 |= VAR_1[VAR_2] << VAR_4;
            VAR_3 |= (VAR_1[VAR_2] >> (VAR_0->destformat->shift[VAR_2] - VAR_4)) << VAR_0->destformat->shift[VAR_2];
        }
    }
    VAR_3 |= VAR_0->channelmask;
    return VAR_3;
}
