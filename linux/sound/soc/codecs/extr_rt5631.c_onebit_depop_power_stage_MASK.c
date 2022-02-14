
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;
 unsigned int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_8, int VAR_9)
{
 unsigned int VAR_10, VAR_11;


 FUNC_3(VAR_8, VAR_1,
    VAR_3, 0);


 VAR_10 = FUNC_2(VAR_8, VAR_5);
 FUNC_4(VAR_8, VAR_5, 0);
 VAR_11 = FUNC_2(VAR_8, VAR_4);
 FUNC_4(VAR_8, VAR_4, VAR_11 & 0xf7ff);
 if (VAR_9) {

  FUNC_1(VAR_8, VAR_7, 0x84c0);
  FUNC_1(VAR_8, VAR_6, 0x309f);
  FUNC_1(VAR_8, VAR_0, 0x6530);

  FUNC_4(VAR_8, VAR_1,
    VAR_2);
 } else {

  FUNC_4(VAR_8, VAR_1, 0);
  FUNC_0(100);
 }


 FUNC_4(VAR_8, VAR_5, VAR_10);
 FUNC_4(VAR_8, VAR_4, VAR_11);
}
