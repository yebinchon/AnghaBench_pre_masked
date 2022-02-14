
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int line_num; int fd; struct TYPE_7__* prev; int ifdef_stack_ptr; scalar_t__ ifndef_macro; int filename; int * buf_end; int * buffer; int * buf_ptr; } ;
struct TYPE_6__ {int ifdef_stack_ptr; } ;
typedef TYPE_1__ TCCState ;
typedef TYPE_2__ BufferedFile ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,char const*) ;

void FUNC_3(TCCState *VAR_3, const char *VAR_4, int VAR_5)
{
 BufferedFile *VAR_6;
 int VAR_7 = VAR_5? VAR_5: VAR_1;

 VAR_6 = FUNC_0 (sizeof(BufferedFile) + VAR_7);
 VAR_6->buf_ptr = VAR_6->buffer;
 VAR_6->buf_end = VAR_6->buffer + VAR_5;
 VAR_6->buf_end[0] = VAR_0;
 FUNC_2 (VAR_6->filename, sizeof(VAR_6->filename), VAR_4);



 VAR_6->line_num = 1;
 VAR_6->ifndef_macro = 0;
 VAR_6->ifdef_stack_ptr = VAR_3->ifdef_stack_ptr;
 VAR_6->fd = -1;
 VAR_6->prev = VAR_2;
 VAR_2 = VAR_6;
}
