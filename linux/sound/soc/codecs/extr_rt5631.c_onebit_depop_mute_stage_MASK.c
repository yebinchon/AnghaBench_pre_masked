
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_6 (struct snd_soc_component*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_7(struct snd_soc_component *VAR_8, int VAR_9)
{
 unsigned int VAR_10, VAR_11;


 FUNC_5(VAR_8, VAR_0,
    VAR_1, 0);


 VAR_10 = FUNC_4(VAR_8, VAR_6);
 FUNC_6(VAR_8, VAR_6, 0);
 VAR_11 = FUNC_4(VAR_8, VAR_3);
 FUNC_6(VAR_8, VAR_3, VAR_11 & 0xf7ff);
 if (VAR_9) {
  FUNC_3(FUNC_0(10));

  FUNC_2(VAR_8, VAR_7, 0x307f);
  FUNC_5(VAR_8, VAR_2,
    VAR_4 | VAR_5, 0);
  FUNC_1(300);
 } else {
  FUNC_5(VAR_8, VAR_2,
   VAR_4 | VAR_5,
   VAR_4 | VAR_5);
  FUNC_1(100);
 }


 FUNC_6(VAR_8, VAR_6, VAR_10);
 FUNC_6(VAR_8, VAR_3, VAR_11);
}
