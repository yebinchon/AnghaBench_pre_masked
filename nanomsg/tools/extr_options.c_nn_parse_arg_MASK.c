
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_parse_context {char* data; } ;


 int FUNC_0 (struct nn_parse_context*) ;
 int FUNC_1 (struct nn_parse_context*) ;
 int FUNC_2 (struct nn_parse_context*) ;

__attribute__((used)) static void FUNC_3 (struct nn_parse_context *VAR_0)
{
    if (VAR_0->data[0] == '-') {
        if (VAR_0->data[1] == '-') {
            if (VAR_0->data[2] == 0) {
                return;
            }
            FUNC_1 (VAR_0);
        } else {
            VAR_0->data += 1;
            while (*VAR_0->data) {
                FUNC_2 (VAR_0);
            }
        }
    } else {
        FUNC_0 (VAR_0);
    }
}
