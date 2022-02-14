
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {int key_field; int nb_fields; int first_field; } ;
struct inf_file {struct field* fields; } ;
struct field {int dummy; } ;


 struct line* FUNC_0 (struct inf_file*,int,int) ;

__attribute__((used)) static struct field *FUNC_1( struct inf_file *VAR_0, int VAR_1, int VAR_2,
                                int VAR_3 )
{
    struct line *VAR_4 = FUNC_0( VAR_0, VAR_1, VAR_2 );

    if (!VAR_4) return ((void*)0);
    if (!VAR_3)
    {
        if (VAR_4->key_field == -1) return ((void*)0);
        return &VAR_0->fields[VAR_4->key_field];
    }
    VAR_3--;
    if (VAR_3 >= VAR_4->nb_fields) return ((void*)0);
    return &VAR_0->fields[VAR_4->first_field + VAR_3];
}
