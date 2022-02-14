
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int (* flush_function ) (int ) ;int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;

int
FUNC_6(mbfl_convert_filter *VAR_0)
{

 if ((VAR_0->status & 0xff00) == 0x500) {
  FUNC_0((*VAR_0->output_function)(0x0f, VAR_0->data));
 } else if ((VAR_0->status & 0xff00) != 0) {
  FUNC_0((*VAR_0->output_function)(0x1b, VAR_0->data));
  FUNC_0((*VAR_0->output_function)(0x28, VAR_0->data));
  FUNC_0((*VAR_0->output_function)(0x42, VAR_0->data));
 }
 VAR_0->status &= 0xff;

 if (VAR_0->flush_function != ((void*)0)) {
  return (*VAR_0->flush_function)(VAR_0->data);
 }

 return 0;
}
