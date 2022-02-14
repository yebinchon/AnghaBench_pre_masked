
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {struct priv* priv; } ;
struct priv {char* dither_antialias; char* dither_charset; char* dither_color; char* dither_algo; int * canvas; int * display; } ;


 int VAR_0 ;
 int FUNC_0 (struct vo*,char*) ;
 int * FUNC_1 (int ,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct vo *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    VAR_2->dither_antialias = "default";
    VAR_2->dither_charset = "default";
    VAR_2->dither_color = "default";
    VAR_2->dither_algo = "none";

    VAR_2->canvas = FUNC_1(0, 0);
    if (VAR_2->canvas == ((void*)0)) {
        FUNC_0(VAR_1, "failed to create canvas\n");
        return VAR_0;
    }

    VAR_2->display = FUNC_2(VAR_2->canvas);

    if (VAR_2->display == ((void*)0)) {
        FUNC_0(VAR_1, "failed to create display\n");
        FUNC_3(VAR_2->canvas);
        return VAR_0;
    }

    return 0;
}
