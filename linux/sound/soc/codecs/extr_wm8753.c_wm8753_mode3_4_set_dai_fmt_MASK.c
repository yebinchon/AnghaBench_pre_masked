
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;
 scalar_t__ FUNC_2 (struct snd_soc_component*,unsigned int) ;
 int FUNC_3 (struct snd_soc_component*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_2,
  unsigned int VAR_3)
{
 u16 VAR_4;


 VAR_4 = FUNC_0(VAR_2, VAR_1) & 0xfffb;
 FUNC_1(VAR_2, VAR_1, VAR_4 | 0x4);

 if (FUNC_2(VAR_2, VAR_3) < 0)
  return -VAR_0;
 return FUNC_3(VAR_2, VAR_3);
}
