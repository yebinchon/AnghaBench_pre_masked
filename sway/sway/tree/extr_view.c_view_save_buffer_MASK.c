
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_view {TYPE_2__* surface; int saved_buffer_height; int saved_buffer_width; scalar_t__ saved_buffer; } ;
struct TYPE_3__ {int height; int width; } ;
struct TYPE_4__ {TYPE_1__ current; int buffer; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sway_view*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

void FUNC_4(struct sway_view *VAR_0) {
 if (!FUNC_0(!VAR_0->saved_buffer, "Didn't expect saved buffer")) {
  FUNC_1(VAR_0);
 }
 if (VAR_0->surface && FUNC_3(VAR_0->surface)) {
  VAR_0->saved_buffer = FUNC_2(VAR_0->surface->buffer);
  VAR_0->saved_buffer_width = VAR_0->surface->current.width;
  VAR_0->saved_buffer_height = VAR_0->surface->current.height;
 }
}
