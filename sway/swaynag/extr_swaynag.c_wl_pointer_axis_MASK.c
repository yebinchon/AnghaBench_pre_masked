
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wl_fixed_t ;
typedef int uint32_t ;
struct wl_pointer {int dummy; } ;
struct TYPE_4__ {scalar_t__ x; scalar_t__ y; scalar_t__ width; scalar_t__ height; scalar_t__ total_lines; scalar_t__ visible_lines; int offset; int visible; } ;
struct TYPE_3__ {scalar_t__ x; scalar_t__ y; } ;
struct swaynag {TYPE_2__ details; TYPE_1__ pointer; } ;


 int FUNC_0 (struct swaynag*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, struct wl_pointer *VAR_1,
  uint32_t VAR_2, uint32_t VAR_3, wl_fixed_t VAR_4) {
 struct swaynag *VAR_5 = VAR_0;
 if (!VAR_5->details.visible
   || VAR_5->pointer.x < VAR_5->details.x
   || VAR_5->pointer.y < VAR_5->details.y
   || VAR_5->pointer.x >= VAR_5->details.x + VAR_5->details.width
   || VAR_5->pointer.y >= VAR_5->details.y + VAR_5->details.height
   || VAR_5->details.total_lines == VAR_5->details.visible_lines) {
  return;
 }

 int VAR_6 = FUNC_1(VAR_4);
 int VAR_7 = VAR_5->details.total_lines - VAR_5->details.visible_lines;
 if (VAR_6 < 0 && VAR_5->details.offset > 0) {
  VAR_5->details.offset--;
 } else if (VAR_6 > 0 && VAR_5->details.offset < VAR_7) {
  VAR_5->details.offset++;
 }

 FUNC_0(VAR_5);
}
