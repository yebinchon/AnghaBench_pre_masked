
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_pcm_runtime {int rate; int sleep; } ;
struct ak4117 {unsigned char rcs0; int rcs1; unsigned char rcs2; TYPE_2__* substream; int (* change_callback ) (struct ak4117*,unsigned char,unsigned char) ;TYPE_1__** kctls; int card; int lock; int * errors; } ;
struct TYPE_7__ {struct snd_pcm_runtime* runtime; } ;
struct TYPE_6__ {int id; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 size_t VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 unsigned char VAR_12 ;
 size_t VAR_13 ;
 unsigned char VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned char VAR_18 ;
 unsigned char VAR_19 ;
 unsigned char VAR_20 ;
 size_t VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (unsigned char) ;
 unsigned char FUNC_1 (struct ak4117*,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,unsigned long) ;
 int FUNC_6 (TYPE_2__*,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct ak4117*,unsigned char,unsigned char) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct ak4117 *VAR_24, unsigned int VAR_25)
{
 struct snd_pcm_runtime *VAR_26 = VAR_24->substream ? VAR_24->substream->runtime : ((void*)0);
 unsigned long VAR_27;
 int VAR_28 = 0;
 unsigned char VAR_29, VAR_30, VAR_31;
 unsigned char VAR_32, VAR_33;

 VAR_30 = FUNC_1(VAR_24, VAR_16);
 if (VAR_25 & VAR_5)
  goto __rate;
 VAR_29 = FUNC_1(VAR_24, VAR_15);
 VAR_31 = FUNC_1(VAR_24, VAR_17);

 FUNC_7(&VAR_24->lock, VAR_27);
 if (VAR_29 & VAR_9)
  VAR_24->errors[VAR_10]++;
 if (VAR_29 & VAR_20)
  VAR_24->errors[VAR_21]++;
 if (VAR_31 & VAR_2)
  VAR_24->errors[VAR_3]++;
 if (VAR_31 & VAR_12)
  VAR_24->errors[VAR_13]++;
 VAR_32 = (VAR_24->rcs0 & (VAR_14 | VAR_6 | VAR_18 | VAR_0 | VAR_1 | VAR_19)) ^
                     (VAR_29 & (VAR_14 | VAR_6 | VAR_18 | VAR_0 | VAR_1 | VAR_19));
 VAR_33 = (VAR_24->rcs1 & (VAR_7 | VAR_8 | VAR_11 | 0x0f)) ^
              (VAR_30 & (VAR_7 | VAR_8 | VAR_11 | 0x0f));
 VAR_24->rcs0 = VAR_29 & ~(VAR_14 | VAR_6 | VAR_18);
 VAR_24->rcs1 = VAR_30;
 VAR_24->rcs2 = VAR_31;
 FUNC_8(&VAR_24->lock, VAR_27);

 if (VAR_29 & VAR_9)
  FUNC_2(VAR_24->card, VAR_22, &VAR_24->kctls[0]->id);
 if (VAR_29 & VAR_20)
  FUNC_2(VAR_24->card, VAR_22, &VAR_24->kctls[1]->id);
 if (VAR_31 & VAR_2)
  FUNC_2(VAR_24->card, VAR_22, &VAR_24->kctls[2]->id);
 if (VAR_31 & VAR_12)
  FUNC_2(VAR_24->card, VAR_22, &VAR_24->kctls[3]->id);


 if (VAR_33 & 0x0f)
  FUNC_2(VAR_24->card, VAR_22, &VAR_24->kctls[4]->id);

 if ((VAR_33 & VAR_11) | (VAR_32 & VAR_6))
  FUNC_2(VAR_24->card, VAR_22, &VAR_24->kctls[6]->id);
 if (VAR_32 & VAR_14)
  FUNC_2(VAR_24->card, VAR_22, &VAR_24->kctls[8]->id);

 if (VAR_32 & VAR_0)
  FUNC_2(VAR_24->card, VAR_22, &VAR_24->kctls[9]->id);
 if (VAR_33 & VAR_8)
  FUNC_2(VAR_24->card, VAR_22, &VAR_24->kctls[10]->id);
 if (VAR_33 & VAR_7)
  FUNC_2(VAR_24->card, VAR_22, &VAR_24->kctls[11]->id);

 if (VAR_24->change_callback && (VAR_32 | VAR_33) != 0)
  VAR_24->change_callback(VAR_24, VAR_32, VAR_33);

      __rate:

 VAR_28 = FUNC_0(VAR_30);
 if (!(VAR_25 & VAR_4) && VAR_26 && VAR_26->rate != VAR_28) {
  FUNC_5(VAR_24->substream, VAR_27);
  if (FUNC_3(VAR_24->substream)) {

   FUNC_4(VAR_24->substream, VAR_23);
   FUNC_10(&VAR_26->sleep);
   VAR_28 = 1;
  }
  FUNC_6(VAR_24->substream, VAR_27);
 }
 return VAR_28;
}
