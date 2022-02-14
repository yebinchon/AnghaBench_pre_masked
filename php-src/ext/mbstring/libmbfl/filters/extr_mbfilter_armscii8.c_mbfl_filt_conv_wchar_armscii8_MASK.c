
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,int ) ;
 int* VAR_5 ;

int FUNC_3(int VAR_6, mbfl_convert_filter *VAR_7)
{

 int VAR_8, VAR_9;

 if (VAR_6 >= 0x28 && VAR_6 < 0x30) {
  VAR_8 = VAR_5[VAR_6-0x28];
 } else if (VAR_6 < VAR_4) {
  VAR_8 = VAR_6;
 } else {
  VAR_8 = -1;
  VAR_9 = VAR_3-1;
  while (VAR_9 >= 0) {
   if (VAR_6 == VAR_2[VAR_9]) {
    VAR_8 = VAR_4 + VAR_9;
    break;
   }
   VAR_9--;
  }
  if (VAR_8 <= 0 && (VAR_6 & ~VAR_1) == VAR_0) {
   VAR_8 = VAR_6 & VAR_1;
  }
 }

 if (VAR_8 >= 0) {
  FUNC_0((*VAR_7->output_function)(VAR_8, VAR_7->data));
 } else {
  FUNC_0(FUNC_1(VAR_6, VAR_7));
 }

 return VAR_6;
}
