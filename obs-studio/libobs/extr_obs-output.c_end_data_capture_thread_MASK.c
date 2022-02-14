
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int end_data_capture_thread_active; int stopping_event; int active; scalar_t__ active_delay_ns; int service; int video; int video_encoder; } ;
typedef TYPE_1__ obs_output_t ;
typedef int encoded_callback_t ;


 int FUNC_0 (TYPE_1__*,int ,int*,int*,int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void *FUNC_10(void *VAR_4)
{
 bool VAR_5, VAR_6, VAR_7, VAR_8;
 encoded_callback_t VAR_9;
 obs_output_t *VAR_10 = VAR_4;

 FUNC_0(VAR_10, 0, &VAR_5, &VAR_6, &VAR_7,
        &VAR_8);

 if (VAR_5) {
  if (VAR_10->active_delay_ns)
   VAR_9 = VAR_3;
  else
   VAR_9 = (VAR_6 && VAR_7)
         ? VAR_2
         : VAR_0;

  if (VAR_6)
   FUNC_2(VAR_10->video_encoder,
      VAR_9, VAR_10);
  if (VAR_7)
   FUNC_7(VAR_10, VAR_9);
 } else {
  if (VAR_6)
   FUNC_9(VAR_10->video,
           VAR_1, VAR_10);
  if (VAR_7)
   FUNC_8(VAR_10);
 }

 if (VAR_8)
  FUNC_4(VAR_10->service, 0);

 if (VAR_10->active_delay_ns)
  FUNC_3(VAR_10);

 FUNC_1(VAR_10, "deactivate");
 FUNC_5(&VAR_10->active, 0);
 FUNC_6(VAR_10->stopping_event);
 FUNC_5(&VAR_10->end_data_capture_thread_active, 0);

 return ((void*)0);
}
