
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; } ;
struct ringbuf_regs {int dummy; } ;
struct cygnus_aio_port {int portnum; struct ringbuf_regs capture_rb_regs; struct ringbuf_regs play_rb_regs; } ;


 int VAR_0 ;
 struct ringbuf_regs FUNC_0 (int) ;
 struct ringbuf_regs FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 struct cygnus_aio_port* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct cygnus_aio_port *VAR_3;
 struct ringbuf_regs *VAR_4;
 int VAR_5 = 0;

 VAR_3 = FUNC_2(VAR_2);


 if (VAR_2->stream == VAR_1) {
  VAR_4 = &VAR_3->play_rb_regs;

  switch (VAR_3->portnum) {
  case 0:
   *VAR_4 = FUNC_1(0);
   break;
  case 1:
   *VAR_4 = FUNC_1(2);
   break;
  case 2:
   *VAR_4 = FUNC_1(4);
   break;
  case 3:
   *VAR_4 = FUNC_1(6);
   break;
  default:
   VAR_5 = -VAR_0;
  }
 } else {
  VAR_4 = &VAR_3->capture_rb_regs;

  switch (VAR_3->portnum) {
  case 0:
   *VAR_4 = FUNC_0(0);
   break;
  case 1:
   *VAR_4 = FUNC_0(2);
   break;
  case 2:
   *VAR_4 = FUNC_0(4);
   break;
  default:
   VAR_5 = -VAR_0;
  }
 }

 return VAR_5;
}
