
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int total_frames; int skipped_frames; } ;
typedef TYPE_1__ video_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,double) ;
 long FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(video_t *VAR_1)
{
 long VAR_2 = FUNC_1(&VAR_1->skipped_frames);
 double VAR_3 =
  (double)VAR_2 /
  (double)FUNC_1(&VAR_1->total_frames) * 100.0;

 if (VAR_2)
  FUNC_0(VAR_0,
       "Video stopped, number of "
       "skipped frames due "
       "to encoding lag: "
       "%ld/%ld (%0.1f%%)",
       VAR_1->skipped_frames, VAR_1->total_frames,
       VAR_3);
}
