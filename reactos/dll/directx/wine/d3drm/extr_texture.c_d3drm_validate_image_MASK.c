
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ palette_size; scalar_t__ palette; scalar_t__ rgb; int buffer1; int blue_mask; int green_mask; int red_mask; } ;
typedef TYPE_1__ D3DRMIMAGE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(D3DRMIMAGE *VAR_2)
{
    if (!VAR_2
            || !VAR_2->red_mask
            || !VAR_2->green_mask
            || !VAR_2->blue_mask
            || !VAR_2->buffer1
            || !(VAR_2->rgb || (VAR_2->palette && VAR_2->palette_size)))
    {
        return VAR_0;
    }

    return VAR_1;
}
