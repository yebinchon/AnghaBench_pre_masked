
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char token; int column; scalar_t__ pos; scalar_t__ line; } ;
struct TYPE_5__ {char* fmt; int column; scalar_t__ pos; TYPE_1__ token; scalar_t__ line; TYPE_1__ next_token; TYPE_1__ prev_token; } ;
typedef TYPE_2__ scanner_t ;



__attribute__((used)) static void FUNC_0(scanner_t *VAR_0)
{
    const char *VAR_1;
    VAR_0->prev_token = VAR_0->token;

    if(VAR_0->next_token.line) {
        VAR_0->token = VAR_0->next_token;
        VAR_0->next_token.line = 0;
        return;
    }

    VAR_1 = VAR_0->fmt;
    VAR_0->column++;
    VAR_0->pos++;


    while(*VAR_1 == ' ' || *VAR_1 == '\t' || *VAR_1 == '\n' || *VAR_1 == ',' || *VAR_1 == ':') {
        if(*VAR_1 == '\n') {
            VAR_0->line++;
            VAR_0->column = 1;
        }
        else
            VAR_0->column++;

        VAR_0->pos++;
        VAR_1++;
    }

    VAR_0->token.token = *VAR_1;
    VAR_0->token.line = VAR_0->line;
    VAR_0->token.column = VAR_0->column;
    VAR_0->token.pos = VAR_0->pos;

    VAR_1++;
    VAR_0->fmt = VAR_1;
}
