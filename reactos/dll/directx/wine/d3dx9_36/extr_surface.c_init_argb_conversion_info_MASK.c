
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pixel_format_desc {int* shift; int* bits; } ;
struct argb_conversion_info {int channelmask; int* srcmask; int* destmask; int * process_channel; void** destshift; void** srcshift; struct pixel_format_desc const* destformat; struct pixel_format_desc const* srcformat; } ;
typedef int UINT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(const struct pixel_format_desc *VAR_1, const struct pixel_format_desc *VAR_2, struct argb_conversion_info *VAR_3)
{
    UINT VAR_4;
    FUNC_0(VAR_3->process_channel, 4 * sizeof(BOOL));
    VAR_3->channelmask = 0;

    VAR_3->srcformat = VAR_1;
    VAR_3->destformat = VAR_2;

    for(VAR_4 = 0;VAR_4 < 4;VAR_4++) {

        VAR_3->srcshift[VAR_4] = VAR_1->shift[VAR_4] + FUNC_1( VAR_1->bits[VAR_4] - VAR_2->bits[VAR_4], 0);


        VAR_3->destshift[VAR_4] = VAR_2->shift[VAR_4] + FUNC_1(VAR_2->bits[VAR_4] - VAR_1->bits[VAR_4], 0);

        VAR_3->srcmask[VAR_4] = ((1 << VAR_1->bits[VAR_4]) - 1) << VAR_1->shift[VAR_4];
        VAR_3->destmask[VAR_4] = ((1 << VAR_2->bits[VAR_4]) - 1) << VAR_2->shift[VAR_4];


        if(VAR_2->bits[VAR_4]) {
            if(VAR_1->bits[VAR_4]) VAR_3->process_channel[VAR_4] = VAR_0;
            else VAR_3->channelmask |= VAR_3->destmask[VAR_4];
        }
    }
}
