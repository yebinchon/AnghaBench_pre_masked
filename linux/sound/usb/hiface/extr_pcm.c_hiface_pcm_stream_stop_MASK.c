
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcm_runtime {scalar_t__ stream_state; TYPE_1__* out_urbs; } ;
struct TYPE_2__ {int instance; int submitted; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct pcm_runtime *VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_3->stream_state != VAR_1) {
  VAR_3->stream_state = VAR_2;

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   VAR_5 = FUNC_2(
     &VAR_3->out_urbs[VAR_4].submitted, 100);
   if (!VAR_5)
    FUNC_0(
     &VAR_3->out_urbs[VAR_4].submitted);
   FUNC_1(&VAR_3->out_urbs[VAR_4].instance);
  }

  VAR_3->stream_state = VAR_1;
 }
}
