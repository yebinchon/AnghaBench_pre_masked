
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (scalar_t__,int,int,int ) ;
 int FUNC_3 (scalar_t__,int,int,int,int ,int ) ;
 int FUNC_4 (scalar_t__,int,int,int,int ,int ) ;
 int FUNC_5 (scalar_t__,int,char*,int ,int ,int ) ;
 scalar_t__ VAR_20 ;
 int FUNC_6 () ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_7 (int) ;
 int VAR_25 ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char*,int) ;

void FUNC_10(){
  uint8_t VAR_26 = VAR_22 / 60;
  uint16_t VAR_27 = VAR_22 % 60;

  if(VAR_20 == VAR_2){
    VAR_26 = VAR_21;
    VAR_27 = VAR_25;
  }

  bool VAR_28 = (VAR_26 / 12) > 0;
  VAR_26 = VAR_26 % 12;
  if (VAR_26 == 0){
    VAR_26 = 12;
  }
  char VAR_29[3] = "";
  char VAR_30[3] = "";

  FUNC_9(VAR_29, "%02d", VAR_26);
  FUNC_9(VAR_30, "%02d", VAR_27);

  uint8_t VAR_31 = FUNC_6();


  FUNC_1(0,0,1);



  FUNC_0(45, 0, 1);




  for (uint8_t VAR_32 = 0; VAR_32 < VAR_8; VAR_32++) {
    for (uint8_t VAR_33 = 0; VAR_33 < VAR_5; VAR_33++) {
      FUNC_2(0 + VAR_33 + 2, 18 + VAR_32 + 2,(FUNC_7(VAR_32) & (1 << VAR_33)) > 0, VAR_15);
    }
  }
  FUNC_4(0, 18, 19, 9, VAR_17, VAR_15);

  FUNC_3(0 + 14, 18 + 2, 3, 1, VAR_17, VAR_15);





  if (VAR_31 & VAR_14) {
    FUNC_3(30 + 0, 18, 5 + (1 * 6), 11, VAR_17, VAR_15);
    FUNC_5(30 + 3, 18 + 2, "S", VAR_16, VAR_15, 0);
  } else {
    FUNC_5(30 + 3, 18 + 2, "S", VAR_17, VAR_15, 0);
  }
  if (VAR_31 & VAR_12) {
    FUNC_3(30 + 10, 18, 5 + (1 * 6), 11, VAR_17, VAR_15);
    FUNC_5(30 + 13, 18 + 2, "C", VAR_16, VAR_15, 0);
  } else {
    FUNC_5(30 + 13, 18 + 2, "C", VAR_17, VAR_15, 0);
  }
  if (VAR_31 & VAR_11) {
    FUNC_3(30 + 20, 18, 5 + (1 * 6), 11, VAR_17, VAR_15);
    FUNC_5(30 + 23, 18 + 2, "A", VAR_16, VAR_15, 0);
  } else {
    FUNC_5(30 + 23, 18 + 2, "A", VAR_17, VAR_15, 0);
  }
  if (VAR_31 & VAR_13) {
    FUNC_3(30 + 30, 18, 5 + (1 * 6), 11, VAR_17, VAR_15);
    FUNC_5(30 + 33, 18 + 2, "G", VAR_16, VAR_15, 0);
  } else {
    FUNC_5(30 + 33, 18 + 2, "G", VAR_17, VAR_15, 0);
  }





  if (VAR_23 == 1) {
    FUNC_3(100 + 0, 0, 5 + (3 * 6), 9, VAR_17, VAR_15);
    FUNC_5(100 + 3, 0 +1, "CAP", VAR_16, VAR_15, 0);
  } else if (VAR_23 == 0) {
    FUNC_5(100 + 3, 0 +1, "CAP", VAR_17, VAR_15, 0);
  }

  if (VAR_24 == 1) {
    FUNC_3(100 + 0, 0 + 11, 5 + (3 * 6), 9, VAR_17, VAR_15);
    FUNC_5(100 + 3, 0 + 11 +1, "SCR", VAR_16, VAR_15, 0);
  } else if (VAR_24 == 0) {
    FUNC_5(100 + 3, 0 + 11 +1, "SCR", VAR_17, VAR_15, 0);
  }



  FUNC_5(82, 22, VAR_29, VAR_17, VAR_15, 0);
  FUNC_5(82 + 11, 22, ":", VAR_17, VAR_15, 0);
  FUNC_5(82 + 15, 22, VAR_30, VAR_17, VAR_15, 0);
  if(VAR_28){
    FUNC_5(82 + 27, 22, "pm", VAR_17, VAR_15, 0);
  } else{
    FUNC_5(82 + 27, 22, "am", VAR_17, VAR_15, 0);
  }

  FUNC_8();
}
