
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int len; int * val; int encoding; } ;
typedef TYPE_2__ mbfl_string ;
struct TYPE_7__ {int pos; int * buffer; } ;
struct TYPE_9__ {TYPE_1__ device; int to; } ;
typedef TYPE_3__ mbfl_buffer_converter ;



mbfl_string *
FUNC_0(mbfl_buffer_converter *VAR_0, mbfl_string *VAR_1)
{
 if (VAR_0 != ((void*)0) && VAR_1 != ((void*)0) && VAR_0->device.buffer != ((void*)0)) {
  VAR_1->encoding = VAR_0->to;
  VAR_1->val = VAR_0->device.buffer;
  VAR_1->len = VAR_0->device.pos;
 } else {
  VAR_1 = ((void*)0);
 }

 return VAR_1;
}
