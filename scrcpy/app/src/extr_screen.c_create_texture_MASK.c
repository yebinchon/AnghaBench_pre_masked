
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct size {int height; int width; } ;
typedef int SDL_Texture ;
typedef int SDL_Renderer ;


 int * FUNC_0 (int *,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline SDL_Texture *
FUNC_1(SDL_Renderer *VAR_2, struct size VAR_3) {
    return FUNC_0(VAR_2, VAR_0,
                             VAR_1,
                             VAR_3.width, VAR_3.height);
}
