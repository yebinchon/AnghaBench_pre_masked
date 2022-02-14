
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
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
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
 int* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

int
FUNC_9(int VAR_17, mbfl_convert_filter *VAR_18)
{
 int VAR_19, VAR_20, VAR_21;

 VAR_20 = 0;
 if (VAR_17 >= VAR_4 && VAR_17 < VAR_3) {
  VAR_20 = VAR_2[VAR_17 - VAR_4];
 } else if (VAR_17 >= VAR_7 && VAR_17 < VAR_6) {
  VAR_20 = VAR_5[VAR_17 - VAR_7];
 } else if (VAR_17 >= VAR_10 && VAR_17 < VAR_9) {
  VAR_20 = VAR_8[VAR_17 - VAR_10];
 } else if (VAR_17 >= VAR_13 && VAR_17 < VAR_12) {
  VAR_20 = VAR_11[VAR_17 - VAR_13];
 } else if (VAR_17 >= VAR_16 && VAR_17 < VAR_15) {
  VAR_20 = VAR_14[VAR_17 - VAR_16];
 }
 if (VAR_20 <= 0) {
  VAR_19 = VAR_17 & ~VAR_1;
  if (VAR_19 == VAR_0) {
   VAR_20 = VAR_17 & VAR_1;
  }
  if (VAR_17 == 0) {
   VAR_20 = 0;
  } else if (VAR_20 <= 0) {
   VAR_20 = -1;
  }
 }
 if (VAR_20 >= 0) {
  VAR_21 = (VAR_20 & 0x1f0000) >> 16;
  if (VAR_21 <= 1){
   if (VAR_20 < 0x80) {
    FUNC_0((*VAR_18->output_function)(VAR_20, VAR_18->data));
   } else {
    VAR_20 = (VAR_20 & 0xffff) | 0x8080;
    FUNC_0((*VAR_18->output_function)((VAR_20 >> 8) & 0xff, VAR_18->data));
    FUNC_0((*VAR_18->output_function)(VAR_20 & 0xff, VAR_18->data));
   }
  } else {
   VAR_20 = (0x8ea00000 + (VAR_21 << 16)) | ((VAR_20 & 0xffff) | 0x8080);
   FUNC_0((*VAR_18->output_function)(0x8e , VAR_18->data));
   FUNC_0((*VAR_18->output_function)((VAR_20 >> 16) & 0xff, VAR_18->data));
   FUNC_0((*VAR_18->output_function)((VAR_20 >> 8) & 0xff, VAR_18->data));
   FUNC_0((*VAR_18->output_function)(VAR_20 & 0xff, VAR_18->data));
  }
 } else {
  FUNC_0(FUNC_1(VAR_17, VAR_18));
 }
 return VAR_17;
}
