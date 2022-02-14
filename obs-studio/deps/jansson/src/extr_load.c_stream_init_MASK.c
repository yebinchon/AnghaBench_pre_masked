
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buffer; int line; scalar_t__ position; scalar_t__ column; int state; scalar_t__ buffer_pos; void* data; int get; } ;
typedef TYPE_1__ stream_t ;
typedef int get_func ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(stream_t *VAR_1, get_func VAR_2, void *VAR_3)
{
    VAR_1->get = VAR_2;
    VAR_1->data = VAR_3;
    VAR_1->buffer[0] = '\0';
    VAR_1->buffer_pos = 0;

    VAR_1->state = VAR_0;
    VAR_1->line = 1;
    VAR_1->column = 0;
    VAR_1->position = 0;
}
