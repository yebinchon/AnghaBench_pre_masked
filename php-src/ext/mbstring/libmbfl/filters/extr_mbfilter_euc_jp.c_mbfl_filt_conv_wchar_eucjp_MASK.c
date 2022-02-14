
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
 int VAR_2 ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

int
FUNC_10(int VAR_15, mbfl_convert_filter *VAR_16)
{
 int VAR_17, VAR_18;

 VAR_18 = 0;
 if (VAR_15 >= VAR_5 && VAR_15 < VAR_4) {
  VAR_18 = VAR_3[VAR_15 - VAR_5];
 } else if (VAR_15 >= VAR_8 && VAR_15 < VAR_7) {
  VAR_18 = VAR_6[VAR_15 - VAR_8];
 } else if (VAR_15 >= VAR_11 && VAR_15 < VAR_10) {
  VAR_18 = VAR_9[VAR_15 - VAR_11];
 } else if (VAR_15 >= VAR_14 && VAR_15 < VAR_13) {
  VAR_18 = VAR_12[VAR_15 - VAR_14];
 }
 if (VAR_18 <= 0) {
  VAR_17 = VAR_15 & ~VAR_2;
  if (VAR_17 == VAR_0) {
   VAR_18 = VAR_15 & VAR_2;
  } else if (VAR_17 == VAR_1) {
   VAR_18 = VAR_15 & VAR_2;
   VAR_18 |= 0x8080;
  } else if (VAR_15 == 0xff3c) {
   VAR_18 = 0x2140;
  } else if (VAR_15 == 0xff5e) {
   VAR_18 = 0x2141;
  } else if (VAR_15 == 0x2225) {
   VAR_18 = 0x2142;
  } else if (VAR_15 == 0xff0d) {
   VAR_18 = 0x215d;
  } else if (VAR_15 == 0xffe0) {
   VAR_18 = 0x2171;
  } else if (VAR_15 == 0xffe1) {
   VAR_18 = 0x2172;
  } else if (VAR_15 == 0xffe2) {
   VAR_18 = 0x224c;
  }
  if (VAR_15 == 0) {
   VAR_18 = 0;
  } else if (VAR_18 <= 0) {
   VAR_18 = -1;
  }
 }
 if (VAR_18 >= 0) {
  if (VAR_18 < 0x80) {
   FUNC_0((*VAR_16->output_function)(VAR_18, VAR_16->data));
  } else if (VAR_18 < 0x100) {
   FUNC_0((*VAR_16->output_function)(0x8e, VAR_16->data));
   FUNC_0((*VAR_16->output_function)(VAR_18, VAR_16->data));
  } else if (VAR_18 < 0x8080) {
   FUNC_0((*VAR_16->output_function)(((VAR_18 >> 8) & 0xff) | 0x80, VAR_16->data));
   FUNC_0((*VAR_16->output_function)((VAR_18 & 0xff) | 0x80, VAR_16->data));
  } else {
   FUNC_0((*VAR_16->output_function)(0x8f, VAR_16->data));
   FUNC_0((*VAR_16->output_function)(((VAR_18 >> 8) & 0xff) | 0x80, VAR_16->data));
   FUNC_0((*VAR_16->output_function)((VAR_18 & 0xff) | 0x80, VAR_16->data));
  }
 } else {
  FUNC_0(FUNC_1(VAR_15, VAR_16));
 }

 return VAR_15;
}
