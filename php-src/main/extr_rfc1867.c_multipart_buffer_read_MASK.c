
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t bytes_in_buffer; char* buf_begin; int boundary_next_len; int boundary_next; } ;
typedef TYPE_1__ multipart_buffer ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char*,size_t) ;
 char* FUNC_2 (char*,size_t,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(multipart_buffer *VAR_0, char *VAR_1, size_t VAR_2, int *VAR_3)
{
 size_t VAR_4, VAR_5;
 char *VAR_6;


 if (VAR_2 > (size_t)VAR_0->bytes_in_buffer) {
  FUNC_0(VAR_0);
 }


 if ((VAR_6 = FUNC_2(VAR_0->buf_begin, VAR_0->bytes_in_buffer, VAR_0->boundary_next, VAR_0->boundary_next_len, 1))) {
  VAR_5 = VAR_6 - VAR_0->buf_begin;
  if (VAR_3 && FUNC_2(VAR_0->buf_begin, VAR_0->bytes_in_buffer, VAR_0->boundary_next, VAR_0->boundary_next_len, 0)) {
   *VAR_3 = 1;
  }
 } else {
  VAR_5 = VAR_0->bytes_in_buffer;
 }


 VAR_4 = VAR_5 < VAR_2-1 ? VAR_5 : VAR_2-1;


 if (VAR_4 > 0) {


  FUNC_1(VAR_1, VAR_0->buf_begin, VAR_4);
  VAR_1[VAR_4] = 0;

  if (VAR_6 && VAR_4 > 0 && VAR_1[VAR_4-1] == '\r') {
   VAR_1[--VAR_4] = 0;
  }


  VAR_0->bytes_in_buffer -= (int)VAR_4;
  VAR_0->buf_begin += VAR_4;
 }

 return (int)VAR_4;
}
