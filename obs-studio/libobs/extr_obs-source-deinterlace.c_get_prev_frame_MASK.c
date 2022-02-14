
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct obs_source_frame {int refs; } ;
struct TYPE_3__ {int async_mutex; struct obs_source_frame* prev_async_frame; int * cur_async_frame; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline struct obs_source_frame *FUNC_3(obs_source_t *VAR_0,
            bool *VAR_1)
{
 struct obs_source_frame *VAR_2 = ((void*)0);

 FUNC_1(&VAR_0->async_mutex);

 *VAR_1 = VAR_0->cur_async_frame != ((void*)0);
 VAR_2 = VAR_0->prev_async_frame;
 VAR_0->prev_async_frame = ((void*)0);

 if (VAR_2)
  FUNC_0(&VAR_2->refs);

 FUNC_2(&VAR_0->async_mutex);

 return VAR_2;
}
