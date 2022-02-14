
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_stream_kernel {int out_phase_peeked; int out_phase; int freqn; struct usb_stream* s; } ;
struct TYPE_2__ {int frame_size; } ;
struct usb_stream {TYPE_1__ cfg; } ;



__attribute__((used)) static unsigned FUNC_0(struct usb_stream_kernel *VAR_0)
{
 struct usb_stream *VAR_1 = VAR_0->s;
 VAR_0->out_phase_peeked = (VAR_0->out_phase & 0xffff) + VAR_0->freqn;
 return (VAR_0->out_phase_peeked >> 16) * VAR_1->cfg.frame_size;
}
