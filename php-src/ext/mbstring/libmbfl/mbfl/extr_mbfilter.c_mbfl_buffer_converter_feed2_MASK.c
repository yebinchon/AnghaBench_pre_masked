
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int len; unsigned char* val; } ;
typedef TYPE_1__ mbfl_string ;
struct TYPE_10__ {int (* filter_function ) (int,TYPE_2__*) ;} ;
typedef TYPE_2__ mbfl_convert_filter ;
struct TYPE_12__ {scalar_t__ pos; } ;
struct TYPE_11__ {TYPE_2__* filter1; TYPE_6__ device; } ;
typedef TYPE_3__ mbfl_buffer_converter ;


 int FUNC_0 (TYPE_6__*,scalar_t__,int) ;
 int FUNC_1 (int,TYPE_2__*) ;

int
FUNC_2(mbfl_buffer_converter *VAR_0, mbfl_string *VAR_1, size_t *VAR_2)
{
 size_t VAR_3;
 unsigned char *VAR_4;
 mbfl_convert_filter *VAR_5;
 int (*VAR_6)(int VAR_7, mbfl_convert_filter *VAR_8);

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0)) {
  return -1;
 }
 FUNC_0(&VAR_0->device, VAR_0->device.pos + VAR_1->len, VAR_1->len/4);

 VAR_3 = VAR_1->len;
 VAR_4 = VAR_1->val;

 VAR_5 = VAR_0->filter1;
 if (VAR_5 != ((void*)0)) {
  VAR_6 = VAR_5->filter_function;
  while (VAR_3 > 0) {
   if ((*VAR_6)(*VAR_4++, VAR_5) < 0) {
    if (VAR_2) {
     *VAR_2 = VAR_4 - VAR_1->val;
    }
    return -1;
   }
   VAR_3--;
  }
 }
 if (VAR_2) {
  *VAR_2 = VAR_4 - VAR_1->val;
 }
 return 0;
}
