
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
 int* VAR_2 ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,int ) ;

int FUNC_3(int VAR_3, mbfl_convert_filter *VAR_4)
{
 int VAR_5=-1, VAR_6;

 if (VAR_3 >= 0x100) {

  VAR_5 = -1;
  VAR_6 = 31;
  while (VAR_6 >= 0) {
   if (VAR_3 == VAR_2[VAR_6] && VAR_3 != 0xfffe) {
    VAR_5 = 0x80 + VAR_6;
    break;
   }
   VAR_6--;
  }
  if (VAR_5 <= 0 && (VAR_3 & ~VAR_1) == VAR_0)
  {
   VAR_5 = VAR_3 & VAR_1;
  }
 }
 else if (VAR_3 >= 0 && VAR_3 < 0x100) {
  VAR_5 = VAR_3;
 }
 if (VAR_5 >= 0) {
  FUNC_0((*VAR_4->output_function)(VAR_5, VAR_4->data));
 } else {
  FUNC_0(FUNC_1(VAR_3, VAR_4));
 }
 return VAR_3;
}
