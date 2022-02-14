
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct atiixp_modem {int reg_lock; } ;
struct atiixp_dma {int running; TYPE_2__* ops; } ;
struct TYPE_4__ {int (* flush_dma ) (struct atiixp_modem*) ;int (* enable_transfer ) (struct atiixp_modem*,int) ;} ;
struct TYPE_3__ {struct atiixp_dma* private_data; } ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct atiixp_modem*) ;
 struct atiixp_modem* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct atiixp_modem*,int) ;
 int FUNC_6 (struct atiixp_modem*,int) ;
 int FUNC_7 (struct atiixp_modem*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct atiixp_modem *VAR_3 = FUNC_2(VAR_1);
 struct atiixp_dma *VAR_4 = VAR_1->runtime->private_data;
 int VAR_5 = 0;

 if (FUNC_0(!VAR_4->ops->enable_transfer ||
         !VAR_4->ops->flush_dma))
  return -VAR_0;

 FUNC_3(&VAR_3->reg_lock);
 switch(VAR_2) {
 case 129:
  VAR_4->ops->enable_transfer(VAR_3, 1);
  VAR_4->running = 1;
  break;
 case 128:
  VAR_4->ops->enable_transfer(VAR_3, 0);
  VAR_4->running = 0;
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }
 if (! VAR_5) {
 FUNC_1(VAR_3);
 if (VAR_2 == 128) {
  VAR_4->ops->flush_dma(VAR_3);
  FUNC_1(VAR_3);
 }
 }
 FUNC_4(&VAR_3->reg_lock);
 return VAR_5;
}
