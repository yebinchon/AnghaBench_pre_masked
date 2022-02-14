
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_ymfpci_pcm {int capture_bank_number; int running; } ;
struct snd_ymfpci {int reg_lock; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct snd_ymfpci_pcm* private_data; } ;


 int VAR_0 ;






 int VAR_1 ;
 struct snd_ymfpci* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_ymfpci*,int ) ;
 int FUNC_2 (struct snd_ymfpci*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2,
          int VAR_3)
{
 struct snd_ymfpci *VAR_4 = FUNC_0(VAR_2);
 struct snd_ymfpci_pcm *VAR_5 = VAR_2->runtime->private_data;
 int VAR_6 = 0;
 u32 VAR_7;

 FUNC_3(&VAR_4->reg_lock);
 switch (VAR_3) {
 case 130:
 case 132:
 case 131:
  VAR_7 = FUNC_1(VAR_4, VAR_1) | (1 << VAR_5->capture_bank_number);
  FUNC_2(VAR_4, VAR_1, VAR_7);
  VAR_5->running = 1;
  break;
 case 129:
 case 133:
 case 128:
  VAR_7 = FUNC_1(VAR_4, VAR_1) & ~(1 << VAR_5->capture_bank_number);
  FUNC_2(VAR_4, VAR_1, VAR_7);
  VAR_5->running = 0;
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }
 FUNC_4(&VAR_4->reg_lock);
 return VAR_6;
}
