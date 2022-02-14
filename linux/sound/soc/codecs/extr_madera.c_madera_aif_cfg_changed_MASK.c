
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct snd_soc_component*,scalar_t__,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_7,
      int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 unsigned int VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_7, VAR_8 + VAR_4,
         &VAR_12);
 if (VAR_13)
  return VAR_13;
 if (VAR_9 != (VAR_12 & VAR_3))
  return 1;

 VAR_13 = FUNC_0(VAR_7, VAR_8 + VAR_6,
         &VAR_12);
 if (VAR_13)
  return VAR_13;
 if (VAR_10 != (VAR_12 & VAR_0))
  return 1;

 VAR_13 = FUNC_0(VAR_7, VAR_8 + VAR_5,
         &VAR_12);
 if (VAR_13)
  return VAR_13;
 if (VAR_11 != (VAR_12 & (VAR_2 |
        VAR_1)))
  return 1;

 return 0;
}
