
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int cache; int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;

int FUNC_8(int VAR_0, mbfl_convert_filter *VAR_1)
{
 int VAR_2, VAR_3;

 static int VAR_4[] = {
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
   0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1, -1, -1, -1, -1, -1,
  -1, 10, 11, 12, 13, 14, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, 10, 11, 12, 13, 14, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
 };

 switch (VAR_1->status) {
 case 1:
  if (VAR_4[VAR_0 & 0xff] >= 0) {
   VAR_1->cache = VAR_0;
   VAR_1->status = 2;
  } else if (VAR_0 == 0x0d) {
   VAR_1->status = 3;
  } else if (VAR_0 == 0x0a) {
   VAR_1->status = 0;
  } else {
   FUNC_0((*VAR_1->output_function)(0x3d, VAR_1->data));
   FUNC_0((*VAR_1->output_function)(VAR_0, VAR_1->data));
   VAR_1->status = 0;
  }
  break;
 case 2:
  VAR_3 = VAR_4[VAR_0 & 0xff];
  if (VAR_3 < 0) {
   FUNC_0((*VAR_1->output_function)(0x3d, VAR_1->data));
   FUNC_0((*VAR_1->output_function)(VAR_1->cache, VAR_1->data));
   VAR_2 = VAR_0;
  } else {
   VAR_2 = VAR_4[VAR_1->cache] << 4 | VAR_3;
  }
  FUNC_0((*VAR_1->output_function)(VAR_2, VAR_1->data));
  VAR_1->status = 0;
  break;
 case 3:
  if (VAR_0 != 0x0a) {
   FUNC_0((*VAR_1->output_function)(VAR_0, VAR_1->data));
  }
  VAR_1->status = 0;
  break;
 default:
  if (VAR_0 == 0x3d) {
   VAR_1->status = 1;
  } else {
   FUNC_0((*VAR_1->output_function)(VAR_0, VAR_1->data));
  }
  break;
 }

 return VAR_0;
}
