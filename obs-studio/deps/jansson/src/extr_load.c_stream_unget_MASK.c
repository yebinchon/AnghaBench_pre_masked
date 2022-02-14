
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t buffer_pos; int* buffer; int column; int last_column; int line; int position; } ;
typedef TYPE_1__ stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(stream_t *VAR_2, int VAR_3)
{
    if(VAR_3 == VAR_0 || VAR_3 == VAR_1)
        return;

    VAR_2->position--;
    if(VAR_3 == '\n') {
        VAR_2->line--;
        VAR_2->column = VAR_2->last_column;
    }
    else if(FUNC_1(VAR_3))
        VAR_2->column--;

    FUNC_0(VAR_2->buffer_pos > 0);
    VAR_2->buffer_pos--;
    FUNC_0(VAR_2->buffer[VAR_2->buffer_pos] == VAR_3);
}
