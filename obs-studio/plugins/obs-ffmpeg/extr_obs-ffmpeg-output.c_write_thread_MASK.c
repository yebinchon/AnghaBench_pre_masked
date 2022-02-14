
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ffmpeg_output {int write_thread_active; int active; int output; int write_thread; int stop_event; int write_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ffmpeg_output*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ffmpeg_output*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void *FUNC_6(void *VAR_3)
{
 struct ffmpeg_output *VAR_4 = VAR_3;

 while (FUNC_3(VAR_4->write_sem) == 0) {

  if (FUNC_2(VAR_4->stop_event) == 0)
   break;

  int VAR_5 = FUNC_4(VAR_4);
  if (VAR_5 != 0) {
   int VAR_6 = VAR_1;

   FUNC_5(VAR_4->write_thread);
   VAR_4->write_thread_active = 0;

   if (VAR_5 == -VAR_0)
    VAR_6 = VAR_2;

   FUNC_1(VAR_4->output, VAR_6);
   FUNC_0(VAR_4);
   break;
  }
 }

 VAR_4->active = 0;
 return ((void*)0);
}
