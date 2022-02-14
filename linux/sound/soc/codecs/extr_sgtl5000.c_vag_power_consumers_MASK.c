
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct snd_soc_component {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_5,
          u16 VAR_6, u32 VAR_7)
{
 int VAR_8 = 0;


 if (VAR_6 & VAR_2)
  VAR_8++;
 if (VAR_6 & VAR_1)
  VAR_8++;







 if (VAR_7 == VAR_0) {
  if (FUNC_0(VAR_5) == VAR_4)
   VAR_8++;
 } else {
  if (VAR_6 & VAR_3)
   VAR_8++;
 }

 return VAR_8;
}
