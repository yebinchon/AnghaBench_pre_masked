
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf_begin; int bytes_in_buffer; size_t bufsize; } ;
typedef TYPE_1__ multipart_buffer ;


 char* FUNC_0 (char*,char,int) ;

__attribute__((used)) static char *FUNC_1(multipart_buffer *VAR_0)
{

 char* VAR_1 = VAR_0->buf_begin;
 char* VAR_2 = FUNC_0(VAR_0->buf_begin, '\n', VAR_0->bytes_in_buffer);

 if (VAR_2) {


  if ((VAR_2 - VAR_1) > 0 && *(VAR_2-1) == '\r') {
   *(VAR_2-1) = 0;
  } else {
   *VAR_2 = 0;
  }


  VAR_0->buf_begin = VAR_2 + 1;
  VAR_0->bytes_in_buffer -= (VAR_0->buf_begin - VAR_1);

 } else {


  if (VAR_0->bytes_in_buffer < VAR_0->bufsize) {
   return ((void*)0);
  }

  VAR_1[VAR_0->bufsize] = 0;
  VAR_0->buf_begin = VAR_2;
  VAR_0->bytes_in_buffer = 0;
 }

 return VAR_1;
}
