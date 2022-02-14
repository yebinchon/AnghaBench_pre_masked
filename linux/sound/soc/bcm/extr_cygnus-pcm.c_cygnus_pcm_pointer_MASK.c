
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; int runtime; } ;
struct ringbuf_regs {scalar_t__ baseaddr; scalar_t__ wraddr; scalar_t__ rdaddr; } ;
struct cygnus_aio_port {TYPE_1__* cygaud; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {scalar_t__ audio; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 struct cygnus_aio_port* FUNC_1 (struct snd_pcm_substream*) ;
 struct ringbuf_regs* FUNC_2 (struct snd_pcm_substream*) ;
 unsigned int FUNC_3 (scalar_t__) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct cygnus_aio_port *VAR_2;
 unsigned int VAR_3 = 0, VAR_4 = 0, VAR_5 = 0;
 struct ringbuf_regs *VAR_6 = ((void*)0);

 VAR_2 = FUNC_1(VAR_1);





 VAR_6 = FUNC_2(VAR_1);
 if (VAR_1->stream == VAR_0)
  VAR_4 = FUNC_3(VAR_2->cygaud->audio + VAR_6->rdaddr);
 else
  VAR_4 = FUNC_3(VAR_2->cygaud->audio + VAR_6->wraddr);

 VAR_5 = FUNC_3(VAR_2->cygaud->audio + VAR_6->baseaddr);





 VAR_3 = (VAR_4 & 0x7fffffff) - (VAR_5 & 0x7fffffff);

 return FUNC_0(VAR_1->runtime, VAR_3);
}
