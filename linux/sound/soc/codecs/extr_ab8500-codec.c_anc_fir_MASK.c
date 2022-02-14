
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_5,
  unsigned int VAR_6, unsigned int VAR_7, unsigned int VAR_8)
{
 if (VAR_7 == 0 && VAR_6 == 0)
  FUNC_1(VAR_5, VAR_0,
   FUNC_0(VAR_1),
   FUNC_0(VAR_1));

 FUNC_2(VAR_5, VAR_2, VAR_8 >> 8 & 0xff);
 FUNC_2(VAR_5, VAR_3, VAR_8 & 0xff);

 if (VAR_7 == VAR_4 - 1 && VAR_6 == 1)
  FUNC_1(VAR_5, VAR_0,
   FUNC_0(VAR_1), 0);
}
