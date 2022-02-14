
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int cache; int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int* VAR_14 ;
 int FUNC_2 (int,int ,int ) ;
 int* VAR_15 ;
 int** VAR_16 ;
 int FUNC_3 (int,int ) ;
 int* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

int
FUNC_4(int VAR_20, int *VAR_21, mbfl_convert_filter *VAR_22)
{
 int VAR_23, VAR_24 = 0, VAR_25;

 if (VAR_22->status == 1) {
  VAR_25 = VAR_22->cache;
  VAR_22->cache = 0;
  VAR_22->status = 0;
  if (VAR_20 == 0x20E3) {
   if (VAR_25 == 0x0023) {
    *VAR_21 = 0x25bc;
    VAR_24 = 1;
   } else if (VAR_25 == 0x0030) {
    *VAR_21 = 0x2830;
    VAR_24 = 1;
   } else if (VAR_25 >= 0x0031 && VAR_25 <= 0x0039) {
    *VAR_21 = 0x27a6 + (VAR_25 - 0x0031);
    VAR_24 = 1;
   }
  } else if ((VAR_20 >= FUNC_1(0x41) && VAR_20 <= FUNC_1(0x5A)) && (VAR_25 >= FUNC_1(0x41) && VAR_25 <= FUNC_1(0x5A))) {
   for (VAR_23=0; VAR_23<10; VAR_23++) {
    if (VAR_25 == FUNC_1(VAR_16[VAR_23][0]) && VAR_20 == FUNC_1(VAR_16[VAR_23][1])) {
     *VAR_21 = VAR_15[VAR_23];
     VAR_24 = 1;
     break;
    }
   }
  } else {
   if (VAR_25 >= VAR_19 && VAR_25 < VAR_18) {
    VAR_25 = VAR_17[VAR_25 - VAR_19];
    FUNC_0((*VAR_22->output_function)(VAR_25, VAR_22->data));
   }
  }
 } else {
  if (VAR_20 == 0x0023 || ( VAR_20 >= 0x0030 && VAR_20<=0x0039) ||
   (VAR_20 >= FUNC_1(0x41) && VAR_20<= FUNC_1(0x5A))) {
   VAR_22->status = 1;
   VAR_22->cache = VAR_20;
   *VAR_21 = -1;
   return VAR_24;
  }

  if (VAR_20 == 0x00A9) {
   *VAR_21 = 0x27dc; VAR_24 = 1;
  } else if (VAR_20 == 0x00AE) {
   *VAR_21 = 0x27dd; VAR_24 = 1;
  } else if (VAR_20 >= VAR_3 && VAR_20 <= VAR_2) {
   VAR_23 = FUNC_2(VAR_20, VAR_0, VAR_1);
   if (VAR_23 >= 0) {
    *VAR_21 = VAR_4[VAR_23];
    VAR_24 = 1;
   }
  } else if (VAR_20 >= VAR_8 && VAR_20 <= VAR_7) {
   VAR_23 = FUNC_2(VAR_20 - 0x10000, VAR_5, VAR_6);
   if (VAR_23 >= 0) {
    *VAR_21 = VAR_9[VAR_23];
    VAR_24 = 1;
   }
  } else if (VAR_20 >= VAR_13 && VAR_20 <= VAR_12) {
   VAR_23 = FUNC_2(VAR_20 - 0xf0000, VAR_10, VAR_11);
   if (VAR_23 >= 0) {
    *VAR_21 = VAR_14[VAR_23];
    VAR_24 = 1;
   }
  }
 }

 return VAR_24;
}
