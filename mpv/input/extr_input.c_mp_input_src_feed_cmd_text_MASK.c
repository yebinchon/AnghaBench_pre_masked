
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct mp_input_src_internal {size_t cmd_buffer; size_t cmd_buffer_size; int drop; } ;
struct mp_input_src {int input_ctx; int log; struct mp_input_src_internal* in; } ;
struct mp_cmd {int dummy; } ;
struct TYPE_5__ {size_t member_0; size_t member_1; } ;
typedef TYPE_1__ bstr ;


 size_t VAR_0 ;
 int FUNC_0 (struct mp_input_src*,char*) ;
 TYPE_1__ FUNC_1 (TYPE_1__) ;
 char* FUNC_2 (char*,char,size_t) ;
 int FUNC_3 (size_t,char*,size_t) ;
 struct mp_cmd* FUNC_4 (int ,TYPE_1__,char*) ;
 int FUNC_5 (int ,struct mp_cmd*) ;
 size_t FUNC_6 (struct mp_input_src_internal*,size_t) ;

void FUNC_7(struct mp_input_src *VAR_1, char *VAR_2, size_t VAR_3)
{
    struct mp_input_src_internal *VAR_4 = VAR_1->in;
    if (!VAR_4->cmd_buffer)
        VAR_4->cmd_buffer = FUNC_6(VAR_4, VAR_0);
    while (VAR_3) {
        char *VAR_5 = FUNC_2(VAR_2, '\n', VAR_3);
        bool VAR_6 = !!VAR_5;
        VAR_5 = VAR_5 ? VAR_5 + 1 : VAR_2 + VAR_3;
        size_t VAR_7 = VAR_5 - VAR_2;
        bool VAR_8 = VAR_7 > VAR_0 - VAR_4->cmd_buffer_size;
        if (VAR_8 || VAR_4->drop) {
            VAR_4->cmd_buffer_size = 0;
            VAR_4->drop = VAR_8 || !VAR_6;
            FUNC_0(VAR_1, "Dropping overlong line.\n");
        } else {
            FUNC_3(VAR_4->cmd_buffer + VAR_4->cmd_buffer_size, VAR_2, VAR_7);
            VAR_4->cmd_buffer_size += VAR_7;
            VAR_2 += VAR_7;
            VAR_3 -= VAR_7;
            if (VAR_6) {
                bstr VAR_9 = {VAR_4->cmd_buffer, VAR_4->cmd_buffer_size};
                VAR_9 = FUNC_1(VAR_9);
                struct mp_cmd *VAR_10 = FUNC_4(VAR_1->log, VAR_9, "<>");
                if (VAR_10)
                    FUNC_5(VAR_1->input_ctx, VAR_10);
                VAR_4->cmd_buffer_size = 0;
            }
        }
    }
}
