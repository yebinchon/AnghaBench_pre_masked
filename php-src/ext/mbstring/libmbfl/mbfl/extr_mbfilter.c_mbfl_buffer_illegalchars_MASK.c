
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* filter2; TYPE_1__* filter1; } ;
typedef TYPE_3__ mbfl_buffer_converter ;
struct TYPE_6__ {scalar_t__ num_illegalchar; } ;
struct TYPE_5__ {scalar_t__ num_illegalchar; } ;



size_t FUNC_0(mbfl_buffer_converter *VAR_0)
{
 size_t VAR_1 = 0;

 if (VAR_0 == ((void*)0)) {
  return 0;
 }

 if (VAR_0->filter1 != ((void*)0)) {
  VAR_1 += VAR_0->filter1->num_illegalchar;
 }

 if (VAR_0->filter2 != ((void*)0)) {
  VAR_1 += VAR_0->filter2->num_illegalchar;
 }

 return VAR_1;
}
