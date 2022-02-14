
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct video_output {int total_frames; scalar_t__ stop; int update_semaphore; TYPE_1__ info; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*) ;
 char* FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (struct video_output*) ;

__attribute__((used)) static void *FUNC_9(void *VAR_0)
{
 struct video_output *VAR_1 = VAR_0;

 FUNC_3("video-io: video thread");

 const char *VAR_2 =
  FUNC_7(FUNC_0(),
       "video_thread(%s)", VAR_1->info.name);

 while (FUNC_2(VAR_1->update_semaphore) == 0) {
  if (VAR_1->stop)
   break;

  FUNC_6(VAR_2);
  while (!VAR_1->stop && !FUNC_8(VAR_1)) {
   FUNC_1(&VAR_1->total_frames);
  }

  FUNC_1(&VAR_1->total_frames);
  FUNC_4(VAR_2);

  FUNC_5();
 }

 return ((void*)0);
}
