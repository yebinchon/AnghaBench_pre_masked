
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int aint; } ;
struct TYPE_3__ {void* aint; } ;
struct snd_ali_channel_control {TYPE_2__ regs; TYPE_1__ data; } ;
struct snd_ali {struct snd_ali_channel_control chregs; int hw_initialized; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ali*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct snd_ali*,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_8, void *VAR_9)
{
 struct snd_ali *VAR_10 = VAR_9;
 int VAR_11;
 unsigned int VAR_12;
 struct snd_ali_channel_control *VAR_13;

 if (VAR_10 == ((void*)0) || !VAR_10->hw_initialized)
  return VAR_4;

 VAR_12 = FUNC_1(FUNC_0(VAR_10, VAR_2));
 if (!VAR_12)
  return VAR_4;

 VAR_13 = &(VAR_10->chregs);
 if (VAR_12 & VAR_0) {

  VAR_13->data.aint = FUNC_1(FUNC_0(VAR_10, VAR_13->regs.aint));
  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
   FUNC_3(VAR_10, VAR_11);
 }
 FUNC_2((VAR_7 | VAR_5 | VAR_6),
  FUNC_0(VAR_10, VAR_2));

 return VAR_3;
}
