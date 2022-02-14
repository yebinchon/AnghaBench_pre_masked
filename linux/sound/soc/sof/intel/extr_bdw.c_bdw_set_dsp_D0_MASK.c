
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sof_dev {scalar_t__* bar; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int) ;
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
 int FUNC_1 (struct snd_sof_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct snd_sof_dev*,size_t,int ,int,int) ;
 int FUNC_5 (struct snd_sof_dev*,size_t,scalar_t__,int,int) ;
 int FUNC_6 (struct snd_sof_dev*,size_t,int,int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct snd_sof_dev *VAR_36)
{
 int VAR_37 = 10;
 u32 VAR_38;


 FUNC_5(VAR_36, VAR_1, VAR_10,
      VAR_7 |
      VAR_8, 0);


 FUNC_5(VAR_36, VAR_1, VAR_9,
      VAR_5, VAR_5);


 FUNC_5(VAR_36, VAR_1, VAR_3,
      VAR_4, 0);


 while (VAR_37--) {
  VAR_38 = FUNC_3(VAR_36->bar[VAR_1] + VAR_3)
   & VAR_4;
  if (VAR_38 == 0)
   goto finish;

  FUNC_2(20);
 }

 return -VAR_2;

finish:




 FUNC_5(VAR_36, VAR_0, VAR_15,
      VAR_20 | VAR_21 |
      VAR_19, 0x0);


 FUNC_5(VAR_36, VAR_0,
      VAR_15, VAR_22 |
      VAR_18,
      VAR_22 |
      FUNC_0(4));


 FUNC_5(VAR_36, VAR_0, VAR_11,
      VAR_13 |
      VAR_12 |
      VAR_14,
      VAR_13 |
      VAR_12 |
      VAR_14);


 FUNC_1(VAR_36);


 FUNC_5(VAR_36, VAR_1, VAR_10,
      VAR_7 |
      VAR_8,
      VAR_7 |
      VAR_8);

 FUNC_7(50, 55);


 FUNC_5(VAR_36, VAR_1, VAR_10,
      VAR_6, 0);






 FUNC_5(VAR_36, VAR_1, VAR_9,
      0xfffffffC, 0x0);


 FUNC_5(VAR_36, VAR_0, VAR_16,
      VAR_17,
      VAR_17);


 FUNC_4(VAR_36, VAR_0, VAR_23,
    VAR_24 |
    VAR_25,
    VAR_24 |
    VAR_25);


 FUNC_4(VAR_36, VAR_0, VAR_31,
    (VAR_32 | VAR_33), 0x0);
 FUNC_4(VAR_36, VAR_0, VAR_26,
    (VAR_29 | VAR_27 |
    VAR_30 | VAR_28), 0x0);


 FUNC_6(VAR_36, VAR_0, VAR_35, 0x0);
 FUNC_6(VAR_36, VAR_0, VAR_34, 0x0);
 FUNC_6(VAR_36, VAR_0, 0x80, 0x6);
 FUNC_6(VAR_36, VAR_0, 0xe0, 0x300a);

 return 0;
}
