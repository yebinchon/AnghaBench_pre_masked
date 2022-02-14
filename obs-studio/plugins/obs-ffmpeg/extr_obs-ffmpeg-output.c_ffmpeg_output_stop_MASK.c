
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ffmpeg_output {scalar_t__ stop_ts; int stopping; scalar_t__ active; } ;


 int FUNC_0 (struct ffmpeg_output*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, uint64_t VAR_1)
{
 struct ffmpeg_output *VAR_2 = VAR_0;

 if (VAR_2->active) {
  if (VAR_1 == 0) {
   FUNC_0(VAR_2);
  } else {
   FUNC_1(&VAR_2->stopping, 1);
   VAR_2->stop_ts = VAR_1;
  }
 }
}
