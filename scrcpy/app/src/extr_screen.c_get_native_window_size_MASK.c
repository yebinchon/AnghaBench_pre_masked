
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct size {int width; int height; } ;
typedef int SDL_Window ;


 int FUNC_0 (int *,int*,int*) ;

__attribute__((used)) static struct size
FUNC_1(SDL_Window *VAR_0) {
    int VAR_1;
    int VAR_2;
    FUNC_0(VAR_0, &VAR_1, &VAR_2);

    struct size VAR_3;
    VAR_3.width = VAR_1;
    VAR_3.height = VAR_2;
    return VAR_3;
}
