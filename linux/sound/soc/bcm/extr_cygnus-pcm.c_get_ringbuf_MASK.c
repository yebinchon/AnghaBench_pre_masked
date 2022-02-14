
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; } ;
struct ringbuf_regs {int dummy; } ;
struct cygnus_aio_port {struct ringbuf_regs capture_rb_regs; struct ringbuf_regs play_rb_regs; } ;


 scalar_t__ VAR_0 ;
 struct cygnus_aio_port* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static struct ringbuf_regs *FUNC_1(struct snd_pcm_substream *VAR_1)
{
 struct cygnus_aio_port *VAR_2;
 struct ringbuf_regs *VAR_3 = ((void*)0);

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_1->stream == VAR_0)
  VAR_3 = &VAR_2->play_rb_regs;
 else
  VAR_3 = &VAR_2->capture_rb_regs;

 return VAR_3;
}
