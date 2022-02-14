
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buffer; int bufsize; int boundary_next_len; char* buf_begin; int * input_encoding; scalar_t__ detect_order_size; int * detect_order; scalar_t__ bytes_in_buffer; int boundary_next; int boundary; } ;
typedef TYPE_1__ multipart_buffer ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int **,scalar_t__*) ;
 scalar_t__ FUNC_3 (int *,int ,char*,char*) ;

__attribute__((used)) static multipart_buffer *FUNC_4(char *VAR_1, int VAR_2)
{
 multipart_buffer *VAR_3 = (multipart_buffer *) FUNC_0(1, sizeof(multipart_buffer));

 int VAR_4 = VAR_2 + 6;
 if (VAR_4 < VAR_0) VAR_4 = VAR_0;

 VAR_3->buffer = (char *) FUNC_0(1, VAR_4 + 1);
 VAR_3->bufsize = VAR_4;

 FUNC_3(&VAR_3->boundary, 0, "--%s", VAR_1);

 VAR_3->boundary_next_len = (int)FUNC_3(&VAR_3->boundary_next, 0, "\n--%s", VAR_1);

 VAR_3->buf_begin = VAR_3->buffer;
 VAR_3->bytes_in_buffer = 0;

 if (FUNC_1()) {
  FUNC_2(&VAR_3->detect_order, &VAR_3->detect_order_size);
 } else {
  VAR_3->detect_order = ((void*)0);
  VAR_3->detect_order_size = 0;
 }

 VAR_3->input_encoding = ((void*)0);

 return VAR_3;
}
