
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_6 (struct snd_soc_component*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct snd_soc_component *VAR_13, int VAR_14)
{
 unsigned int VAR_15, VAR_16;


 FUNC_5(VAR_13, VAR_1,
  VAR_5, VAR_5);


 VAR_15 = FUNC_4(VAR_13, VAR_11);
 FUNC_6(VAR_13, VAR_11, 0);
 VAR_16 = FUNC_4(VAR_13, VAR_7);
 FUNC_6(VAR_13, VAR_7, VAR_16 & 0xf7ff);
 if (VAR_14) {
  FUNC_3(FUNC_0(10));


  FUNC_2(VAR_13, VAR_12, 0x302f);
  FUNC_6(VAR_13, VAR_0,
   VAR_9 | VAR_4 |
   VAR_3 |
   VAR_2);

  FUNC_5(VAR_13, VAR_6,
    VAR_8 | VAR_10, 0);
  FUNC_1(160);
 } else {

  FUNC_2(VAR_13, VAR_12, 0x302f);
  FUNC_6(VAR_13, VAR_0,
   VAR_9 | VAR_4 |
   VAR_3 |
   VAR_2);

  FUNC_5(VAR_13, VAR_6,
   VAR_8 | VAR_10,
   VAR_8 | VAR_10);
  FUNC_1(150);
 }


 FUNC_6(VAR_13, VAR_11, VAR_15);
 FUNC_6(VAR_13, VAR_7, VAR_16);
}
