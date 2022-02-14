
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_soc_component*,scalar_t__,int *) ;

__attribute__((used)) static inline int FUNC_1(struct snd_soc_component *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 u8 VAR_4;

 for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
  VAR_3 = FUNC_0(VAR_1, VAR_0 + VAR_2, &VAR_4);
  if (VAR_3 < 0)
   break;
 }

 return VAR_3;
}
