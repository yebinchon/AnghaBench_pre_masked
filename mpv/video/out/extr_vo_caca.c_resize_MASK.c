
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {int image_width; int image_height; int dither_algo; int * dither; int dither_color; int dither_charset; int dither_antialias; int dither_buffer; int canvas; int screen_h; int screen_w; } ;


 int FUNC_0 (struct vo*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int,int,int,int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(struct vo *VAR_7)
{
    struct priv *VAR_8 = VAR_7->priv;
    VAR_8->screen_w = FUNC_4(VAR_8->canvas);
    VAR_8->screen_h = FUNC_3(VAR_8->canvas);

    FUNC_2(VAR_8->dither);
    FUNC_10(VAR_8->dither_buffer);

    VAR_8->dither = FUNC_1(VAR_2, VAR_8->image_width, VAR_8->image_height,
                                VAR_3 * VAR_8->image_width,
                                VAR_5, VAR_4, VAR_1, VAR_0);
    if (VAR_8->dither == ((void*)0)) {
        FUNC_0(VAR_7, "caca_create_dither failed!\n");
        return -1;
    }
    VAR_8->dither_buffer =
        FUNC_9(((void*)0), VAR_6, VAR_3 * VAR_8->image_width * VAR_8->image_height);


    FUNC_6(VAR_8->dither, VAR_8->dither_antialias);
    FUNC_7(VAR_8->dither, VAR_8->dither_charset);
    FUNC_8(VAR_8->dither, VAR_8->dither_color);
    FUNC_5(VAR_8->dither, VAR_8->dither_algo);

    return 0;
}
