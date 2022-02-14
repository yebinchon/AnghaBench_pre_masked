
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {struct pcm_urb* context; } ;
struct pcm_urb {TYPE_1__* chip; } ;
struct pcm_runtime {scalar_t__ stream_state; int stream_wait_cond; int stream_wait_queue; } ;
struct TYPE_2__ {struct pcm_runtime* pcm; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct urb *VAR_1)
{
 struct pcm_urb *VAR_2 = VAR_1->context;
 struct pcm_runtime *VAR_3 = VAR_2->chip->pcm;

 if (VAR_3->stream_state == VAR_0) {
  VAR_3->stream_wait_cond = 1;
  FUNC_0(&VAR_3->stream_wait_queue);
 }
}
