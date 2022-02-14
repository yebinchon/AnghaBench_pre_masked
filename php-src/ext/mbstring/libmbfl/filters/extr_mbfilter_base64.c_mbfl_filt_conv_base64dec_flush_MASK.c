
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

int FUNC_3(mbfl_convert_filter *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_1 = VAR_0->status;
 VAR_2 = VAR_0->cache;
 VAR_0->status = 0;
 VAR_0->cache = 0;

 if (VAR_1 >= 2) {
  FUNC_0((*VAR_0->output_function)((VAR_2 >> 16) & 0xff, VAR_0->data));
  if (VAR_1 >= 3) {
   FUNC_0((*VAR_0->output_function)((VAR_2 >> 8) & 0xff, VAR_0->data));
  }
 }
 return 0;
}
