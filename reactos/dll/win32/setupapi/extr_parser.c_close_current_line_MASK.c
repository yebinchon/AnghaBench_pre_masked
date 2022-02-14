
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {struct line* line; } ;
struct line {int nb_fields; int key_field; int first_field; } ;



__attribute__((used)) static void FUNC_0( struct parser *VAR_0 )
{
    struct line *VAR_1 = VAR_0->line;

    if (VAR_1)
    {

        if (VAR_1->nb_fields == 1 && VAR_1->key_field == -1)
            VAR_1->key_field = VAR_1->first_field;
    }
    VAR_0->line = ((void*)0);
}
