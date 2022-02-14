
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t length; size_t pos; unsigned char* buffer; } ;
typedef TYPE_1__ mbfl_memory_device ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (void*,size_t) ;
 int FUNC_1 (unsigned char*,char const*,size_t) ;

int
FUNC_2(mbfl_memory_device *VAR_2, const char *VAR_3, size_t VAR_4)
{
 unsigned char *VAR_5;

 if (VAR_4 > VAR_2->length - VAR_2->pos) {

  size_t VAR_6;
  unsigned char *VAR_7;

  if (VAR_4 > VAR_1 - VAR_0
    || VAR_2->length > VAR_1 - (VAR_4 + VAR_0)) {

   return -1;
  }

  VAR_6 = VAR_2->length + VAR_4 + VAR_0;
  VAR_7 = (unsigned char *)FUNC_0((void *)VAR_2->buffer, VAR_6);
  if (VAR_7 == ((void*)0)) {
   return -1;
  }

  VAR_2->length = VAR_6;
  VAR_2->buffer = VAR_7;
 }

 VAR_5 = &VAR_2->buffer[VAR_2->pos];
 FUNC_1(VAR_5, VAR_3, VAR_4);
 VAR_2->pos += VAR_4;

 return 0;
}
