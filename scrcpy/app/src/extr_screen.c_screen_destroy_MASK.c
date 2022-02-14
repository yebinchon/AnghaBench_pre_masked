
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct screen {scalar_t__ window; scalar_t__ renderer; scalar_t__ texture; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3(struct screen *VAR_0) {
    if (VAR_0->texture) {
        FUNC_1(VAR_0->texture);
    }
    if (VAR_0->renderer) {
        FUNC_0(VAR_0->renderer);
    }
    if (VAR_0->window) {
        FUNC_2(VAR_0->window);
    }
}
