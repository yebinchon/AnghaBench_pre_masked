
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vo {int want_redraw; struct priv* priv; } ;
struct priv {int reload_display; double display_fps; int display_mutex; int renderer_enabled; } ;
struct mp_image {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vo*) ;
 int FUNC_3 (struct vo*) ;
 int FUNC_4 (struct vo*) ;
 struct mp_image* FUNC_5 (struct vo*) ;
 int FUNC_6 (struct vo*) ;

__attribute__((used)) static int FUNC_7(struct vo *VAR_2, uint32_t VAR_3, void *VAR_4)
{
    struct priv *VAR_5 = VAR_2->priv;

    switch (VAR_3) {
    case 132:
        if (VAR_5->renderer_enabled)
            FUNC_4(VAR_2);
        VAR_2->want_redraw = 1;
        return VAR_1;
    case 128:
        if (VAR_5->renderer_enabled)
            FUNC_3(VAR_2);
        VAR_2->want_redraw = 1;
        return VAR_1;
    case 130:
        FUNC_6(VAR_2);
        return VAR_1;
    case 129:
        *(struct mp_image **)VAR_4 = FUNC_5(VAR_2);
        return VAR_1;
    case 133: {
        FUNC_0(&VAR_5->display_mutex);
        bool VAR_6 = VAR_5->reload_display;
        VAR_5->reload_display = 0;
        FUNC_1(&VAR_5->display_mutex);
        if (VAR_6)
            FUNC_2(VAR_2);
        return VAR_1;
    }
    case 131:
        *(double *)VAR_4 = VAR_5->display_fps;
        return VAR_1;
    }

    return VAR_0;
}
