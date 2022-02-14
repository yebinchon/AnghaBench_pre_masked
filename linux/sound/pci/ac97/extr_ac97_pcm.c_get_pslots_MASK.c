
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_ac97 {int addr; int scaps; int ext_id; int * regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (struct snd_ac97*) ;
 int FUNC_1 (struct snd_ac97*) ;
 scalar_t__ FUNC_2 (struct snd_ac97*) ;
 int FUNC_3 (struct snd_ac97*,size_t,int) ;

__attribute__((used)) static unsigned short FUNC_4(struct snd_ac97 *VAR_18, unsigned char *VAR_19, unsigned short *VAR_20)
{
 if (!FUNC_1(VAR_18))
  return 0;
 if (FUNC_2(VAR_18) || FUNC_0(VAR_18)) {
  unsigned short VAR_21 = 0;
  if (FUNC_2(VAR_18)) {

   u16 VAR_22;
   VAR_22 = VAR_18->regs[VAR_3] &= ~VAR_0;
   switch (VAR_18->addr) {
   case 1:
   case 2: VAR_22 |= (1<<VAR_1); break;
   case 3: VAR_22 |= (2<<VAR_1); break;
   }
   FUNC_3(VAR_18, VAR_3, VAR_22);
  }
  switch (VAR_18->addr) {
  case 0:
   VAR_21 |= (1<<VAR_8)|(1<<VAR_9);
   if (VAR_18->scaps & VAR_5)
    VAR_21 |= (1<<VAR_10)|(1<<VAR_11);
   if (VAR_18->scaps & VAR_4)
    VAR_21 |= (1<<VAR_7)|(1<<VAR_6);
   if (VAR_18->ext_id & VAR_2) {
    if (!(VAR_18->scaps & VAR_5))
     *VAR_20 = (1<<VAR_12)|(1<<VAR_15);
    else if (!(VAR_18->scaps & VAR_4))
     *VAR_20 = (1<<VAR_13)|(1<<VAR_16);
    else
     *VAR_20 = (1<<VAR_14)|(1<<VAR_17);
   }
   *VAR_19 = 0;
   break;
  case 1:
  case 2:
   VAR_21 |= (1<<VAR_10)|(1<<VAR_11);
   if (VAR_18->scaps & VAR_5)
    VAR_21 |= (1<<VAR_7)|(1<<VAR_6);
   if (VAR_18->ext_id & VAR_2) {
    if (!(VAR_18->scaps & VAR_5))
     *VAR_20 = (1<<VAR_13)|(1<<VAR_16);
    else
     *VAR_20 = (1<<VAR_14)|(1<<VAR_17);
   }
   *VAR_19 = 1;
   break;
  case 3:
   VAR_21 |= (1<<VAR_7)|(1<<VAR_6);
   if (VAR_18->ext_id & VAR_2)
    *VAR_20 = (1<<VAR_14)|(1<<VAR_17);
   *VAR_19 = 2;
   break;
  }
  return VAR_21;
 } else {
  unsigned short VAR_23;
  VAR_23 = (1<<VAR_8)|(1<<VAR_9);
  if (VAR_18->scaps & VAR_5)
   VAR_23 |= (1<<VAR_10)|(1<<VAR_11);
  if (VAR_18->scaps & VAR_4)
   VAR_23 |= (1<<VAR_7)|(1<<VAR_6);
  if (VAR_18->ext_id & VAR_2) {
   if (!(VAR_18->scaps & VAR_5))
    *VAR_20 = (1<<VAR_12)|(1<<VAR_15);
   else if (!(VAR_18->scaps & VAR_4))
    *VAR_20 = (1<<VAR_13)|(1<<VAR_16);
   else
    *VAR_20 = (1<<VAR_14)|(1<<VAR_17);
  }
  *VAR_19 = 0;
  return VAR_23;
 }
}
