
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct volume {int width; int height; int depth; } ;
struct pixel_format_desc {int block_width; int block_height; int block_byte_count; } ;
typedef int UINT ;
typedef int BYTE ;


 int FUNC_0 (int *,int const*,int) ;

void FUNC_1(const BYTE *VAR_0, UINT VAR_1, UINT VAR_2,
        BYTE *VAR_3, UINT VAR_4, UINT VAR_5, const struct volume *VAR_6,
        const struct pixel_format_desc *VAR_7)
{
    UINT VAR_8, VAR_9;
    BYTE *VAR_10;
    const BYTE *VAR_11;
    UINT VAR_12 = (VAR_6->width + VAR_7->block_width - 1) / VAR_7->block_width;
    UINT VAR_13 = (VAR_6->height + VAR_7->block_height - 1) / VAR_7->block_height;

    for (VAR_9 = 0; VAR_9 < VAR_6->depth; VAR_9++)
    {
        VAR_11 = VAR_0 + VAR_9 * VAR_2;
        VAR_10 = VAR_3 + VAR_9 * VAR_5;

        for (VAR_8 = 0; VAR_8 < VAR_13; VAR_8++)
        {
            FUNC_0(VAR_10, VAR_11, VAR_12 * VAR_7->block_byte_count);
            VAR_11 += VAR_1;
            VAR_10 += VAR_4;
        }
    }
}
