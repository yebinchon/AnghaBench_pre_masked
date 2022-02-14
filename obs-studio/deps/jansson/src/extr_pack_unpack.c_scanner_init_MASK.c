
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int token_t ;
struct TYPE_3__ {size_t flags; char const* fmt; char const* start; int line; scalar_t__ pos; scalar_t__ column; int next_token; int token; int prev_token; int * error; } ;
typedef TYPE_1__ scanner_t ;
typedef int json_error_t ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(scanner_t *VAR_0, json_error_t *VAR_1,
                         size_t VAR_2, const char *VAR_3)
{
    VAR_0->error = VAR_1;
    VAR_0->flags = VAR_2;
    VAR_0->fmt = VAR_0->start = VAR_3;
    FUNC_0(&VAR_0->prev_token, 0, sizeof(token_t));
    FUNC_0(&VAR_0->token, 0, sizeof(token_t));
    FUNC_0(&VAR_0->next_token, 0, sizeof(token_t));
    VAR_0->line = 1;
    VAR_0->column = 0;
    VAR_0->pos = 0;
}
