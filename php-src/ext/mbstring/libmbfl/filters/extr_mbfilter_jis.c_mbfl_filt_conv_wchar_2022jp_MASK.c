
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int,int ) ;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

int
FUNC_15(int VAR_12, mbfl_convert_filter *VAR_13)
{
 int VAR_14;

 VAR_14 = 0;
 if (VAR_12 >= VAR_2 && VAR_12 < VAR_1) {
  VAR_14 = VAR_0[VAR_12 - VAR_2];
 } else if (VAR_12 >= VAR_5 && VAR_12 < VAR_4) {
  VAR_14 = VAR_3[VAR_12 - VAR_5];
 } else if (VAR_12 >= VAR_8 && VAR_12 < VAR_7) {
  VAR_14 = VAR_6[VAR_12 - VAR_8];
 } else if (VAR_12 >= VAR_11 && VAR_12 < VAR_10) {
  VAR_14 = VAR_9[VAR_12 - VAR_11];
 }
 if (VAR_14 <= 0) {
  if (VAR_12 == 0xa5) {
   VAR_14 = 0x1005c;
  } else if (VAR_12 == 0x203e) {
   VAR_14 = 0x1007e;
  } else if (VAR_12 == 0xff3c) {
   VAR_14 = 0x2140;
  } else if (VAR_12 == 0xff5e) {
   VAR_14 = 0x2141;
  } else if (VAR_12 == 0x2225) {
   VAR_14 = 0x2142;
  } else if (VAR_12 == 0xff0d) {
   VAR_14 = 0x215d;
  } else if (VAR_12 == 0xffe0) {
   VAR_14 = 0x2171;
  } else if (VAR_12 == 0xffe1) {
   VAR_14 = 0x2172;
  } else if (VAR_12 == 0xffe2) {
   VAR_14 = 0x224c;
  }
  if (VAR_12 == 0) {
   VAR_14 = 0;
  } else if (VAR_14 <= 0) {
   VAR_14 = -1;
  }
 } else if ((VAR_14 >= 0x80 && VAR_14 < 0x2121) || (VAR_14 > 0x8080)) {
  VAR_14 = -1;
 }
 if (VAR_14 >= 0) {
  if (VAR_14 < 0x80) {
   if ((VAR_13->status & 0xff00) != 0) {
    FUNC_0((*VAR_13->output_function)(0x1b, VAR_13->data));
    FUNC_0((*VAR_13->output_function)(0x28, VAR_13->data));
    FUNC_0((*VAR_13->output_function)(0x42, VAR_13->data));
   }
   VAR_13->status = 0;
   FUNC_0((*VAR_13->output_function)(VAR_14, VAR_13->data));
  } else if (VAR_14 < 0x10000) {
   if ((VAR_13->status & 0xff00) != 0x200) {
    FUNC_0((*VAR_13->output_function)(0x1b, VAR_13->data));
    FUNC_0((*VAR_13->output_function)(0x24, VAR_13->data));
    FUNC_0((*VAR_13->output_function)(0x42, VAR_13->data));
   }
   VAR_13->status = 0x200;
   FUNC_0((*VAR_13->output_function)((VAR_14 >> 8) & 0x7f, VAR_13->data));
   FUNC_0((*VAR_13->output_function)(VAR_14 & 0x7f, VAR_13->data));
  } else {
   if ((VAR_13->status & 0xff00) != 0x400) {
    FUNC_0((*VAR_13->output_function)(0x1b, VAR_13->data));
    FUNC_0((*VAR_13->output_function)(0x28, VAR_13->data));
    FUNC_0((*VAR_13->output_function)(0x4a, VAR_13->data));
   }
   VAR_13->status = 0x400;
   FUNC_0((*VAR_13->output_function)(VAR_14 & 0x7f, VAR_13->data));
  }
 } else {
  FUNC_0(FUNC_1(VAR_12, VAR_13));
 }

 return VAR_12;
}
