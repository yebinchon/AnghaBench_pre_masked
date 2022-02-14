
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_pdacf {int chip_status; int pcm_little; int pcm_swab; int pcm_xor; int pcm_sample; int pcm_frame; int pcm_area; int pcm_period; int pcm_size; int ak4117; int pcm_channels; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int format; int dma_area; int period_size; int buffer_size; int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;




 scalar_t__ FUNC_0 (struct snd_pdacf*) ;
 int FUNC_1 (struct snd_pdacf*,int ) ;
 int FUNC_2 (struct snd_pdacf*,int ,int) ;
 int FUNC_3 (int ,int ,int,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 struct snd_pdacf* FUNC_7 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_15)
{
 struct snd_pdacf *VAR_16 = FUNC_7(VAR_15);
 struct snd_pcm_runtime *VAR_17 = VAR_15->runtime;
 u16 VAR_18, VAR_19, VAR_20;

 if (VAR_16->chip_status & VAR_14)
  return -VAR_6;

 VAR_16->pcm_channels = VAR_17->channels;

 VAR_16->pcm_little = FUNC_5(VAR_17->format) > 0;



 VAR_16->pcm_swab = VAR_16->pcm_little;


 if (FUNC_6(VAR_17->format))
  VAR_16->pcm_xor = 0x80008000;

 if (FUNC_0(VAR_16) < 0)
  return -VAR_7;

 VAR_18 = VAR_19 = FUNC_1(VAR_16, VAR_13);
 VAR_19 &= ~(VAR_8|VAR_9);
 switch (VAR_17->format) {
 case 130:
 case 131:
  break;
 default:
  VAR_19 |= VAR_8 | VAR_9;
  break;
 }
 VAR_20 = 0;
 VAR_16->pcm_sample = 4;
 switch (VAR_17->format) {
 case 130:
 case 131:
  VAR_20 = VAR_3;
  VAR_16->pcm_frame = 2;
  VAR_16->pcm_sample = 2;
  break;
 case 128:
 case 129:
  VAR_16->pcm_sample = 3;

 default:
  VAR_20 = VAR_4;
  VAR_16->pcm_frame = 3;
  VAR_16->pcm_xor &= 0xffff0000;
  break;
 }

 if (VAR_18 != VAR_19) {
  FUNC_3(VAR_16->ak4117, VAR_5, VAR_2|VAR_1|VAR_0, VAR_20);
  FUNC_2(VAR_16, VAR_13, VAR_19);
 }

 VAR_18 = FUNC_1(VAR_16, VAR_12);
 VAR_18 &= ~(VAR_11);
 VAR_18 |= VAR_10;
 FUNC_2(VAR_16, VAR_12, VAR_18);

 VAR_16->pcm_size = VAR_17->buffer_size;
 VAR_16->pcm_period = VAR_17->period_size;
 VAR_16->pcm_area = VAR_17->dma_area;

 return 0;
}
