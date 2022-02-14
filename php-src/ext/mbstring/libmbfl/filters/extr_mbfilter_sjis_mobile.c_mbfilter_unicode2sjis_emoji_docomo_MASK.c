
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int cache; int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,int ) ;

int
FUNC_3(int VAR_15, int *VAR_16, mbfl_convert_filter *VAR_17)
{
 int VAR_18, VAR_19 = 0, VAR_20;

 if (VAR_17->status == 1) {
  VAR_20 = VAR_17->cache;
  VAR_17->cache = 0;
  VAR_17->status = 0;
  if (VAR_15 == 0x20E3) {
   if (VAR_20 == 0x0023) {
    *VAR_16 = 0x2964;
    VAR_19 = 1;
   } else if (VAR_20 == 0x0030) {
    *VAR_16 = 0x296f;
    VAR_19 = 1;
   } else if (VAR_20 >= 0x0031 && VAR_20 <= 0x0039) {
    *VAR_16 = 0x2966 + (VAR_20 - 0x0031);
    VAR_19 = 1;
   }
  } else {
   FUNC_0((*VAR_17->output_function)(VAR_20, VAR_17->data));
  }
 } else {
  if (VAR_15 == 0x0023 || (VAR_15 >= 0x0030 && VAR_15<=0x0039)) {
   VAR_17->status = 1;
   VAR_17->cache = VAR_15;
   *VAR_16 = -1;
   return VAR_19;
  }

  if (VAR_15 == 0x00A9) {
   *VAR_16 = 0x29b5; VAR_19 = 1;
  } else if (VAR_15 == 0x00AE) {
   *VAR_16 = 0x29ba; VAR_19 = 1;
  } else if (VAR_15 >= VAR_3 && VAR_15 <= VAR_2) {
   VAR_18 = FUNC_1(VAR_15, VAR_0, VAR_1);
   if (VAR_18 >= 0) {
    *VAR_16 = VAR_4[VAR_18];
    VAR_19 = 1;
   }
  } else if (VAR_15 >= VAR_8 && VAR_15 <= VAR_7) {
   VAR_18 = FUNC_1(VAR_15 - 0x10000, VAR_5, VAR_6);
   if (VAR_18 >= 0) {
    *VAR_16 = VAR_9[VAR_18];
    VAR_19 = 1;
   }
  } else if (VAR_15 >= VAR_13 && VAR_15 <= VAR_12) {
   VAR_18 = FUNC_1(VAR_15 - 0xf0000, VAR_10, VAR_11);
   if (VAR_18 >= 0) {
    *VAR_16 = VAR_14[VAR_18];
    VAR_19 = 1;
   }
  }
 }

 return VAR_19;
}
