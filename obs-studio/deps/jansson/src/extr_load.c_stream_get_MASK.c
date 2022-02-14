
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; int* buffer; size_t buffer_pos; int (* get ) (int ) ;scalar_t__ column; scalar_t__ last_column; int line; int position; int data; } ;
typedef TYPE_1__ stream_t ;
typedef int json_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (int) ;
 int FUNC_6 (int*,size_t,int *) ;

__attribute__((used)) static int FUNC_7(stream_t *VAR_4, json_error_t *VAR_5)
{
    int VAR_6;

    if(VAR_4->state != VAR_3)
        return VAR_4->state;

    if(!VAR_4->buffer[VAR_4->buffer_pos])
    {
        VAR_6 = VAR_4->get(VAR_4->data);
        if(VAR_6 == VAR_0) {
            VAR_4->state = VAR_1;
            return VAR_1;
        }

        VAR_4->buffer[0] = VAR_6;
        VAR_4->buffer_pos = 0;

        if(0x80 <= VAR_6 && VAR_6 <= 0xFF)
        {

            size_t VAR_7, VAR_8;

            VAR_8 = FUNC_5(VAR_6);
            if(!VAR_8)
                goto out;

            FUNC_0(VAR_8 >= 2);

            for(VAR_7 = 1; VAR_7 < VAR_8; VAR_7++)
                VAR_4->buffer[VAR_7] = VAR_4->get(VAR_4->data);

            if(!FUNC_6(VAR_4->buffer, VAR_8, ((void*)0)))
                goto out;

            VAR_4->buffer[VAR_8] = '\0';
        }
        else
            VAR_4->buffer[1] = '\0';
    }

    VAR_6 = VAR_4->buffer[VAR_4->buffer_pos++];

    VAR_4->position++;
    if(VAR_6 == '\n') {
        VAR_4->line++;
        VAR_4->last_column = VAR_4->column;
        VAR_4->column = 0;
    }
    else if(FUNC_5(VAR_6)) {


        VAR_4->column++;
    }

    return VAR_6;

out:
    VAR_4->state = VAR_2;
    FUNC_1(VAR_5, FUNC_2(VAR_4), "unable to decode byte 0x%x", VAR_6);
    return VAR_2;
}
