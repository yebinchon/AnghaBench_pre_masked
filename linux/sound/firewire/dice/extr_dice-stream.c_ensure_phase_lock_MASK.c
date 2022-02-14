
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_dice {int clock_accepted; } ;
typedef int reg ;
typedef int nominal ;
typedef int __be32 ;


 int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 unsigned int* VAR_8 ;
 int FUNC_6 (struct snd_dice*,int ,int *,int) ;
 int FUNC_7 (struct snd_dice*,int ,int *,int) ;
 scalar_t__ FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct snd_dice *VAR_9, unsigned int VAR_10)
{
 __be32 VAR_11, VAR_12;
 u32 VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_15 = FUNC_6(VAR_9, VAR_4,
            &VAR_11, sizeof(VAR_11));
 if (VAR_15 < 0)
  return VAR_15;

 VAR_13 = FUNC_1(VAR_11);

 VAR_13 &= ~VAR_0;
 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_8); ++VAR_14) {
  if (VAR_8[VAR_14] == VAR_10)
   break;
 }
 if (VAR_14 == FUNC_0(VAR_8))
  return -VAR_2;
 VAR_13 |= VAR_14 << VAR_1;

 if (FUNC_2(&VAR_9->clock_accepted))
  FUNC_5(&VAR_9->clock_accepted);

 VAR_11 = FUNC_3(VAR_13);
 VAR_15 = FUNC_7(VAR_9, VAR_4,
      &VAR_11, sizeof(VAR_11));
 if (VAR_15 < 0)
  return VAR_15;

 if (FUNC_8(&VAR_9->clock_accepted,
   FUNC_4(VAR_6)) == 0) {





  VAR_15 = FUNC_6(VAR_9, VAR_5,
      &VAR_12, sizeof(VAR_12));
  if (VAR_15 < 0)
   return VAR_15;
  if (!(FUNC_1(VAR_12) & VAR_7))
   return -VAR_3;
 }

 return 0;
}
