
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct mp_image_params {int imgfmt; int h; int w; } ;
struct priv {struct mp_image_params image_params; } ;


 int VAR_0 ;
 int FUNC_0 (struct priv*,int ,int ,int ) ;
 int FUNC_1 (struct priv*) ;
 int FUNC_2 (struct priv*) ;
 int FUNC_3 (struct vo*) ;

__attribute__((used)) static int FUNC_4(struct vo *VAR_1, struct mp_image_params *VAR_2)
{
    struct priv *VAR_3 = VAR_1->priv;

    FUNC_1(VAR_3);

    FUNC_3(VAR_1);

    if (VAR_2->imgfmt != VAR_0) {
        if (!FUNC_0(VAR_3, VAR_2->w, VAR_2->h, VAR_2->imgfmt))
            return -1;
    }

    VAR_3->image_params = *VAR_2;
    FUNC_2(VAR_3);
    return 0;
}
