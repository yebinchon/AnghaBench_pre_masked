
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pixel_format_desc {scalar_t__ type; int block_width; int block_height; int block_byte_count; int bytes_per_pixel; } ;
typedef int UINT ;
typedef int HRESULT ;
typedef int D3DFORMAT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct pixel_format_desc* FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static HRESULT FUNC_2(D3DFORMAT VAR_3, UINT VAR_4, UINT VAR_5,
    UINT *VAR_6, UINT *VAR_7)
{
    const struct pixel_format_desc *VAR_8 = FUNC_0(VAR_3);
    if (VAR_8->type == VAR_2)
        return VAR_1;

    if (VAR_8->block_width != 1 || VAR_8->block_height != 1)
    {
        *VAR_6 = VAR_8->block_byte_count
            * FUNC_1(1, (VAR_4 + VAR_8->block_width - 1) / VAR_8->block_width);
        *VAR_7 = *VAR_6
            * FUNC_1(1, (VAR_5 + VAR_8->block_height - 1) / VAR_8->block_height);
    }
    else
    {
        *VAR_6 = VAR_4 * VAR_8->bytes_per_pixel;
        *VAR_7 = *VAR_6 * VAR_5;
    }

    return VAR_0;
}
