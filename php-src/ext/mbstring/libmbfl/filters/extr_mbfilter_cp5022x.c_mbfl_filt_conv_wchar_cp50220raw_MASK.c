
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; int data; int (* output_function ) (int const,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int const,int ) ;
 int FUNC_6 (int const,int ) ;

int
FUNC_7(int VAR_2, mbfl_convert_filter *VAR_3)
{
 if (VAR_2 & VAR_0) {
  const int VAR_4 = VAR_2 & VAR_1;

  if ((VAR_3->status & 0xff00) != 0x200) {
   FUNC_0((*VAR_3->output_function)(0x1b, VAR_3->data));
   FUNC_0((*VAR_3->output_function)(0x24, VAR_3->data));
   FUNC_0((*VAR_3->output_function)(0x42, VAR_3->data));
   VAR_3->status = 0x200;
  }
  FUNC_0((*VAR_3->output_function)((VAR_4 >> 8) & 0x7f, VAR_3->data));
  FUNC_0((*VAR_3->output_function)(VAR_4 & 0x7f, VAR_3->data));
  return VAR_2;
 } else {
  return FUNC_1(VAR_2, VAR_3);
 }
}
