
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_pcm_runtime {int rate; int sleep; } ;
struct ak4113 {unsigned char rcs0; int rcs1; unsigned char rcs2; TYPE_2__* substream; int (* change_callback ) (struct ak4113*,unsigned char,unsigned char) ;TYPE_1__** kctls; int card; int lock; int * errors; } ;
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
 int VAR_9 ;
 unsigned char VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 unsigned char VAR_13 ;
 size_t VAR_14 ;
 unsigned char VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned char VAR_19 ;
 unsigned char VAR_20 ;
 unsigned char VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (unsigned char) ;
 unsigned char FUNC_1 (struct ak4113*,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,unsigned long) ;
 int FUNC_6 (TYPE_2__*,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct ak4113*,unsigned char,unsigned char) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct ak4113 *VAR_25, unsigned int VAR_26)
{
 struct snd_pcm_runtime *VAR_27 =
  VAR_25->substream ? VAR_25->substream->runtime : ((void*)0);
 unsigned long VAR_28;
 int VAR_29 = 0;
 unsigned char VAR_30, VAR_31, VAR_32;
 unsigned char VAR_33, VAR_34;

 VAR_31 = FUNC_1(VAR_25, VAR_17);
 if (VAR_26 & VAR_5)
  goto __rate;
 VAR_30 = FUNC_1(VAR_25, VAR_16);
 VAR_32 = FUNC_1(VAR_25, VAR_18);
 FUNC_7(&VAR_25->lock, VAR_28);
 if (VAR_30 & VAR_10)
  VAR_25->errors[VAR_11]++;
 if (VAR_30 & VAR_21)
  VAR_25->errors[VAR_22]++;
 if (VAR_32 & VAR_2)
  VAR_25->errors[VAR_3]++;
 if (VAR_32 & VAR_13)
  VAR_25->errors[VAR_14]++;
 VAR_33 = (VAR_25->rcs0 & (VAR_15 | VAR_6 | VAR_19 |
    VAR_0 | VAR_1 | VAR_20)) ^
  (VAR_30 & (VAR_15 | VAR_6 | VAR_19 |
    VAR_0 | VAR_1 | VAR_20));
 VAR_34 = (VAR_25->rcs1 & (VAR_8 | VAR_9 | VAR_12 |
    VAR_7 | 0xf0)) ^
  (VAR_31 & (VAR_8 | VAR_9 | VAR_12 |
    VAR_7 | 0xf0));
 VAR_25->rcs0 = VAR_30 & ~(VAR_15 | VAR_6 | VAR_19);
 VAR_25->rcs1 = VAR_31;
 VAR_25->rcs2 = VAR_32;
 FUNC_8(&VAR_25->lock, VAR_28);

 if (VAR_30 & VAR_10)
  FUNC_2(VAR_25->card, VAR_23,
    &VAR_25->kctls[0]->id);
 if (VAR_30 & VAR_21)
  FUNC_2(VAR_25->card, VAR_23,
    &VAR_25->kctls[1]->id);
 if (VAR_32 & VAR_2)
  FUNC_2(VAR_25->card, VAR_23,
    &VAR_25->kctls[2]->id);
 if (VAR_32 & VAR_13)
  FUNC_2(VAR_25->card, VAR_23,
    &VAR_25->kctls[3]->id);


 if (VAR_34 & 0xf0)
  FUNC_2(VAR_25->card, VAR_23,
    &VAR_25->kctls[4]->id);

 if ((VAR_34 & VAR_12) | (VAR_33 & VAR_6))
  FUNC_2(VAR_25->card, VAR_23,
    &VAR_25->kctls[6]->id);
 if (VAR_33 & VAR_15)
  FUNC_2(VAR_25->card, VAR_23,
    &VAR_25->kctls[8]->id);

 if (VAR_33 & VAR_0)
  FUNC_2(VAR_25->card, VAR_23,
    &VAR_25->kctls[9]->id);
 if (VAR_34 & VAR_9)
  FUNC_2(VAR_25->card, VAR_23,
    &VAR_25->kctls[10]->id);
 if (VAR_34 & VAR_8)
  FUNC_2(VAR_25->card, VAR_23,
    &VAR_25->kctls[11]->id);

 if (VAR_25->change_callback && (VAR_33 | VAR_34) != 0)
  VAR_25->change_callback(VAR_25, VAR_33, VAR_34);

__rate:

 VAR_29 = FUNC_0(VAR_31);
 if (!(VAR_26 & VAR_4) && VAR_27 &&
   (VAR_27->rate != VAR_29)) {
  FUNC_5(VAR_25->substream, VAR_28);
  if (FUNC_3(VAR_25->substream)) {


   FUNC_4(VAR_25->substream,
     VAR_24);
   FUNC_10(&VAR_27->sleep);
   VAR_29 = 1;
  }
  FUNC_6(VAR_25->substream, VAR_28);
 }
 return VAR_29;
}
