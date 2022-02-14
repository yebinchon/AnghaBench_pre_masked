
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_line6_pcm {TYPE_1__* line6; } ;
struct line6_pcm_stream {int active_urbs; } ;
struct TYPE_2__ {int iso_buffers; int ifcdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct snd_line6_pcm *VAR_2,
     struct line6_pcm_stream *VAR_3)
{
 int VAR_4 = VAR_0;
 int VAR_5;
 int VAR_6;

 do {
  VAR_6 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_2->line6->iso_buffers; VAR_5++) {
   if (FUNC_3(VAR_5, &VAR_3->active_urbs))
    VAR_6++;
  }
  if (!VAR_6)
   break;
  FUNC_2(VAR_1);
  FUNC_1(1);
 } while (--VAR_4 > 0);
 if (VAR_6)
  FUNC_0(VAR_2->line6->ifcdev,
   "timeout: still %d active urbs..\n", VAR_6);
}
