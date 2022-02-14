
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* buffer; int len; } ;
typedef TYPE_1__ BUFFER ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;

void FUNC_3(BUFFER *VAR_0, const char *VAR_1)
{
    while(*VAR_1) {
        switch(*VAR_1) {
            case '&': FUNC_2(VAR_0, "&amp;"); break;
            case '<': FUNC_2(VAR_0, "&lt;"); break;
            case '>': FUNC_2(VAR_0, "&gt;"); break;
            case '"': FUNC_2(VAR_0, "&quot;"); break;
            case '/': FUNC_2(VAR_0, "&#x2F;"); break;
            case '\'': FUNC_2(VAR_0, "&#x27;"); break;
            default: {
                FUNC_0(VAR_0, 1);
                VAR_0->buffer[VAR_0->len++] = *VAR_1;
            }
        }
        VAR_1++;
    }

    FUNC_1(VAR_0);
}
