
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int8_t ;
typedef int int16_t ;
struct TYPE_2__ {int year; int month; int day; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (scalar_t__,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int,int,int ,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,char*,int ,int ,int) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_1__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*,int) ;
 int VAR_19 ;
 int VAR_20 ;

void FUNC_7(){
  int8_t VAR_21 = VAR_14 / 60;
  int16_t VAR_22 = VAR_14 % 60;
  int16_t VAR_23 = VAR_15.year + 1980;
  int8_t VAR_24 = VAR_15.month;
  int8_t VAR_25 = VAR_15.day;

  if(VAR_12 == VAR_6){
    VAR_21 = VAR_13;
    VAR_22 = VAR_17;
    VAR_23 = VAR_20 + 1980;
    VAR_24 = VAR_18;
    VAR_25 = VAR_11;
  }

  bool VAR_26 = (VAR_21 / 12) > 0;
  VAR_21 = VAR_21 % 12;
  if (VAR_21 == 0){
    VAR_21 = 12;
  }
  char VAR_27[3] = "";
  char VAR_28[3] = "";
  char VAR_29[5] = "";
  char VAR_30[3] = "";
  char VAR_31[3] = "";

  FUNC_6(VAR_27, "%02d", VAR_21);
  FUNC_6(VAR_28, "%02d", VAR_22);
  FUNC_6(VAR_29, "%d", VAR_23);
  FUNC_6(VAR_30, "%02d", VAR_24);
  FUNC_6(VAR_31, "%02d", VAR_25);




  FUNC_4(6, 0, VAR_29, VAR_9, VAR_7, 0);
  FUNC_4(6 + 25, 0, "-", VAR_9, VAR_7, 0);
  FUNC_4(6 + 31, 0, VAR_30, VAR_9, VAR_7, 0);
  FUNC_4(6 + 44, 0, "-", VAR_9, VAR_7, 0);
  FUNC_4(6 + 50, 0, VAR_31, VAR_9, VAR_7, 0);



  FUNC_4(6, 14, VAR_27, VAR_9, VAR_7, 1);
  FUNC_4(6 + 17, 14, ":", VAR_9, VAR_7, 1);
  FUNC_4(6 + 25, 14, VAR_28, VAR_9, VAR_7, 1);
  if(VAR_26){
    FUNC_4(6 + 41, 14, "pm", VAR_9, VAR_7, 1);
  } else{
    FUNC_4(6 + 41, 14, "am", VAR_9, VAR_7, 1);
  }

  if(VAR_10){
    switch(VAR_19){
      case 0:
      default:
        FUNC_2(6, 14 + 17, 6 + 16, 14 + 17, VAR_9, VAR_7);
        break;
      case 1:
        FUNC_2(6 + 25, 14 + 17, 6 + 41, 14 + 17, VAR_9, VAR_7);
        break;
      case 2:
        FUNC_2(6, 0 + 9, 6 + 23, 0 + 9, VAR_9, VAR_7);
        break;
      case 3:
        FUNC_2(6 + 31, 0 + 9, 6 + 43, 0 + 9, VAR_9, VAR_7);
        break;
      case 4:
        FUNC_2(6 + 50, 0 + 9, 6 + 61, 0 + 9,VAR_9, VAR_7);
        break;
    }
  }

  FUNC_0(80, 0, 1);
  FUNC_1(80, 11, 1);




  if (VAR_16 == 1) {
    FUNC_3(86, 22, 5 + (4 * 6), 9, VAR_9, VAR_7);
    FUNC_4(86 + 3, 22 +1, "CAPS", VAR_8, VAR_7, 0);
  } else if (VAR_16 == 0) {
    FUNC_4(86 + 3, 22 +1, "CAPS", VAR_9, VAR_7, 0);
  }


  FUNC_5();

}
