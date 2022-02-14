
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct atiixp_dma {int running; int suspended; TYPE_2__* ops; int saved_curptr; } ;
struct atiixp {int reg_lock; scalar_t__ remap_addr; } ;
struct TYPE_4__ {int (* flush_dma ) (struct atiixp*) ;int (* enable_transfer ) (struct atiixp*,int) ;scalar_t__ dt_cur; } ;
struct TYPE_3__ {struct atiixp_dma* private_data; } ;


 int VAR_0 ;






 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct atiixp*) ;
 struct atiixp* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct atiixp*,int) ;
 int FUNC_7 (struct atiixp*,int) ;
 int FUNC_8 (struct atiixp*) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct atiixp *VAR_3 = FUNC_3(VAR_1);
 struct atiixp_dma *VAR_4 = VAR_1->runtime->private_data;
 int VAR_5 = 0;

 if (FUNC_1(!VAR_4->ops->enable_transfer ||
         !VAR_4->ops->flush_dma))
  return -VAR_0;

 FUNC_4(&VAR_3->reg_lock);
 switch (VAR_2) {
 case 130:
 case 132:
 case 131:
  if (VAR_4->running && VAR_4->suspended &&
      VAR_2 == 131)
   FUNC_9(VAR_4->saved_curptr, VAR_3->remap_addr +
          VAR_4->ops->dt_cur);
  VAR_4->ops->enable_transfer(VAR_3, 1);
  VAR_4->running = 1;
  VAR_4->suspended = 0;
  break;
 case 129:
 case 133:
 case 128:
  VAR_4->suspended = VAR_2 == 128;
  if (VAR_4->running && VAR_4->suspended)
   VAR_4->saved_curptr = FUNC_0(VAR_3->remap_addr +
        VAR_4->ops->dt_cur);
  VAR_4->ops->enable_transfer(VAR_3, 0);
  VAR_4->running = 0;
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }
 if (! VAR_5) {
  FUNC_2(VAR_3);
  if (VAR_2 == 129) {
   VAR_4->ops->flush_dma(VAR_3);
   FUNC_2(VAR_3);
  }
 }
 FUNC_5(&VAR_3->reg_lock);
 return VAR_5;
}
