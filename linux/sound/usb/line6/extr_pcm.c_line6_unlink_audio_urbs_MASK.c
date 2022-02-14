
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_line6_pcm {TYPE_1__* line6; } ;
struct line6_pcm_stream {int * urbs; int unlink_urbs; int active_urbs; } ;
struct TYPE_2__ {int iso_buffers; } ;


 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct snd_line6_pcm *VAR_0,
        struct line6_pcm_stream *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->line6->iso_buffers; VAR_2++) {
  if (FUNC_1(VAR_2, &VAR_1->active_urbs)) {
   if (!FUNC_0(VAR_2, &VAR_1->unlink_urbs))
    FUNC_2(VAR_1->urbs[VAR_2]);
  }
 }
}
