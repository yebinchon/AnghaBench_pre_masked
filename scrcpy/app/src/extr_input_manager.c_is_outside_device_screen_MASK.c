
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_manager {TYPE_2__* screen; } ;
struct TYPE_3__ {int width; int height; } ;
struct TYPE_4__ {TYPE_1__ frame_size; } ;



__attribute__((used)) static bool
FUNC_0(struct input_manager *VAR_0, int VAR_1, int VAR_2)
{
    return VAR_1 < 0 || VAR_1 >= VAR_0->screen->frame_size.width ||
           VAR_2 < 0 || VAR_2 >= VAR_0->screen->frame_size.height;
}
