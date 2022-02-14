
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
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

int
FUNC_6(int VAR_14, mbfl_convert_filter *VAR_15)
{
 int VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_18 = 0;
 if (VAR_14 >= VAR_4 && VAR_14 < VAR_3) {
  VAR_18 = VAR_2[VAR_14 - VAR_4];
 } else if (VAR_14 >= VAR_7 && VAR_14 < VAR_6) {
  VAR_18 = VAR_5[VAR_14 - VAR_7];
 } else if (VAR_14 >= VAR_10 && VAR_14 < VAR_9) {
  VAR_18 = VAR_8[VAR_14 - VAR_10];
 } else if (VAR_14 >= VAR_13 && VAR_14 < VAR_12) {
  VAR_18 = VAR_11[VAR_14 - VAR_13];
 }
 if (VAR_18 <= 0) {
  VAR_16 = VAR_14 & ~VAR_1;
  if (VAR_16 == VAR_0) {
   VAR_18 = VAR_14 & VAR_1;
  } else if (VAR_14 == 0xa5) {
   VAR_18 = 0x216f;
  } else if (VAR_14 == 0x203e) {
   VAR_18 = 0x2131;
  } else if (VAR_14 == 0xff3c) {
   VAR_18 = 0x2140;
  } else if (VAR_14 == 0xff5e) {
   VAR_18 = 0x2141;
  } else if (VAR_14 == 0x2225) {
   VAR_18 = 0x2142;
  } else if (VAR_14 == 0xff0d) {
   VAR_18 = 0x215d;
  } else if (VAR_14 == 0xffe0) {
   VAR_18 = 0x2171;
  } else if (VAR_14 == 0xffe1) {
   VAR_18 = 0x2172;
  } else if (VAR_14 == 0xffe2) {
   VAR_18 = 0x224c;
  }
  if (VAR_14 == 0) {
   VAR_18 = 0;
  } else if (VAR_18 <= 0) {
   VAR_18 = -1;
  }
 } else if (VAR_18 >= 0x8080) {
  VAR_18 = -1;
 }
 if (VAR_18 >= 0) {
  if (VAR_18 < 0x100) {
   FUNC_0((*VAR_15->output_function)(VAR_18, VAR_15->data));
  } else {
   VAR_16 = (VAR_18 >> 8) & 0xff;
   VAR_17 = VAR_18 & 0xff;
   FUNC_1(VAR_16, VAR_17, VAR_18, VAR_19);
   FUNC_0((*VAR_15->output_function)(VAR_18, VAR_15->data));
   FUNC_0((*VAR_15->output_function)(VAR_19, VAR_15->data));
  }
 } else {
  FUNC_0(FUNC_2(VAR_14, VAR_15));
 }

 return VAR_14;
}
