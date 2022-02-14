
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int hw_ready; } ;
struct snd_ml403_ac97cr {int enable_capture_irq; int capture_irq; TYPE_1__ capture_ind2_rec; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ml403_ac97cr*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct snd_pcm_substream*,TYPE_1__*) ;
 struct snd_ml403_ac97cr* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int
FUNC_7(struct snd_pcm_substream *VAR_4,
          int VAR_5)
{
 struct snd_ml403_ac97cr *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_6(VAR_4);

 switch (VAR_5) {
 case 129:
  FUNC_1(VAR_3, "trigger(capture): START\n");
  VAR_6->capture_ind2_rec.hw_ready = 0;


  FUNC_4(FUNC_0(VAR_6, VAR_2), VAR_0);


  VAR_6->enable_capture_irq = 1;
  FUNC_3(VAR_6->capture_irq);
  break;
 case 128:
  FUNC_1(VAR_3, "trigger(capture): STOP\n");
  VAR_6->capture_ind2_rec.hw_ready = 0;





  FUNC_2(VAR_6->capture_irq);
  VAR_6->enable_capture_irq = 0;
  break;
 default:
  VAR_7 = -VAR_1;
  break;
 }
 FUNC_1(VAR_3, "trigger(capture): (done)\n");
 return VAR_7;
}
