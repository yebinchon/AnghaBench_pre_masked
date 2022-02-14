
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; int (* output_function ) (int,int ) ;} ;
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

int FUNC_12(int VAR_0, mbfl_convert_filter *VAR_1)
{
 if (VAR_0 >= 0 && VAR_0 < 0x110000) {
  if (VAR_0 < 0x80) {
   FUNC_0((*VAR_1->output_function)(VAR_0, VAR_1->data));
  } else if (VAR_0 < 0x800) {
   FUNC_0((*VAR_1->output_function)(((VAR_0 >> 6) & 0x1f) | 0xc0, VAR_1->data));
   FUNC_0((*VAR_1->output_function)((VAR_0 & 0x3f) | 0x80, VAR_1->data));
  } else if (VAR_0 < 0x10000) {
   FUNC_0((*VAR_1->output_function)(((VAR_0 >> 12) & 0x0f) | 0xe0, VAR_1->data));
   FUNC_0((*VAR_1->output_function)(((VAR_0 >> 6) & 0x3f) | 0x80, VAR_1->data));
   FUNC_0((*VAR_1->output_function)((VAR_0 & 0x3f) | 0x80, VAR_1->data));
  } else {
   FUNC_0((*VAR_1->output_function)(((VAR_0 >> 18) & 0x07) | 0xf0, VAR_1->data));
   FUNC_0((*VAR_1->output_function)(((VAR_0 >> 12) & 0x3f) | 0x80, VAR_1->data));
   FUNC_0((*VAR_1->output_function)(((VAR_0 >> 6) & 0x3f) | 0x80, VAR_1->data));
   FUNC_0((*VAR_1->output_function)((VAR_0 & 0x3f) | 0x80, VAR_1->data));
  }
 } else {
  FUNC_0(FUNC_1(VAR_0, VAR_1));
 }

 return VAR_0;
}
