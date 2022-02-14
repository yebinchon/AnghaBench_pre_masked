
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_cs46xx {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct snd_cs46xx*) ;
 int FUNC_5 (struct snd_cs46xx*,int ) ;
 int FUNC_6 (struct snd_cs46xx*,int ,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct snd_cs46xx *VAR_45)
{
 int VAR_46;






        FUNC_6(VAR_45, VAR_14, 0);
        FUNC_6(VAR_45, VAR_27, 0);
 FUNC_6(VAR_45, VAR_18, VAR_36 | VAR_34);
 FUNC_6(VAR_45, VAR_8, 0);



 FUNC_7(50);
 FUNC_6(VAR_45, VAR_8, VAR_1);
 FUNC_6(VAR_45, VAR_8, VAR_0 | VAR_1);
 FUNC_2(10);





 FUNC_6(VAR_45, VAR_27, VAR_44);






 FUNC_6(VAR_45, VAR_16, VAR_33 | VAR_32);
 FUNC_6(VAR_45, VAR_17, 0x3a);
 FUNC_6(VAR_45, VAR_15, VAR_30);




 FUNC_6(VAR_45, VAR_14, VAR_28);




 FUNC_3(100);




 FUNC_6(VAR_45, VAR_14, VAR_28 | VAR_29);




 FUNC_6(VAR_45, VAR_19, VAR_38);




 FUNC_4(VAR_45);
 FUNC_6(VAR_45, VAR_20, VAR_40 | VAR_39);
 FUNC_6(VAR_45, VAR_21, VAR_41 | VAR_39);
 FUNC_6(VAR_45, VAR_27, VAR_44 | VAR_43);
 FUNC_2(5);





 VAR_46 = 150;
 while (VAR_46-- > 0) {




  if (FUNC_5(VAR_45, VAR_12) & VAR_7)
   goto ok1;
  FUNC_3(10);
 }


 FUNC_1(VAR_45->card->dev,
  "create - never read codec ready from AC'97\n");
 FUNC_1(VAR_45->card->dev,
  "it is not probably bug, try to use CS4236 driver\n");
 return -VAR_31;
 ok1:
 FUNC_6(VAR_45, VAR_8, VAR_2 | VAR_0 | VAR_1);
 VAR_46 = 150;
 while (VAR_46-- > 0) {




  if ((FUNC_5(VAR_45, VAR_10) & (VAR_3 | VAR_4)) == (VAR_3 | VAR_4))
   goto ok2;
  FUNC_3(10);
 }


 FUNC_1(VAR_45->card->dev,
  "create - never read ISV3 & ISV4 from AC'97\n");
 return -VAR_31;
 ok2:






 FUNC_6(VAR_45, VAR_11, VAR_5 | VAR_6);
 return 0;
}
