
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parser {int cur_section; int error; scalar_t__ token_len; TYPE_1__* line; int file; int token; } ;
struct field {int dummy; } ;
typedef int WCHAR ;
struct TYPE_2__ {int first_field; int key_field; int nb_fields; } ;
typedef int BOOL ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct field* FUNC_1 (int ,int *) ;
 TYPE_1__* FUNC_2 (int ,int) ;
 int * FUNC_3 (int ,int ) ;

__attribute__((used)) static struct field *FUNC_4( struct parser *VAR_2, BOOL VAR_3 )
{
    struct field *VAR_4;
    WCHAR *VAR_5;

    if (!VAR_2->line)
    {
        if (VAR_2->cur_section == -1)
        {
            VAR_2->error = VAR_0;
            return ((void*)0);
        }
        if (!(VAR_2->line = FUNC_2( VAR_2->file, VAR_2->cur_section ))) goto error;
    }
    else FUNC_0(!VAR_3);

    VAR_5 = FUNC_3( VAR_2->file, VAR_2->token );
    if ((VAR_4 = FUNC_1( VAR_2->file, VAR_5 )))
    {
        if (!VAR_3) VAR_2->line->nb_fields++;
        else
        {

            VAR_2->line->key_field = VAR_2->line->first_field;
            VAR_2->line->first_field++;
        }
        VAR_2->token_len = 0;
        return VAR_4;
    }
 error:
    VAR_2->error = VAR_1;
    return ((void*)0);
}
