
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;
 unsigned int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_4 (struct snd_soc_component*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_16, int VAR_17)
{
 unsigned int VAR_18, VAR_19;


 FUNC_3(VAR_16, VAR_1,
  VAR_4, VAR_4);


 VAR_18 = FUNC_2(VAR_16, VAR_14);
 FUNC_4(VAR_16, VAR_14, 0);
 VAR_19 = FUNC_2(VAR_16, VAR_5);
 FUNC_4(VAR_16, VAR_5, VAR_19 & 0xf7ff);
 if (VAR_17) {

  FUNC_1(VAR_16, VAR_15, 0x303e);


  FUNC_3(VAR_16, VAR_13,
   VAR_9 | VAR_11 |
   VAR_12,
   VAR_9 | VAR_11 |
   VAR_12);


  FUNC_4(VAR_16, VAR_0,
   VAR_8 | VAR_2);
  FUNC_0(100);


  FUNC_3(VAR_16, VAR_13,
   VAR_10, VAR_10);
 } else {

  FUNC_1(VAR_16, VAR_15, 0x303F);
  FUNC_4(VAR_16, VAR_0,
   VAR_8 | VAR_3 |
   VAR_6 | VAR_7);
  FUNC_0(75);
  FUNC_4(VAR_16, VAR_0,
   VAR_8 | VAR_6 |
   VAR_7);


  FUNC_3(VAR_16, VAR_13,
    VAR_10, 0);


  FUNC_4(VAR_16, VAR_0,
   VAR_8 | VAR_2 |
   VAR_6 | VAR_7);
  FUNC_0(80);
  FUNC_4(VAR_16, VAR_0,
   VAR_8);


  FUNC_3(VAR_16, VAR_13,
   VAR_9 | VAR_11 |
   VAR_12, 0);
 }


 FUNC_4(VAR_16, VAR_14, VAR_18);
 FUNC_4(VAR_16, VAR_5, VAR_19);
}
