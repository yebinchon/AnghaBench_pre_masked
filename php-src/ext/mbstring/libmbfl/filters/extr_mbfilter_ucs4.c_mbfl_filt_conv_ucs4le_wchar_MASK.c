
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int cache; int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

int FUNC_2(int VAR_0, mbfl_convert_filter *VAR_1)
{
 int VAR_2;

 if (VAR_1->status == 0) {
  VAR_1->status = 1;
  VAR_2 = (VAR_0 & 0xff);
  VAR_1->cache = VAR_2;
 } else if (VAR_1->status == 1) {
  VAR_1->status = 2;
  VAR_2 = (VAR_0 & 0xff) << 8;
  VAR_1->cache |= VAR_2;
 } else if (VAR_1->status == 2) {
  VAR_1->status = 3;
  VAR_2 = (VAR_0 & 0xff) << 16;
  VAR_1->cache |= VAR_2;
 } else {
  VAR_1->status = 0;
  VAR_2 = ((VAR_0 & 0xff) << 24) | VAR_1->cache;
  FUNC_0((*VAR_1->output_function)(VAR_2, VAR_1->data));
 }
 return VAR_0;
}
