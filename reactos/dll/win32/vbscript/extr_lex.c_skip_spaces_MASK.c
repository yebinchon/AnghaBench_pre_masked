
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; } ;
typedef TYPE_1__ parser_ctx_t ;



__attribute__((used)) static void FUNC_0(parser_ctx_t *VAR_0)
{
    while(*VAR_0->ptr == ' ' || *VAR_0->ptr == '\t')
        VAR_0->ptr++;
}
