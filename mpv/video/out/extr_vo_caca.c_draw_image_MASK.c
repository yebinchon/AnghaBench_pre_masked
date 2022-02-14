
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct priv {int image_width; int dither_buffer; int dither; int screen_h; int screen_w; int canvas; int image_height; } ;
struct TYPE_4__ {int * stride; int * planes; } ;
typedef TYPE_1__ mp_image_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int,int ,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct vo *VAR_1, mp_image_t *VAR_2)
{
    struct priv *VAR_3 = VAR_1->priv;
    FUNC_1(VAR_3->dither_buffer, VAR_2->planes[0], VAR_3->image_width * VAR_0, VAR_3->image_height,
               VAR_3->image_width * VAR_0, VAR_2->stride[0]);
    FUNC_0(VAR_3->canvas, 0, 0, VAR_3->screen_w, VAR_3->screen_h, VAR_3->dither, VAR_3->dither_buffer);
    FUNC_2(VAR_2);
}
