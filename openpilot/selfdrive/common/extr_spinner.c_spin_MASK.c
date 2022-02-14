
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NVGpaint ;
typedef int NVGcontext ;
typedef int FramebufferState ;
typedef int EGLSurface ;
typedef int EGLDisplay ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 double VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int,int ) ;
 float FUNC_4 (double,float) ;
 float FUNC_5 (double,float) ;
 int * FUNC_6 (char*,int,int,int *,int *,int*,int*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (double,double,double,double) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (char) ;
 int FUNC_13 (int *,int,int,float) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int,int,int,int,int,int,int ,int ) ;
 int FUNC_16 (int *,char*,unsigned char*,scalar_t__,int ) ;
 int * FUNC_17 (int) ;
 int FUNC_18 (int *,int ,unsigned char*,scalar_t__) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *,float) ;
 int FUNC_23 (int *,int,int,int,int,int ,int,float) ;
 int FUNC_24 (int *,int,int ,int,int,int ,int ) ;
 int FUNC_25 (int,int,int) ;
 int FUNC_26 (int ,int ,int ,int) ;
 int FUNC_27 (int *,int,int,int,int) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *,double) ;
 int FUNC_30 (int *,int,int,int,int,int) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *,int,int,char*,int *) ;
 int FUNC_33 (int *,int) ;
 int FUNC_34 (int *,int,int) ;
 int VAR_18 ;
 scalar_t__ FUNC_35 () ;
 size_t FUNC_36 (char*,char*) ;
 size_t FUNC_37 (char*) ;
 int FUNC_38 (char*,char*,int) ;

int FUNC_39(int VAR_19, char** VAR_20) {
  int VAR_21;

  bool VAR_22 = 0;
  float VAR_23 = 0.0;

  char VAR_24[VAR_11];
  VAR_24[0] = 0;

  const char* VAR_25 = ((void*)0);
  if (VAR_19 >= 2) {
    FUNC_38(VAR_24, VAR_20[1], VAR_11);
  }


  int VAR_26, VAR_27;
  EGLDisplay VAR_28;
  EGLSurface VAR_29;
  FramebufferState *VAR_30 = FUNC_6("spinner", 0x00001000, 0,
                     &VAR_28, &VAR_29, &VAR_26, &VAR_27);
  FUNC_0(*VAR_30);

  NVGcontext *VAR_31 = FUNC_17(VAR_9 | VAR_10);
  FUNC_0(*VAR_31);

  int VAR_32 = FUNC_16(VAR_31, "Bold", (unsigned char*)VAR_17, VAR_16-VAR_17, 0);
  FUNC_0(VAR_32 >= 0);

  int VAR_33 = FUNC_18(VAR_31, 0, (unsigned char*)VAR_15, VAR_14 - VAR_15);
  FUNC_0(VAR_33 >= 0);
  int VAR_34 = 360;
  int VAR_35 = ((VAR_26/2)-(VAR_34/2));
  int VAR_36 = 260;
  int VAR_37 = (VAR_26/2);
  int VAR_38 = (VAR_27/2)-100;
  int VAR_39 = FUNC_18(VAR_31, 0, (unsigned char*)VAR_13, VAR_12 - VAR_13);
  FUNC_0(VAR_39 >= 0);

  for (int VAR_40 = 0; ; VAR_40++) {

    if (FUNC_35()){
      FUNC_3(VAR_24, VAR_11, VAR_18);
      VAR_24[FUNC_36(VAR_24, "\n")] = 0;


      size_t VAR_41 = FUNC_37(VAR_24);
      bool VAR_42 = VAR_41 > 0;
      for (int VAR_43 = 0; VAR_43 < VAR_41; VAR_43++){
        if (!FUNC_12(VAR_24[VAR_43])){
          VAR_42 = 0;
          break;
        }
      }

      if (VAR_42) {
        VAR_23 = (float)(FUNC_1(VAR_24)) / 100.0;
        VAR_23 = FUNC_5(1.0, VAR_23);
        VAR_23 = FUNC_4(0.0, VAR_23);
      }

      VAR_22 = VAR_42;
    }

    FUNC_9(0.1, 0.1, 0.1, 1.0);
    FUNC_8(VAR_5 | VAR_1);
    FUNC_10(VAR_0);
    FUNC_7(VAR_4, VAR_3);
    FUNC_13(VAR_31, VAR_26, VAR_27, 1.0f);


    FUNC_14(VAR_31);
    NVGpaint VAR_44 = FUNC_24(VAR_31, VAR_26, 0, VAR_26, VAR_27,
    FUNC_26(0, 0, 0, 175), FUNC_26(0, 0, 0, 255));
    FUNC_21(VAR_31, VAR_44);
    FUNC_27(VAR_31, 0, 0, VAR_26, VAR_27);
    FUNC_20(VAR_31);


    FUNC_31(VAR_31);
    FUNC_34(VAR_31, VAR_37, VAR_38);
    FUNC_29(VAR_31, (3.75*VAR_6 * VAR_40/120.0));
    FUNC_34(VAR_31, -VAR_37, -VAR_38);
    NVGpaint VAR_45 = FUNC_23(VAR_31, VAR_35, VAR_36,
      VAR_34, VAR_34, 0, VAR_33, 0.6f);
    FUNC_14(VAR_31);
    FUNC_21(VAR_31, VAR_45);
    FUNC_27(VAR_31, VAR_35, VAR_36, VAR_34, VAR_34);
    FUNC_20(VAR_31);
    FUNC_28(VAR_31);


    NVGpaint VAR_46 = FUNC_23(VAR_31, VAR_35, VAR_36,
      VAR_34, VAR_34, 0, VAR_39, 1.0f);
    FUNC_14(VAR_31);
    FUNC_21(VAR_31, VAR_46);
    FUNC_27(VAR_31, VAR_35, VAR_36, VAR_34, VAR_34);
    FUNC_20(VAR_31);

    if (VAR_22){

      int VAR_47 = 1000;
      int VAR_48 = VAR_26/2-VAR_47/2;
      int VAR_49 = 775;
      int VAR_50 = 25;

      NVGpaint VAR_51 = FUNC_15(
          VAR_31, VAR_48 + 1, VAR_49 + 1,
          VAR_47 - 2, VAR_50, 3, 4, FUNC_25(27, 27, 27), FUNC_25(27, 27, 27));
      FUNC_14(VAR_31);
      FUNC_30(VAR_31, VAR_48, VAR_49, VAR_47, VAR_50, 12);
      FUNC_21(VAR_31, VAR_51);
      FUNC_20(VAR_31);

      int VAR_52 = ((VAR_47 - 2) * VAR_23);

      VAR_51 = FUNC_15(
          VAR_31, VAR_48, VAR_49,
          VAR_52+1.5f, VAR_50-1, 3, 4,
          FUNC_25(245, 245, 245), FUNC_25(105, 105, 105));

      FUNC_14(VAR_31);
      FUNC_30(
          VAR_31, VAR_48+1, VAR_49+1,
          VAR_52, VAR_50-2, 12);
      FUNC_21(VAR_31, VAR_51);
      FUNC_20(VAR_31);
    } else {

      FUNC_33(VAR_31, VAR_7 | VAR_8);
      FUNC_22(VAR_31, 96.0f);
      FUNC_32(VAR_31, VAR_26/2, (VAR_27*2/3)+24, VAR_24, ((void*)0));
    }

    FUNC_19(VAR_31);
    FUNC_2(VAR_28, VAR_29);
    FUNC_0(FUNC_11() == VAR_2);
  }

  return 0;
}
