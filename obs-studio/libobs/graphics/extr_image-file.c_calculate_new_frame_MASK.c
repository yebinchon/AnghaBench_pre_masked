
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {unsigned int frame_count; } ;
struct TYPE_6__ {int cur_frame; scalar_t__ cur_time; int cur_loop; TYPE_1__ gif; } ;
typedef TYPE_2__ gs_image_file_t ;


 scalar_t__ FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static inline int FUNC_1(gs_image_file_t *VAR_0,
          uint64_t VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0->cur_frame;

 VAR_0->cur_time += VAR_1;
 for (;;) {
  uint64_t VAR_4 = FUNC_0(VAR_0, VAR_3);
  if (VAR_0->cur_time <= VAR_4)
   break;

  VAR_0->cur_time -= VAR_4;
  if ((unsigned int)++VAR_3 == VAR_0->gif.frame_count) {
   if (!VAR_2 || ++VAR_0->cur_loop < VAR_2) {
    VAR_3 = 0;
   } else if (VAR_0->cur_loop == VAR_2) {
    VAR_3--;
    break;
   }
  }
 }

 return VAR_3;
}
