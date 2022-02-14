
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_output {int stop_event; int write_sem; int write_mutex; int start_thread; scalar_t__ connecting; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (struct ffmpeg_output*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
 struct ffmpeg_output *VAR_1 = VAR_0;

 if (VAR_1) {
  if (VAR_1->connecting)
   FUNC_4(VAR_1->start_thread, ((void*)0));

  FUNC_1(VAR_1);

  FUNC_5(&VAR_1->write_mutex);
  FUNC_3(VAR_1->write_sem);
  FUNC_2(VAR_1->stop_event);
  FUNC_0(VAR_0);
 }
}
