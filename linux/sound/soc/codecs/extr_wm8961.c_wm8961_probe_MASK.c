
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_19)
{
 u16 VAR_20;


 VAR_20 = FUNC_0(VAR_19, VAR_2);
 VAR_20 |= VAR_4;
 FUNC_1(VAR_19, VAR_2, VAR_20);



 VAR_20 = FUNC_0(VAR_19, VAR_14);
 FUNC_1(VAR_19, VAR_14,
       VAR_20 | VAR_7 | VAR_11);
 FUNC_1(VAR_19, VAR_8, VAR_20 | VAR_7);
 VAR_20 = FUNC_0(VAR_19, VAR_15);
 FUNC_1(VAR_19, VAR_15,
       VAR_20 | VAR_17 | VAR_18);
 FUNC_1(VAR_19, VAR_9, VAR_20 | VAR_16);

 VAR_20 = FUNC_0(VAR_19, VAR_12);
 FUNC_1(VAR_19, VAR_12, VAR_20 | VAR_0);
 VAR_20 = FUNC_0(VAR_19, VAR_13);
 FUNC_1(VAR_19, VAR_13, VAR_20 | VAR_6);


 VAR_20 = FUNC_0(VAR_19, VAR_1);
 VAR_20 |= VAR_5;
 FUNC_1(VAR_19, VAR_1, VAR_20);




 VAR_20 = FUNC_0(VAR_19, VAR_3);
 VAR_20 &= ~VAR_10;
 FUNC_1(VAR_19, VAR_3, VAR_20);

 return 0;
}
