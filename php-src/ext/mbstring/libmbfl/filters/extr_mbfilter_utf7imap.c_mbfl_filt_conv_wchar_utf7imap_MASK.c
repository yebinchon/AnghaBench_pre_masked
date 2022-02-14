
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int status; int cache; int data; int (* output_function ) (int,int ) ;int (* filter_function ) (int,TYPE_1__*) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,TYPE_1__*) ;
 int* VAR_3 ;
 int FUNC_2 (int,TYPE_1__*) ;
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
 int FUNC_13 (int,TYPE_1__*) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (int,int ) ;
 int FUNC_17 (int,int ) ;
 int FUNC_18 (int,int ) ;
 int FUNC_19 (int,int ) ;
 int FUNC_20 (int,int ) ;
 int FUNC_21 (int,int ) ;
 int FUNC_22 (int,int ) ;
 int FUNC_23 (int,int ) ;
 int FUNC_24 (int,int ) ;
 int FUNC_25 (int,int ) ;

int FUNC_26(int VAR_4, mbfl_convert_filter *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = 0;
 if (VAR_4 == 0x26) {
  VAR_6 = 1;
 } else if ((VAR_4 >= 0x20 && VAR_4 <= 0x7e) || VAR_4 == 0) {
  VAR_6 = 2;
 } else if (VAR_4 >= 0 && VAR_4 < VAR_2) {
  ;
 } else if (VAR_4 >= VAR_1 && VAR_4 < VAR_0) {
  VAR_7 = ((VAR_4 >> 10) - 0x40) | 0xd800;
  FUNC_0((*VAR_5->filter_function)(VAR_7, VAR_5));
  VAR_7 = (VAR_4 & 0x3ff) | 0xdc00;
  FUNC_0((*VAR_5->filter_function)(VAR_7, VAR_5));
  return VAR_4;
 } else {
  FUNC_0(FUNC_1(VAR_4, VAR_5));
  return VAR_4;
 }

 switch (VAR_5->status) {
 case 0:
  if (VAR_6 != 0) {
   FUNC_0((*VAR_5->output_function)(VAR_4, VAR_5->data));
   if (VAR_6 == 1) {
    FUNC_0((*VAR_5->output_function)(0x2d, VAR_5->data));
   }
  } else {
   FUNC_0((*VAR_5->output_function)(0x26, VAR_5->data));
   VAR_5->status = 1;
   VAR_5->cache = VAR_4;
  }
  break;


 case 1:
  VAR_7 = VAR_5->cache;
  FUNC_0((*VAR_5->output_function)(VAR_3[(VAR_7 >> 10) & 0x3f], VAR_5->data));
  FUNC_0((*VAR_5->output_function)(VAR_3[(VAR_7 >> 4) & 0x3f], VAR_5->data));
  if (VAR_6 != 0) {
   FUNC_0((*VAR_5->output_function)(VAR_3[(VAR_7 << 2) & 0x3c], VAR_5->data));
   FUNC_0((*VAR_5->output_function)(0x2d, VAR_5->data));
   FUNC_0((*VAR_5->output_function)(VAR_4, VAR_5->data));
   if (VAR_6 == 1) {
    FUNC_0((*VAR_5->output_function)(0x2d, VAR_5->data));
   }
   VAR_5->status = 0;
  } else {
   VAR_5->status = 2;
   VAR_5->cache = ((VAR_7 & 0xf) << 16) | VAR_4;
  }
  break;

 case 2:
  VAR_7 = VAR_5->cache;
  FUNC_0((*VAR_5->output_function)(VAR_3[(VAR_7 >> 14) & 0x3f], VAR_5->data));
  FUNC_0((*VAR_5->output_function)(VAR_3[(VAR_7 >> 8) & 0x3f], VAR_5->data));
  FUNC_0((*VAR_5->output_function)(VAR_3[(VAR_7 >> 2) & 0x3f], VAR_5->data));
  if (VAR_6 != 0) {
   FUNC_0((*VAR_5->output_function)(VAR_3[(VAR_7 << 4) & 0x30], VAR_5->data));
   FUNC_0((*VAR_5->output_function)(0x2d, VAR_5->data));
   FUNC_0((*VAR_5->output_function)(VAR_4, VAR_5->data));
   if (VAR_6 == 1) {
    FUNC_0((*VAR_5->output_function)(0x2d, VAR_5->data));
   }
   VAR_5->status = 0;
  } else {
   VAR_5->status = 3;
   VAR_5->cache = ((VAR_7 & 0x3) << 16) | VAR_4;
  }
  break;

 case 3:
  VAR_7 = VAR_5->cache;
  FUNC_0((*VAR_5->output_function)(VAR_3[(VAR_7 >> 12) & 0x3f], VAR_5->data));
  FUNC_0((*VAR_5->output_function)(VAR_3[(VAR_7 >> 6) & 0x3f], VAR_5->data));
  FUNC_0((*VAR_5->output_function)(VAR_3[VAR_7 & 0x3f], VAR_5->data));
  if (VAR_6 != 0) {
   FUNC_0((*VAR_5->output_function)(0x2d, VAR_5->data));
   FUNC_0((*VAR_5->output_function)(VAR_4, VAR_5->data));
   if (VAR_6 == 1) {
    FUNC_0((*VAR_5->output_function)(0x2d, VAR_5->data));
   }
   VAR_5->status = 0;
  } else {
   VAR_5->status = 1;
   VAR_5->cache = VAR_4;
  }
  break;

 default:
  VAR_5->status = 0;
  break;
 }

 return VAR_4;

}
