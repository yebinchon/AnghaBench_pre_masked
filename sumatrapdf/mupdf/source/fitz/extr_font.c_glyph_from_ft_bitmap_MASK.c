
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_glyph ;
typedef int fz_context ;
struct TYPE_3__ {scalar_t__ pixel_mode; int rows; int pitch; scalar_t__ buffer; int width; } ;
typedef TYPE_1__ FT_Bitmap ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,char*) ;
 int * FUNC_1 (int *,int,int,int ,int,scalar_t__,int) ;
 int * FUNC_2 (int *,int,int,int ,int,scalar_t__,int) ;

__attribute__((used)) static fz_glyph *
FUNC_3(fz_context *VAR_1, int VAR_2, int VAR_3, FT_Bitmap *VAR_4)
{
 (void)FUNC_0(VAR_4->buffer, "ft_bitmap");
 if (VAR_4->pixel_mode == VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3 - VAR_4->rows, VAR_4->width, VAR_4->rows, VAR_4->buffer + (VAR_4->rows-1)*VAR_4->pitch, -VAR_4->pitch);
 else
  return FUNC_2(VAR_1, VAR_2, VAR_3 - VAR_4->rows, VAR_4->width, VAR_4->rows, VAR_4->buffer + (VAR_4->rows-1)*VAR_4->pitch, -VAR_4->pitch);
}
