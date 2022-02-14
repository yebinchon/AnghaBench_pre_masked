
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buf_ptr; int* buf_end; int fd; int* buffer; } ;
typedef TYPE_1__ BufferedFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(BufferedFile *VAR_4)
{
 int VAR_5;

 if (VAR_4->buf_ptr >= VAR_4->buf_end) {
  if (VAR_4->fd != -1) {



   VAR_5 = VAR_2;

   VAR_5 = FUNC_0 (VAR_4->fd, VAR_4->buffer, VAR_5);
   if (VAR_5 < 0) {
    VAR_5 = 0;
   }
  } else {
   VAR_5 = 0;
  }
  VAR_3 += VAR_5;
  VAR_4->buf_ptr = VAR_4->buffer;
  VAR_4->buf_end = VAR_4->buffer + VAR_5;
  *VAR_4->buf_end = VAR_0;
 }
 if (VAR_4->buf_ptr < VAR_4->buf_end) {
  return VAR_4->buf_ptr[0];
 } else {
  VAR_4->buf_ptr = VAR_4->buf_end;
  return VAR_1;
 }
}
