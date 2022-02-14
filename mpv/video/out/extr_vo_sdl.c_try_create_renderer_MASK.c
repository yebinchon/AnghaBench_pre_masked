
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct TYPE_5__ {int name; } ;
struct priv {int renderer_index; TYPE_1__ renderer_info; int osd_format; int allow_sw; int renderer; int window; } ;
typedef TYPE_1__ SDL_RendererInfo ;


 int FUNC_0 (struct vo*,char*,...) ;
 int FUNC_1 (struct vo*,char*,int ) ;
 int FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (int,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (struct vo*) ;
 int FUNC_6 (TYPE_1__*,char const*,int ,int *) ;

__attribute__((used)) static bool FUNC_7(struct vo *VAR_0, int VAR_1, const char *VAR_2)
{
    struct priv *VAR_3 = VAR_0->priv;


    SDL_RendererInfo VAR_4;
    if (FUNC_3(VAR_1, &VAR_4))
        return 0;
    if (!FUNC_6(&VAR_4, VAR_2, VAR_3->allow_sw, ((void*)0)))
        return 0;

    VAR_3->renderer = FUNC_2(VAR_3->window, VAR_1, 0);
    if (!VAR_3->renderer) {
        FUNC_0(VAR_0, "SDL_CreateRenderer failed\n");
        return 0;
    }

    if (FUNC_4(VAR_3->renderer, &VAR_3->renderer_info)) {
        FUNC_0(VAR_0, "SDL_GetRendererInfo failed\n");
        FUNC_5(VAR_0);
        return 0;
    }

    if (!FUNC_6(&VAR_3->renderer_info, ((void*)0), VAR_3->allow_sw,
                          &VAR_3->osd_format)) {
        FUNC_0(VAR_0, "Renderer '%s' does not fulfill "
                                  "requirements on this system\n",
                                  VAR_3->renderer_info.name);
        FUNC_5(VAR_0);
        return 0;
    }

    if (VAR_3->renderer_index != VAR_1) {
        FUNC_1(VAR_0, "Using %s\n", VAR_3->renderer_info.name);
        VAR_3->renderer_index = VAR_1;
    }

    return 1;
}
