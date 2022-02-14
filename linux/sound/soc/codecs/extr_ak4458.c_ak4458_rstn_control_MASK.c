
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3)
  VAR_4 = FUNC_0(VAR_2,
       VAR_0,
       VAR_1,
       0x1);
 else
  VAR_4 = FUNC_0(VAR_2,
       VAR_0,
       VAR_1,
       0x0);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
