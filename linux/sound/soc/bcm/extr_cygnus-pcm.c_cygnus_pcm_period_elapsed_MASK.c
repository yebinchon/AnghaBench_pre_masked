
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct ringbuf_regs {scalar_t__ rdaddr; scalar_t__ wraddr; } ;
struct cygnus_aio_port {TYPE_1__* cygaud; } ;
struct TYPE_2__ {scalar_t__ audio; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct cygnus_aio_port* FUNC_1 (struct snd_pcm_substream*) ;
 struct ringbuf_regs* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct snd_pcm_substream *VAR_1)
{
 struct cygnus_aio_port *VAR_2;
 struct ringbuf_regs *VAR_3 = ((void*)0);
 u32 VAR_4;

 VAR_2 = FUNC_1(VAR_1);

 VAR_3 = FUNC_2(VAR_1);





 FUNC_4(VAR_1);

 if (VAR_1->stream == VAR_0) {

  VAR_4 = FUNC_3(VAR_2->cygaud->audio + VAR_3->rdaddr);
  VAR_4 = VAR_4 ^ FUNC_0(31);
  FUNC_5(VAR_4, VAR_2->cygaud->audio + VAR_3->wraddr);
 } else {

  VAR_4 = FUNC_3(VAR_2->cygaud->audio + VAR_3->wraddr);
  FUNC_5(VAR_4, VAR_2->cygaud->audio + VAR_3->rdaddr);
 }
}
