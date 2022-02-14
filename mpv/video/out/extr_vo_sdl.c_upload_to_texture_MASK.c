
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct TYPE_2__ {scalar_t__ sdl; } ;
struct priv {TYPE_1__ osd_format; } ;
typedef int SDL_Texture ;


 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (int,int,scalar_t__,void*,int,scalar_t__,void*,int) ;
 scalar_t__ FUNC_2 (int *,int *,void**,int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,void*,int) ;

__attribute__((used)) static inline void FUNC_5(struct vo *VAR_1, SDL_Texture *VAR_2,
                                     int VAR_3, int VAR_4, void *VAR_5, int VAR_6)
{
    struct priv *VAR_7 = VAR_1->priv;

    if (VAR_7->osd_format.sdl == VAR_0) {



        FUNC_4(VAR_2, ((void*)0), VAR_5, VAR_6);
        return;
    }

    void *VAR_8;
    int VAR_9;
    if (FUNC_2(VAR_2, ((void*)0), &VAR_8, &VAR_9)) {
        FUNC_0(VAR_1, "Could not lock texture\n");
    } else {
        FUNC_1(VAR_3, VAR_4, VAR_0,
                          VAR_5, VAR_6,
                          VAR_7->osd_format.sdl,
                          VAR_8, VAR_9);
        FUNC_3(VAR_2);
    }
}
