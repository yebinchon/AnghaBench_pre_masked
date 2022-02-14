
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint64_t ;
typedef scalar_t__ time_t ;
struct TYPE_4__ {scalar_t__ is_animated_gif; scalar_t__ cur_time; scalar_t__ cur_loop; scalar_t__ cur_frame; } ;
struct TYPE_5__ {TYPE_1__ image; } ;
struct image_source {float update_time_elapsed; scalar_t__ file_timestamp; int active; void* last_time; TYPE_2__ if2; int source; int file; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,void*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct image_source*) ;
 int FUNC_4 () ;
 void* FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void *VAR_0, float VAR_1)
{
 struct image_source *VAR_2 = VAR_0;
 uint64_t VAR_3 = FUNC_5();

 VAR_2->update_time_elapsed += VAR_1;

 if (VAR_2->update_time_elapsed >= 1.0f) {
  time_t VAR_4 = FUNC_0(VAR_2->file);
  VAR_2->update_time_elapsed = 0.0f;

  if (VAR_2->file_timestamp != VAR_4) {
   FUNC_3(VAR_2);
  }
 }

 if (FUNC_7(VAR_2->source)) {
  if (!VAR_2->active) {
   if (VAR_2->if2.image.is_animated_gif)
    VAR_2->last_time = VAR_3;
   VAR_2->active = 1;
  }

 } else {
  if (VAR_2->active) {
   if (VAR_2->if2.image.is_animated_gif) {
    VAR_2->if2.image.cur_frame = 0;
    VAR_2->if2.image.cur_loop = 0;
    VAR_2->if2.image.cur_time = 0;

    FUNC_4();
    FUNC_2(&VAR_2->if2);
    FUNC_6();
   }

   VAR_2->active = 0;
  }

  return;
 }

 if (VAR_2->last_time && VAR_2->if2.image.is_animated_gif) {
  uint64_t VAR_5 = VAR_3 - VAR_2->last_time;
  bool VAR_6 = FUNC_1(&VAR_2->if2, VAR_5);

  if (VAR_6) {
   FUNC_4();
   FUNC_2(&VAR_2->if2);
   FUNC_6();
  }
 }

 VAR_2->last_time = VAR_3;
}
