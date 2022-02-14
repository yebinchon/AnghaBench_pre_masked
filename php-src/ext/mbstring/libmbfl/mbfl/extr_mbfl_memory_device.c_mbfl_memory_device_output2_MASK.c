
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int pos; size_t allocsz; unsigned char* buffer; } ;
typedef TYPE_1__ mbfl_memory_device ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,size_t) ;

int
FUNC_1(int VAR_1, void *VAR_2)
{
 mbfl_memory_device *VAR_3 = (mbfl_memory_device *)VAR_2;

 if (2 > VAR_3->length - VAR_3->pos) {

  size_t VAR_4;
  unsigned char *VAR_5;

  if (VAR_3->length > VAR_0 - VAR_3->allocsz) {

   return -1;
  }

  VAR_4 = VAR_3->length + VAR_3->allocsz;
  VAR_5 = (unsigned char *)FUNC_0((void *)VAR_3->buffer, VAR_4);
  if (VAR_5 == ((void*)0)) {
   return -1;
  }
  VAR_3->length = VAR_4;
  VAR_3->buffer = VAR_5;
 }

 VAR_3->buffer[VAR_3->pos++] = (unsigned char)((VAR_1 >> 8) & 0xff);
 VAR_3->buffer[VAR_3->pos++] = (unsigned char)(VAR_1 & 0xff);

 return VAR_1;
}
