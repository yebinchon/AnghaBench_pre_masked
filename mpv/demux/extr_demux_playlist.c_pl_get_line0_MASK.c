
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl_parser {int error; TYPE_1__* s; int utf16; int buffer; } ;
struct TYPE_2__ {int eof; } ;


 char* FUNC_0 (TYPE_1__*,int ,int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *FUNC_2(struct pl_parser *VAR_0)
{
    char *VAR_1 = FUNC_0(VAR_0->s, VAR_0->buffer, sizeof(VAR_0->buffer), VAR_0->utf16);
    if (VAR_1) {
        int VAR_2 = FUNC_1(VAR_1);
        if (VAR_2 > 0 && VAR_1[VAR_2 - 1] == '\n')
            VAR_1[VAR_2 - 1] = '\0';
    } else {
        VAR_0->error |= !VAR_0->s->eof;
    }
    return VAR_1;
}
