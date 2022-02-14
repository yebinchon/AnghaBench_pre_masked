
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


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_17, int VAR_18)
{
 switch (VAR_18) {
 case 128:
  FUNC_1(VAR_17, VAR_12, VAR_4);
  FUNC_1(VAR_17, VAR_16, VAR_9 |
         VAR_11 | VAR_10);
  FUNC_1(VAR_17, VAR_13, VAR_6 |
         VAR_5);
  FUNC_1(VAR_17, VAR_14,
         VAR_7 | VAR_2);
  FUNC_1(VAR_17, VAR_15, VAR_1);
  break;
 case 129:
  FUNC_1(VAR_17, VAR_12, VAR_3);
  FUNC_1(VAR_17, VAR_16, VAR_8);
  FUNC_1(VAR_17, VAR_13, VAR_0);
  break;
 default:
  FUNC_0("Wrong charge pump state\n");
  break;
 }
}
