
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int height; int width; } ;
struct TYPE_3__ {int y; int x; } ;
struct position {TYPE_2__ screen_size; TYPE_1__ point; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(uint8_t *VAR_0, const struct position *VAR_1) {
    FUNC_1(&VAR_0[0], VAR_1->point.x);
    FUNC_1(&VAR_0[4], VAR_1->point.y);
    FUNC_0(&VAR_0[8], VAR_1->screen_size.width);
    FUNC_0(&VAR_0[10], VAR_1->screen_size.height);
}
