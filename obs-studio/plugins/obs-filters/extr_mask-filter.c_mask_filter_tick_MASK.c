
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
typedef scalar_t__ time_t ;
struct TYPE_3__ {scalar_t__ is_animated_gif; } ;
struct mask_filter_data {float update_time_elapsed; scalar_t__ image_file_timestamp; void* last_time; TYPE_1__ image; int image_file; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct mask_filter_data*) ;
 int FUNC_4 () ;
 void* FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void *VAR_0, float VAR_1)
{
 struct mask_filter_data *VAR_2 = VAR_0;
 VAR_2->update_time_elapsed += VAR_1;

 if (VAR_2->update_time_elapsed >= 1.0f) {
  time_t VAR_3 = FUNC_0(VAR_2->image_file);
  VAR_2->update_time_elapsed = 0.0f;

  if (VAR_2->image_file_timestamp != VAR_3) {
   FUNC_3(VAR_2);
  }
 }

 if (VAR_2->image.is_animated_gif) {
  uint64_t VAR_4 = FUNC_5();

  if (!VAR_2->last_time)
   VAR_2->last_time = VAR_4;

  FUNC_1(&VAR_2->image,
       VAR_4 - VAR_2->last_time);
  FUNC_4();
  FUNC_2(&VAR_2->image);
  FUNC_6();

  VAR_2->last_time = VAR_4;
 }
}
