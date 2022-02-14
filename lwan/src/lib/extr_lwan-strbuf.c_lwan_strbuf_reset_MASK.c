
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* static_buffer; char* buffer; } ;
struct lwan_strbuf {int flags; scalar_t__ used; TYPE_1__ value; } ;


 int VAR_0 ;

void FUNC_0(struct lwan_strbuf *VAR_1)
{
    if (VAR_1->flags & VAR_0) {
        VAR_1->value.static_buffer = "";
    } else {
        VAR_1->value.buffer[0] = '\0';
    }

    VAR_1->used = 0;
}
