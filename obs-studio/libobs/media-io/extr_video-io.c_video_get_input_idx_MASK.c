
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t num; struct video_input* array; } ;
struct TYPE_5__ {TYPE_1__ inputs; } ;
typedef TYPE_2__ video_t ;
struct video_input {void (* callback ) (void*,struct video_data*) ;void* param; } ;


 size_t VAR_0 ;

__attribute__((used)) static size_t FUNC_0(const video_t *VAR_1,
      void (*VAR_2)(void *VAR_3,
         struct video_data *VAR_4),
      void *VAR_5)
{
 for (size_t VAR_6 = 0; VAR_6 < VAR_1->inputs.num; VAR_6++) {
  struct video_input *VAR_7 = VAR_1->inputs.array + VAR_6;
  if (VAR_7->callback == VAR_2 && VAR_7->param == VAR_5)
   return VAR_6;
 }

 return VAR_0;
}
