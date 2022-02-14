
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int** VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int* VAR_21 ;
 int* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

int
FUNC_5(int VAR_28, mbfl_convert_filter *VAR_29)
{
 int VAR_30, VAR_31, VAR_32;
 int VAR_33, VAR_34 = 0;

 if (VAR_28 >= VAR_6 && VAR_28 < VAR_5) {

  VAR_34 = VAR_4[VAR_28 - VAR_6];
 } else if (VAR_28 >= VAR_9 && VAR_28 < VAR_8) {

  if (VAR_28 == 0x203e) {
   VAR_34 = 0xa3fe;
  } else if (VAR_28 == 0x2218) {
   VAR_34 = 0xa1e3;
  } else if (VAR_28 == 0x223c) {
   VAR_34 = 0xa1ab;
  } else {
   VAR_34 = VAR_7[VAR_28 - VAR_9];
  }
 } else if (VAR_28 >= VAR_12 && VAR_28 < VAR_11) {

  VAR_34 = VAR_10[VAR_28 - VAR_12];
 } else if (VAR_28 >= VAR_24 && VAR_28 < VAR_23) {

  VAR_34 = VAR_22[VAR_28 - VAR_24];
 } else if (VAR_28 >= 0xe000 && VAR_28 <= 0xe864) {
  if (VAR_28 < 0xe766) {
   if (VAR_28 < 0xe4c6) {
    VAR_33 = VAR_28 - 0xe000;
    VAR_34 = (VAR_33 % 94) + 0xa1; VAR_33 /= 94;
    VAR_34 |= (VAR_33 < 0x06 ? VAR_33 + 0xaa : VAR_33 + 0xf2) << 8;
   } else {
    VAR_33 = VAR_28 - 0xe4c6;
    VAR_34 = ((VAR_33 / 96) + 0xa1) << 8; VAR_33 %= 96;
    VAR_34 |= VAR_33 + (VAR_33 >= 0x3f ? 0x41 : 0x40);
   }
  } else {

   VAR_31 = 0; VAR_32 = VAR_3;
   while (VAR_31 < VAR_32) {
    VAR_30 = (VAR_31 + VAR_32) >> 1;
    if (VAR_28 < VAR_2[VAR_30][0]) {
     VAR_32 = VAR_30;
    } else if (VAR_28 > VAR_2[VAR_30][1]) {
     VAR_31 = VAR_30 + 1;
    } else {
     VAR_34 = VAR_28 - VAR_2[VAR_30][0] + VAR_2[VAR_30][2];
     break;
    }
   }
  }
 } else if (VAR_28 == 0xf8f5) {
  VAR_34 = 0xff;
 } else if (VAR_28 >= VAR_18 && VAR_28 < VAR_17) {

  VAR_34 = VAR_16[VAR_28 - VAR_18];
 } else if (VAR_28 >= VAR_15 && VAR_28 < VAR_14) {
  VAR_34 = VAR_13[VAR_28 - VAR_15];
 } else if (VAR_28 >= VAR_27 && VAR_28 < VAR_26) {
  VAR_34 = VAR_25[VAR_28 - VAR_27];
 } else if (VAR_28 >= VAR_20 && VAR_28 < VAR_19) {

  if (VAR_28 == 0xff04) {
   VAR_34 = 0xa1e7;
  } else if (VAR_28 == 0xff5e) {
   VAR_34 = 0xa1ab;
  } else if (VAR_28 >= 0xff01 && VAR_28 <= 0xff5d) {
   VAR_34 = VAR_28 - 0xff01 + 0xa3a1;
  } else if (VAR_28 >= 0xffe0 && VAR_28 <= 0xffe5) {
   VAR_34 = VAR_21[VAR_28-0xffe0];
  }
 }
 if (VAR_34 <= 0) {
  VAR_33 = VAR_28 & ~VAR_0;
  if (VAR_33 == VAR_1) {
   VAR_34 = VAR_28 & VAR_0;
  }
  if (VAR_28 == 0) {
   VAR_34 = 0;
  } else if (VAR_34 <= 0) {
   VAR_34 = -1;
  }
 }
 if (VAR_34 >= 0) {
  if (VAR_34 <= 0x80 || VAR_34 == 0xff) {
   FUNC_0((*VAR_29->output_function)(VAR_34, VAR_29->data));
  } else {
   FUNC_0((*VAR_29->output_function)((VAR_34 >> 8) & 0xff, VAR_29->data));
   FUNC_0((*VAR_29->output_function)(VAR_34 & 0xff, VAR_29->data));
  }
 } else {
  FUNC_0(FUNC_1(VAR_28, VAR_29));
 }

 return VAR_28;
}
