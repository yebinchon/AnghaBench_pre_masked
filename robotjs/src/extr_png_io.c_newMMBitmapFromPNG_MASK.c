
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int png_uint_32 ;
typedef int png_struct ;
typedef int png_info ;
typedef int png_byte ;
typedef int header ;
struct TYPE_2__ {int blue; int green; int red; } ;
typedef TYPE_1__ MMRGBColor ;
typedef int MMPNGReadError ;
typedef int * MMBitmapRef ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* FUNC_1 (int,int) ;
 int * FUNC_2 (int*,int,int,int,int,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (int*,int,int,int *) ;
 int FUNC_6 (int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int ,int *,int *,int *) ;
 int FUNC_9 (int **,int **,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;
 scalar_t__ FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int* FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 (int *,int*,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,int) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 scalar_t__ FUNC_29 (int*,int ,int) ;
 scalar_t__ FUNC_30 (int ) ;

MMBitmapRef FUNC_31(const char *VAR_10, MMPNGReadError *VAR_11)
{
 FILE *VAR_12;
 uint8_t VAR_13[8];
 png_struct *VAR_14 = ((void*)0);
 png_info *VAR_15 = ((void*)0);
 png_byte VAR_16, VAR_17;
 uint8_t *VAR_18, *VAR_19;
 uint8_t VAR_20;
 png_uint_32 VAR_21, VAR_22, VAR_23;
 uint32_t VAR_24;

 if ((VAR_12 = FUNC_4(VAR_10, "rb")) == ((void*)0)) {
  if (VAR_11 != ((void*)0)) *VAR_11 = VAR_6;
  return ((void*)0);
 }


 if (VAR_11 != ((void*)0)) *VAR_11 = VAR_7;


 if (FUNC_5(VAR_13, 1, sizeof VAR_13, VAR_12) == 0) {
  if (VAR_11 != ((void*)0)) *VAR_11 = VAR_9;
  goto bail;
 } else if (FUNC_29(VAR_13, 0, sizeof(VAR_13)) != 0) {
  if (VAR_11 != ((void*)0)) *VAR_11 = VAR_8;
  goto bail;
 }

 VAR_14 = FUNC_8(VAR_5, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_14 == ((void*)0)) goto bail;

 VAR_15 = FUNC_7(VAR_14);
 if (VAR_15 == ((void*)0)) goto bail;


 if (FUNC_30(FUNC_17(VAR_14))) {
  goto bail;
 }

 FUNC_16(VAR_14, VAR_12);


 FUNC_25(VAR_14, sizeof VAR_13);

 FUNC_20(VAR_14, VAR_15);


 VAR_16 = FUNC_10(VAR_14, VAR_15);
 VAR_17 = FUNC_11(VAR_14, VAR_15);


 if (VAR_17 == VAR_3) {
  FUNC_24(VAR_14);
 }


 if (VAR_17 == VAR_1 && VAR_16 < 8) {
  FUNC_22(VAR_14);
 } else if (VAR_16 == 16) {
  FUNC_26(VAR_14);
 }


 if (FUNC_15(VAR_14, VAR_15, VAR_4)) {
  FUNC_28(VAR_14);
 }


 if (VAR_17 == VAR_1 ||
     VAR_17 == VAR_2) {
  FUNC_23(VAR_14);
 }


 if (VAR_17 & VAR_0) {
  FUNC_27(VAR_14);
 }


 VAR_21 = FUNC_13(VAR_14, VAR_15);
 VAR_22 = FUNC_12(VAR_14, VAR_15);
 VAR_20 = 3;
 VAR_24 = FUNC_0(VAR_21 * VAR_20);


 VAR_19 = FUNC_1(1, VAR_24 * VAR_22);
 VAR_18 = FUNC_18(VAR_14, FUNC_14(VAR_14, VAR_15));
 if (VAR_19 == ((void*)0) || VAR_18 == ((void*)0)) goto bail;
 for (VAR_23 = 0; VAR_23 < VAR_22; ++VAR_23) {
  png_uint_32 VAR_25;
  const uint32_t VAR_26 = VAR_23 * VAR_24;
  uint8_t *VAR_27 = VAR_18;
  FUNC_21(VAR_14, (png_byte *)VAR_18, ((void*)0));

  for (VAR_25 = 0; VAR_25 < VAR_21; ++VAR_25) {
   const uint32_t VAR_28 = VAR_25 * VAR_20;
   MMRGBColor *VAR_29 = (MMRGBColor *)(VAR_19 + VAR_26 + VAR_28);
   VAR_29->red = *VAR_27++;
   VAR_29->green = *VAR_27++;
   VAR_29->blue = *VAR_27++;
  }
 }
 FUNC_6(VAR_18);


 FUNC_19(VAR_14, ((void*)0));
 FUNC_9(&VAR_14, &VAR_15, ((void*)0));
 FUNC_3(VAR_12);

 return FUNC_2(VAR_19, VAR_21, VAR_22,
                       VAR_24, VAR_20 * 8, VAR_20);

bail:
 FUNC_9(&VAR_14, &VAR_15, ((void*)0));
 FUNC_3(VAR_12);
 return ((void*)0);
}
