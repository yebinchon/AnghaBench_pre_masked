
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcm_runtime {scalar_t__ stream_state; TYPE_2__* out_urbs; TYPE_1__* in_urbs; TYPE_3__* chip; } ;
struct control_runtime {int usb_streaming; int (* update_streaming ) (struct control_runtime*) ;} ;
struct TYPE_6__ {struct control_runtime* control; } ;
struct TYPE_5__ {int instance; } ;
struct TYPE_4__ {int instance; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct control_runtime*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct pcm_runtime *VAR_3)
{
 int VAR_4;
 struct control_runtime *VAR_5 = VAR_3->chip->control;

 if (VAR_3->stream_state != VAR_1) {

  VAR_3->stream_state = VAR_2;

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   FUNC_1(&VAR_3->in_urbs[VAR_4].instance);
   FUNC_1(&VAR_3->out_urbs[VAR_4].instance);
  }
  VAR_5->usb_streaming = 0;
  VAR_5->update_streaming(VAR_5);
  VAR_3->stream_state = VAR_1;
 }
}
