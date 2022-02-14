
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {int dheight; int dwidth; struct priv* priv; } ;
struct TYPE_2__ {int sdl; int mpv; } ;
struct priv {TYPE_1__ osd_format; int renderer; } ;
struct mp_image {int * stride; int * planes; } ;


 int FUNC_0 (struct vo*,char*) ;
 scalar_t__ FUNC_1 (int ,int *,int ,int ,int ) ;
 struct mp_image* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct mp_image*) ;

__attribute__((used)) static struct mp_image *FUNC_4(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    struct mp_image *VAR_2 = FUNC_2(VAR_1->osd_format.mpv, VAR_0->dwidth,
                                                                VAR_0->dheight);
    if (!VAR_2)
        return ((void*)0);
    if (FUNC_1(VAR_1->renderer, ((void*)0), VAR_1->osd_format.sdl,
                             VAR_2->planes[0], VAR_2->stride[0])) {
        FUNC_0(VAR_0, "SDL_RenderReadPixels failed\n");
        FUNC_3(VAR_2);
        return ((void*)0);
    }
    return VAR_2;
}
