
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dai {int component; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_3, int VAR_4)
{
 u8 VAR_5 = 0;

 if (VAR_4)
  VAR_5 |= VAR_1;

 FUNC_0(VAR_3->component, VAR_2, VAR_0, VAR_5);

 return 0;
}
