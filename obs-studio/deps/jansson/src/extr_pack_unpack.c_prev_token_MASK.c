
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prev_token; int token; int next_token; } ;
typedef TYPE_1__ scanner_t ;



__attribute__((used)) static void FUNC_0(scanner_t *VAR_0)
{
    VAR_0->next_token = VAR_0->token;
    VAR_0->token = VAR_0->prev_token;
}
