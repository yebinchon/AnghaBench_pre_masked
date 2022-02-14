
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pos; scalar_t__ length; int allocsz; unsigned int* buffer; } ;
typedef TYPE_1__ mbfl_wchar_device ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,size_t) ;

int
FUNC_1(int VAR_1, void *VAR_2)
{
 mbfl_wchar_device *VAR_3 = (mbfl_wchar_device *)VAR_2;

 if (VAR_3->pos >= VAR_3->length) {

  size_t VAR_4;
  unsigned int *VAR_5;

  if (VAR_3->length > VAR_0 - VAR_3->allocsz) {

   return -1;
  }

  VAR_4 = VAR_3->length + VAR_3->allocsz;
  if (VAR_4 > VAR_0 / sizeof(int)) {

   return -1;
  }

  VAR_5 = (unsigned int *)FUNC_0((void *)VAR_3->buffer, VAR_4*sizeof(int));
  if (VAR_5 == ((void*)0)) {
   return -1;
  }
  VAR_3->length = VAR_4;
  VAR_3->buffer = VAR_5;
 }

 VAR_3->buffer[VAR_3->pos++] = VAR_1;

 return VAR_1;
}
