
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct snd_soc_component*,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct snd_soc_component *VAR_7,
        int VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12;

 VAR_12 = FUNC_0(VAR_7, VAR_8 + VAR_4);
 if (VAR_9 != (VAR_12 & VAR_3))
  return 1;

 VAR_12 = FUNC_0(VAR_7, VAR_8 + VAR_6);
 if (VAR_10 != (VAR_12 & VAR_0))
  return 1;

 VAR_12 = FUNC_0(VAR_7, VAR_8 + VAR_5);
 if (VAR_11 != (VAR_12 & (VAR_2 |
        VAR_1)))
  return 1;

 return 0;
}
