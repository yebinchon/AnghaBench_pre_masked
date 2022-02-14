
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_eth {int foe_table_phys; int dev; int foe_table; } ;


 int FUNC_0 (int) ;
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
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct mtk_eth*) ;
 int FUNC_4 (struct mtk_eth*,int,int,int ) ;
 int FUNC_5 (struct mtk_eth*,int,int,int,int,int,int ) ;
 int FUNC_6 (struct mtk_eth*,int,int) ;
 int FUNC_7 (struct mtk_eth*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct mtk_eth *VAR_57)
{
 int VAR_58;

 VAR_58 = FUNC_3(VAR_57);
 if (VAR_58)
  return VAR_58;


 FUNC_7(VAR_57, VAR_57->foe_table_phys, VAR_54);


 FUNC_2(VAR_57->foe_table, 0, VAR_22);


 FUNC_4(VAR_57,
  VAR_27 | VAR_34,
  VAR_26 | VAR_33,
  VAR_55);


 FUNC_7(VAR_57, VAR_17, VAR_51);


 FUNC_4(VAR_57, VAR_10 | VAR_24 |
  VAR_32,
  VAR_23 | VAR_31,
  VAR_55);


 FUNC_7(VAR_57, 0xFFFFFFFF, VAR_52);


 FUNC_4(VAR_57, 0, VAR_10, VAR_47);
 FUNC_4(VAR_57, VAR_10, VAR_9,
  VAR_47);


 FUNC_4(VAR_57, 0, VAR_14 |
  VAR_12 | VAR_13 |
  VAR_11,
  VAR_49);


 FUNC_4(VAR_57, 0,
  VAR_37 | VAR_30 |
  VAR_25 | VAR_36 |
  VAR_35,
  VAR_55);

 FUNC_4(VAR_57, VAR_41 | VAR_39,
  VAR_40 | VAR_38,
  VAR_56);
 FUNC_4(VAR_57, VAR_2 |
  VAR_4,
  VAR_1 | VAR_3,
  VAR_45);
 FUNC_4(VAR_57, VAR_6 |
  VAR_8,
  VAR_5 | VAR_7,
  VAR_46);


 FUNC_4(VAR_57, VAR_29, VAR_28,
  VAR_55);
 FUNC_7(VAR_57, VAR_20 | VAR_19 | VAR_18, VAR_53);


 FUNC_7(VAR_57, (0x3fff << 16) | 0x3fff, VAR_42);
 FUNC_7(VAR_57, VAR_21 | 0x3fff, VAR_43);
 FUNC_4(VAR_57, VAR_0, 1, VAR_44);


 FUNC_4(VAR_57, 0, VAR_15, VAR_50);






 FUNC_7(VAR_57, 0x55555555, VAR_48);



 FUNC_4(VAR_57, VAR_16, 0, VAR_50);


 FUNC_4(VAR_57, 0xffff, 0x4444, FUNC_0(0));
 FUNC_4(VAR_57, 0xffff, 0x4444, FUNC_0(1));

 FUNC_1(VAR_57->dev, "PPE started\n");
 return 0;
}
