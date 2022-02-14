
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {float x; float y; } ;
struct TYPE_5__ {float x; float y; } ;
struct TYPE_4__ {float x; float y; } ;
struct scroll_filter_data {TYPE_3__ offset; scalar_t__ loop; TYPE_2__ scroll_speed; TYPE_1__ size_i; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, float VAR_1)
{
 struct scroll_filter_data *VAR_2 = VAR_0;

 VAR_2->offset.x += VAR_2->size_i.x * VAR_2->scroll_speed.x * VAR_1;
 VAR_2->offset.y += VAR_2->size_i.y * VAR_2->scroll_speed.y * VAR_1;

 if (VAR_2->loop) {
  if (VAR_2->offset.x > 1.0f)
   VAR_2->offset.x -= 1.0f;
  if (VAR_2->offset.y > 1.0f)
   VAR_2->offset.y -= 1.0f;
 } else {
  if (VAR_2->offset.x > 1.0f)
   VAR_2->offset.x = 1.0f;
  if (VAR_2->offset.y > 1.0f)
   VAR_2->offset.y = 1.0f;
 }
}
