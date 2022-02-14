
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; unsigned char* buffer; size_t allocsz; scalar_t__ pos; } ;
typedef TYPE_1__ mbfl_memory_device ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;

void
FUNC_1(mbfl_memory_device *VAR_1, size_t VAR_2, size_t VAR_3)
{
 if (VAR_1) {
  VAR_1->length = 0;
  VAR_1->buffer = ((void*)0);
  if (VAR_2 > 0) {
   VAR_1->buffer = (unsigned char *)FUNC_0(VAR_2);
   if (VAR_1->buffer != ((void*)0)) {
    VAR_1->length = VAR_2;
   }
  }
  VAR_1->pos = 0;
  if (VAR_3 > VAR_0) {
   VAR_1->allocsz = VAR_3;
  } else {
   VAR_1->allocsz = VAR_0;
  }
 }
}
