
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {scalar_t__ token_len; int * cur_section; void* error; int token; int file; } ;
typedef int * PVOID ;
typedef int * PINFCACHESECTION ;


 void* VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static
PVOID
FUNC_2(struct parser *VAR_2)
{
    PINFCACHESECTION VAR_3;

    if (VAR_2->token_len > VAR_1)
    {
        VAR_2->error = VAR_0;
        return ((void*)0);
    }

    VAR_3 = FUNC_1(VAR_2->file, VAR_2->token);
    if (VAR_3 == ((void*)0))
    {

        VAR_3 = FUNC_0(VAR_2->file, VAR_2->token);
        if (VAR_3 == ((void*)0))
        {
            VAR_2->error = VAR_0;
            return ((void*)0);
        }
    }

    VAR_2->token_len = 0;
    VAR_2->cur_section = VAR_3;

    return (PVOID)VAR_3;
}
