
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int error; scalar_t__ token_len; int token; int * line; int * cur_section; } ;
struct field {int dummy; } ;
typedef struct field* PVOID ;


 int VAR_0 ;
 struct field* FUNC_0 (int *,int ) ;
 struct field* FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static
struct field*
FUNC_3(
    struct parser *VAR_2,
    int VAR_3)
{
    PVOID VAR_4;

    if (!VAR_2->line)
    {
        if (VAR_2->cur_section == ((void*)0))
        {
            VAR_2->error = VAR_1;
            return ((void*)0);
        }

        VAR_2->line = FUNC_2(VAR_2->cur_section);
        if (VAR_2->line == ((void*)0))
            goto error;
    }
    else
    {

    }

    if (VAR_3)
    {
        VAR_4 = FUNC_1(VAR_2->line, VAR_2->token);
    }
    else
    {
        VAR_4 = FUNC_0(VAR_2->line, VAR_2->token);
    }

    if (VAR_4 != ((void*)0))
    {
        VAR_2->token_len = 0;
        return VAR_4;
    }

error:
    VAR_2->error = VAR_0;
    return ((void*)0);
}
