
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; } ;
struct slideshow {float slide_time; int restart_on_activate; int use_cut; float elapsed; int cur_item; int stop; TYPE_1__ files; scalar_t__ randomize; scalar_t__ hide; int loop; int transition; scalar_t__ paused; scalar_t__ manual; scalar_t__ pause_on_deactivate; } ;
typedef int obs_source_t ;


 int FUNC_0 (struct slideshow*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 size_t FUNC_3 (struct slideshow*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, float VAR_1)
{
 struct slideshow *VAR_2 = VAR_0;

 if (!VAR_2->transition || !VAR_2->slide_time)
  return;

 if (VAR_2->restart_on_activate && !VAR_2->randomize && VAR_2->use_cut) {
  VAR_2->elapsed = 0.0f;
  VAR_2->cur_item = 0;
  FUNC_0(VAR_2, 0);
  VAR_2->restart_on_activate = 0;
  VAR_2->use_cut = 0;
  VAR_2->stop = 0;
  return;
 }

 if (VAR_2->pause_on_deactivate || VAR_2->manual || VAR_2->stop || VAR_2->paused)
  return;



 if (!VAR_2->files.num) {
  obs_source_t *VAR_3 =
   FUNC_2(VAR_2->transition);

  if (VAR_3) {
   FUNC_1(VAR_3);
   FUNC_0(VAR_2, 1);
  }
 }



 VAR_2->elapsed += VAR_1;

 if (VAR_2->elapsed > VAR_2->slide_time) {
  VAR_2->elapsed -= VAR_2->slide_time;

  if (!VAR_2->loop && VAR_2->cur_item == VAR_2->files.num - 1) {
   if (VAR_2->hide)
    FUNC_0(VAR_2, 1);
   else
    FUNC_0(VAR_2, 0);

   return;
  }

  if (VAR_2->randomize) {
   size_t VAR_4 = VAR_2->cur_item;
   if (VAR_2->files.num > 1) {
    while (VAR_4 == VAR_2->cur_item)
     VAR_4 = FUNC_3(VAR_2);
   }
   VAR_2->cur_item = VAR_4;

  } else if (++VAR_2->cur_item >= VAR_2->files.num) {
   VAR_2->cur_item = 0;
  }

  if (VAR_2->files.num)
   FUNC_0(VAR_2, 0);
 }
}
