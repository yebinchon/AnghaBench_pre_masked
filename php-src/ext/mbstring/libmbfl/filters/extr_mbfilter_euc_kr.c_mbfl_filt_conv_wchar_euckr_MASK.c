
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
 int* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

int
FUNC_5(int VAR_23, mbfl_convert_filter *VAR_24)
{
 int VAR_25, VAR_26, VAR_27;

 VAR_27 = 0;

 if (VAR_23 >= VAR_4 && VAR_23 < VAR_3) {
  VAR_27 = VAR_2[VAR_23 - VAR_4];
 } else if (VAR_23 >= VAR_7 && VAR_23 < VAR_6) {
  VAR_27 = VAR_5[VAR_23 - VAR_7];
 } else if (VAR_23 >= VAR_10 && VAR_23 < VAR_9) {
  VAR_27 = VAR_8[VAR_23 - VAR_10];
 } else if (VAR_23 >= VAR_13 && VAR_23 < VAR_12) {
  VAR_27 = VAR_11[VAR_23 - VAR_13];
 } else if (VAR_23 >= VAR_22 && VAR_23 < VAR_21) {
  VAR_27 = VAR_20[VAR_23 - VAR_22];
 } else if (VAR_23 >= VAR_16 && VAR_23 < VAR_15) {
  VAR_27 = VAR_14[VAR_23 - VAR_16];
 } else if (VAR_23 >= VAR_19 && VAR_23 < VAR_18) {
  VAR_27 = VAR_17[VAR_23 - VAR_19];
 }

 VAR_25 = (VAR_27 >> 8) & 0xff;
 VAR_26 = VAR_27 & 0xff;

 if (VAR_25 < 0xa1 || VAR_26 < 0xa1){
  VAR_27 = VAR_23;
 }

 if (VAR_27 <= 0) {
  VAR_25 = VAR_23 & ~VAR_1;
  if (VAR_25 == VAR_0) {
   VAR_27 = VAR_23 & VAR_1;
  }
  if (VAR_23 == 0) {
   VAR_27 = 0;
  } else if (VAR_27 <= 0) {
   VAR_27 = -1;
  }
 }
 if (VAR_27 >= 0) {
  if (VAR_27 < 0x80) {
   FUNC_0((*VAR_24->output_function)(VAR_27, VAR_24->data));
  } else {
   FUNC_0((*VAR_24->output_function)((VAR_27 >> 8) & 0xff, VAR_24->data));
   FUNC_0((*VAR_24->output_function)(VAR_27 & 0xff, VAR_24->data));
  }
 } else {
  FUNC_0(FUNC_1(VAR_23, VAR_24));
 }

 return VAR_23;
}
