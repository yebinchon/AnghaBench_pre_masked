
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cache; int status; int (* flush_function ) (int ) ;int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(mbfl_convert_filter *VAR_0)
{
 int VAR_1 = VAR_0->cache;
 if (VAR_0->status == 1 && (VAR_1 == 0x0023 || (VAR_1 >= 0x0030 && VAR_1<=0x0039))) {
  FUNC_0((*VAR_0->output_function)(VAR_1, VAR_0->data));
 }
 VAR_0->status = 0;
 VAR_0->cache = 0;

 if (VAR_0->flush_function != ((void*)0)) {
  return (*VAR_0->flush_function)(VAR_0->data);
 }

 return 0;
}
