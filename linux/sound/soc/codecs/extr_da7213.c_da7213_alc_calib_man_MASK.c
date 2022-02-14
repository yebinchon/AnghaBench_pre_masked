
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
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
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_11)
{
 u8 VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;



 VAR_13 = FUNC_0(VAR_11,
   VAR_0);

 VAR_14 = FUNC_0(VAR_11,
    VAR_1);


 VAR_15 = -VAR_13;
 VAR_16 = -VAR_14;

 VAR_12 = (VAR_15 & VAR_3) >> 8;
 FUNC_2(VAR_11, VAR_6, VAR_12);
 VAR_12 = (VAR_15 & VAR_4) >> 16;
 FUNC_2(VAR_11, VAR_8, VAR_12);

 VAR_12 = (VAR_16 & VAR_3) >> 8;
 FUNC_2(VAR_11, VAR_7, VAR_12);
 VAR_12 = (VAR_16 & VAR_4) >> 16;
 FUNC_2(VAR_11, VAR_9, VAR_12);


 FUNC_1(VAR_11, VAR_2,
       VAR_5 | VAR_10,
       VAR_5 | VAR_10);
}
