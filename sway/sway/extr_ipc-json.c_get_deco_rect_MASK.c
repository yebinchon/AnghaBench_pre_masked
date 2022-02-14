
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wlr_box {size_t x; size_t y; size_t width; size_t height; } ;
struct TYPE_7__ {scalar_t__ border; } ;
struct sway_container {scalar_t__ fullscreen_mode; size_t x; size_t y; size_t width; int view; TYPE_5__* workspace; TYPE_3__* parent; TYPE_1__ current; } ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;
struct TYPE_12__ {size_t length; } ;
struct TYPE_11__ {size_t x; size_t y; int width; TYPE_4__* tiling; } ;
struct TYPE_10__ {int length; } ;
struct TYPE_9__ {size_t x; size_t y; int width; TYPE_2__* children; } ;
struct TYPE_8__ {int length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_0 (struct sway_container*) ;
 scalar_t__ FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*) ;
 int FUNC_3 (struct sway_container*) ;
 size_t FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct sway_container *VAR_4, struct wlr_box *VAR_5) {
 enum sway_container_layout VAR_6 = FUNC_2(VAR_4);
 bool VAR_7 = VAR_6 == VAR_3 || VAR_6 == VAR_2;
 if (((!VAR_7 || FUNC_1(VAR_4)) &&
    VAR_4->current.border != VAR_0) ||
   VAR_4->fullscreen_mode != VAR_1 ||
   VAR_4->workspace == ((void*)0)) {
  VAR_5->x = VAR_5->y = VAR_5->width = VAR_5->height = 0;
  return;
 }

 if (VAR_4->parent) {
  VAR_5->x = VAR_4->x - VAR_4->parent->x;
  VAR_5->y = VAR_4->y - VAR_4->parent->y;
 } else {
  VAR_5->x = VAR_4->x - VAR_4->workspace->x;
  VAR_5->y = VAR_4->y - VAR_4->workspace->y;
 }
 VAR_5->width = VAR_4->width;
 VAR_5->height = FUNC_4();

 if (!FUNC_1(VAR_4)) {
  if (VAR_6 == VAR_3) {
   VAR_5->width = VAR_4->parent
    ? VAR_4->parent->width / VAR_4->parent->children->length
    : VAR_4->workspace->width / VAR_4->workspace->tiling->length;
   VAR_5->x += VAR_5->width * FUNC_3(VAR_4);
  } else if (VAR_6 == VAR_2) {
   if (!VAR_4->view) {
    size_t VAR_8 = FUNC_0(VAR_4)->length;
    VAR_5->y -= VAR_5->height * VAR_8;
   }
   VAR_5->y += VAR_5->height * FUNC_3(VAR_4);
  }
 }
}
