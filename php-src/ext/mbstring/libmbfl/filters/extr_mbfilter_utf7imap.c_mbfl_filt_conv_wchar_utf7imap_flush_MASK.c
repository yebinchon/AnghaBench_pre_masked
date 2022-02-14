
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int cache; int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int* VAR_0 ;
 int FUNC_1 (int,int ) ;
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

int FUNC_14(mbfl_convert_filter *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = VAR_1->status;
 VAR_3 = VAR_1->cache;
 VAR_1->status = 0;
 VAR_1->cache = 0;

 switch (VAR_2) {
 case 1:
  FUNC_0((*VAR_1->output_function)(VAR_0[(VAR_3 >> 10) & 0x3f], VAR_1->data));
  FUNC_0((*VAR_1->output_function)(VAR_0[(VAR_3 >> 4) & 0x3f], VAR_1->data));
  FUNC_0((*VAR_1->output_function)(VAR_0[(VAR_3 << 2) & 0x3c], VAR_1->data));
  FUNC_0((*VAR_1->output_function)(0x2d, VAR_1->data));
  break;

 case 2:
  FUNC_0((*VAR_1->output_function)(VAR_0[(VAR_3 >> 14) & 0x3f], VAR_1->data));
  FUNC_0((*VAR_1->output_function)(VAR_0[(VAR_3 >> 8) & 0x3f], VAR_1->data));
  FUNC_0((*VAR_1->output_function)(VAR_0[(VAR_3 >> 2) & 0x3f], VAR_1->data));
  FUNC_0((*VAR_1->output_function)(VAR_0[(VAR_3 << 4) & 0x30], VAR_1->data));
  FUNC_0((*VAR_1->output_function)(0x2d, VAR_1->data));
  break;

 case 3:
  FUNC_0((*VAR_1->output_function)(VAR_0[(VAR_3 >> 12) & 0x3f], VAR_1->data));
  FUNC_0((*VAR_1->output_function)(VAR_0[(VAR_3 >> 6) & 0x3f], VAR_1->data));
  FUNC_0((*VAR_1->output_function)(VAR_0[VAR_3 & 0x3f], VAR_1->data));
  FUNC_0((*VAR_1->output_function)(0x2d, VAR_1->data));
  break;
 }
 return 0;
}
