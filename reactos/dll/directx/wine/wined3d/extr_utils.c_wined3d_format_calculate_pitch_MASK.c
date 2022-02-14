
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int numerator; unsigned int denominator; } ;
struct wined3d_format {int* flags; unsigned int block_width; unsigned int block_height; unsigned int block_byte_count; unsigned int byte_count; TYPE_1__ height_scale; } ;


 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;

void FUNC_1(const struct wined3d_format *VAR_3, unsigned int VAR_4,
        unsigned int VAR_5, unsigned int VAR_6, unsigned int *VAR_7, unsigned int *VAR_8)
{


    if (VAR_3->flags[VAR_2] & VAR_0)
    {
        unsigned int VAR_9 = (VAR_5 + VAR_3->block_width - 1) / VAR_3->block_width;
        unsigned int VAR_10 = (VAR_6 + VAR_3->block_height - 1) / VAR_3->block_height;
        *VAR_7 = VAR_9 * VAR_3->block_byte_count;
        *VAR_7 = (*VAR_7 + VAR_4 - 1) & ~(VAR_4 - 1);
        *VAR_8 = *VAR_7 * VAR_10;
    }
    else
    {
        *VAR_7 = VAR_3->byte_count * VAR_5;
        *VAR_7 = (*VAR_7 + VAR_4 - 1) & ~(VAR_4 - 1);
        *VAR_8 = *VAR_7 * VAR_6;
    }

    if (VAR_3->flags[VAR_2] & VAR_1)
    {

        *VAR_8 *= VAR_3->height_scale.numerator;
        *VAR_8 /= VAR_3->height_scale.denominator;
    }

    FUNC_0("Returning row pitch %u, slice pitch %u.\n", *VAR_7, *VAR_8);
}
