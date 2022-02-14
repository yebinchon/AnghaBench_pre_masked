
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ top; scalar_t__ right; scalar_t__ bottom; scalar_t__ left; } ;
struct sway_workspace {scalar_t__ gaps_inner; scalar_t__ width; scalar_t__ height; TYPE_1__ current_gaps; int y; int x; TYPE_1__ gaps_outer; } ;
struct sway_seat {int dummy; } ;
struct sway_container {scalar_t__ view; int node; } ;
struct TYPE_4__ {scalar_t__ smart_gaps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 void* FUNC_0 (int ,scalar_t__) ;
 struct sway_seat* FUNC_1 () ;
 struct sway_container* FUNC_2 (struct sway_seat*,struct sway_workspace*) ;
 struct sway_container* FUNC_3 (struct sway_seat*,int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

void FUNC_5(struct sway_workspace *VAR_3) {
 if (VAR_2->smart_gaps) {
  struct sway_seat *VAR_4 = FUNC_1();
  struct sway_container *VAR_5 =
   FUNC_2(VAR_4, VAR_3);
  if (VAR_5 && !VAR_5->view) {
   VAR_5 = FUNC_3(VAR_4, &VAR_5->node);
  }
  if (VAR_5 && VAR_5->view && FUNC_4(VAR_5->view)) {
   VAR_3->current_gaps.top = 0;
   VAR_3->current_gaps.right = 0;
   VAR_3->current_gaps.bottom = 0;
   VAR_3->current_gaps.left = 0;
   return;
  }
 }

 VAR_3->current_gaps = VAR_3->gaps_outer;

 VAR_3->current_gaps.top = FUNC_0(0, VAR_3->current_gaps.top + VAR_3->gaps_inner);
 VAR_3->current_gaps.right = FUNC_0(0, VAR_3->current_gaps.right + VAR_3->gaps_inner);
 VAR_3->current_gaps.bottom = FUNC_0(0, VAR_3->current_gaps.bottom + VAR_3->gaps_inner);
 VAR_3->current_gaps.left = FUNC_0(0, VAR_3->current_gaps.left + VAR_3->gaps_inner);



 if (VAR_3->width - VAR_3->current_gaps.left - VAR_3->current_gaps.right < VAR_1
   && VAR_3->current_gaps.left + VAR_3->current_gaps.right > 0) {
  int VAR_6 = FUNC_0(0, VAR_3->width - VAR_1);
  double VAR_7 = ((double)VAR_3->current_gaps.left /
   ((double)VAR_3->current_gaps.left + (double)VAR_3->current_gaps.right));
  VAR_3->current_gaps.left = VAR_7 * VAR_6;
  VAR_3->current_gaps.right = VAR_6 - VAR_3->current_gaps.left;
 }
 if (VAR_3->height - VAR_3->current_gaps.top - VAR_3->current_gaps.bottom < VAR_0
   && VAR_3->current_gaps.top + VAR_3->current_gaps.bottom > 0) {
  int VAR_8 = FUNC_0(0, VAR_3->height - VAR_0);
  double VAR_9 = ((double) VAR_3->current_gaps.top /
   ((double)VAR_3->current_gaps.top + (double)VAR_3->current_gaps.bottom));
  VAR_3->current_gaps.top = VAR_9 * VAR_8;
  VAR_3->current_gaps.bottom = VAR_8 - VAR_3->current_gaps.top;
 }

 VAR_3->x += VAR_3->current_gaps.left;
 VAR_3->y += VAR_3->current_gaps.top;
 VAR_3->width -= VAR_3->current_gaps.left + VAR_3->current_gaps.right;
 VAR_3->height -= VAR_3->current_gaps.top + VAR_3->current_gaps.bottom;
}
