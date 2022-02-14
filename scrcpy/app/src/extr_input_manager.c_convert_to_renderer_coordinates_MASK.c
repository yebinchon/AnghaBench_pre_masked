
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; } ;
typedef int SDL_Renderer ;
typedef TYPE_1__ SDL_Rect ;


 int FUNC_0 (int *,float*,float*) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(SDL_Renderer *VAR_0, int *VAR_1, int *VAR_2) {
    SDL_Rect VAR_3;
    float VAR_4, VAR_5;
    FUNC_1(VAR_0, &VAR_3);
    FUNC_0(VAR_0, &VAR_4, &VAR_5);
    *VAR_1 = (int) (*VAR_1 / VAR_4) - VAR_3.x;
    *VAR_2 = (int) (*VAR_2 / VAR_5) - VAR_3.y;
}
