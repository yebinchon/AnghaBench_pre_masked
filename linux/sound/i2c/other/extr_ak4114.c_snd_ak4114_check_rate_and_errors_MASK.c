
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_runtime {int rate; } ;
struct ak4114 {unsigned char rcs0; int rcs1; TYPE_1__* capture_substream; int (* change_callback ) (struct ak4114*,unsigned char,unsigned char) ;int lock; int * errors; } ;
struct TYPE_5__ {struct snd_pcm_runtime* runtime; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 size_t VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 size_t VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 size_t VAR_11 ;
 unsigned char VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct ak4114*,unsigned char,unsigned char,unsigned char,unsigned char) ;
 int FUNC_1 (unsigned char) ;
 unsigned char FUNC_2 (struct ak4114*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,unsigned long) ;
 int FUNC_6 (TYPE_1__*,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct ak4114*,unsigned char,unsigned char) ;

int FUNC_10(struct ak4114 *VAR_19, unsigned int VAR_20)
{
 struct snd_pcm_runtime *VAR_21 = VAR_19->capture_substream ? VAR_19->capture_substream->runtime : ((void*)0);
 unsigned long VAR_22;
 int VAR_23 = 0;
 unsigned char VAR_24, VAR_25;
 unsigned char VAR_26, VAR_27;

 VAR_25 = FUNC_2(VAR_19, VAR_14);
 if (VAR_20 & VAR_5)
  goto __rate;
 VAR_24 = FUNC_2(VAR_19, VAR_13);
 FUNC_7(&VAR_19->lock, VAR_22);
 if (VAR_24 & VAR_7)
  VAR_19->errors[VAR_8]++;
 if (VAR_25 & VAR_16)
  VAR_19->errors[VAR_17]++;
 if (VAR_25 & VAR_2)
  VAR_19->errors[VAR_3]++;
 if (VAR_25 & VAR_10)
  VAR_19->errors[VAR_11]++;
 VAR_26 = (VAR_19->rcs0 & (VAR_12 | VAR_6 | VAR_9 | VAR_0 | VAR_1 | VAR_15)) ^
                     (VAR_24 & (VAR_12 | VAR_6 | VAR_9 | VAR_0 | VAR_1 | VAR_15));
 VAR_27 = (VAR_19->rcs1 & 0xf0) ^ (VAR_25 & 0xf0);
 VAR_19->rcs0 = VAR_24 & ~(VAR_12 | VAR_6);
 VAR_19->rcs1 = VAR_25;
 FUNC_8(&VAR_19->lock, VAR_22);

 FUNC_0(VAR_19, VAR_24, VAR_25, VAR_26, VAR_27);
 if (VAR_19->change_callback && (VAR_26 | VAR_27) != 0)
  VAR_19->change_callback(VAR_19, VAR_26, VAR_27);

      __rate:

 VAR_23 = FUNC_1(VAR_25);
 if (!(VAR_20 & VAR_4) && VAR_21 && VAR_21->rate != VAR_23) {
  FUNC_5(VAR_19->capture_substream, VAR_22);
  if (FUNC_3(VAR_19->capture_substream)) {

   FUNC_4(VAR_19->capture_substream, VAR_18);
   VAR_23 = 1;
  }
  FUNC_6(VAR_19->capture_substream, VAR_22);
 }
 return VAR_23;
}
