
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ async_format; scalar_t__ async_width; scalar_t__ async_height; int deinterlace_mode; int async_mutex; int * prev_async_frame; int deinterlace_effect; } ;
typedef TYPE_1__ obs_source_t ;
typedef enum obs_deinterlace_mode { ____Placeholder_obs_deinterlace_mode } obs_deinterlace_mode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(obs_source_t *VAR_1,
     enum obs_deinterlace_mode VAR_2)
{
 FUNC_1();

 if (VAR_1->async_format != VAR_0 &&
     VAR_1->async_width != 0 && VAR_1->async_height != 0)
  FUNC_6(VAR_1);

 VAR_1->deinterlace_mode = VAR_2;
 VAR_1->deinterlace_effect = FUNC_0(VAR_2);

 FUNC_3(&VAR_1->async_mutex);
 if (VAR_1->prev_async_frame) {
  FUNC_5(VAR_1, VAR_1->prev_async_frame);
  VAR_1->prev_async_frame = ((void*)0);
 }
 FUNC_4(&VAR_1->async_mutex);

 FUNC_2();
}
