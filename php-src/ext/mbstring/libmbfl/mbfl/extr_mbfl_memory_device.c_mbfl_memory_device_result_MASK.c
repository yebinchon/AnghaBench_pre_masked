
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ len; int * val; } ;
typedef TYPE_1__ mbfl_string ;
struct TYPE_8__ {scalar_t__ pos; scalar_t__ length; int * buffer; } ;
typedef TYPE_2__ mbfl_memory_device ;


 int FUNC_0 (char,TYPE_2__*) ;

mbfl_string *
FUNC_1(mbfl_memory_device *VAR_0, mbfl_string *VAR_1)
{
 if (VAR_0 && VAR_1) {
  VAR_1->len = VAR_0->pos;
  FUNC_0('\0', VAR_0);
  VAR_1->val = VAR_0->buffer;
  VAR_0->buffer = ((void*)0);
  VAR_0->length = 0;
  VAR_0->pos= 0;
  if (VAR_1->val == ((void*)0)) {
   VAR_1->len = 0;
   VAR_1 = ((void*)0);
  }
 } else {
  VAR_1 = ((void*)0);
 }

 return VAR_1;
}
