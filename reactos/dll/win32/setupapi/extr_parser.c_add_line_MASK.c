
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section {int nb_lines; int alloc_lines; struct line* lines; } ;
struct line {int key_field; scalar_t__ nb_fields; int first_field; } ;
struct inf_file {int nb_sections; int nb_fields; struct section** sections; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 struct section* FUNC_2 (int ,int ,struct section*,int) ;

__attribute__((used)) static struct line *FUNC_3( struct inf_file *VAR_0, int VAR_1 )
{
    struct section *VAR_2;
    struct line *VAR_3;

    FUNC_0( VAR_1 >= 0 && VAR_1 < VAR_0->nb_sections );

    VAR_2 = VAR_0->sections[VAR_1];
    if (VAR_2->nb_lines == VAR_2->alloc_lines)
    {
        int VAR_4 = sizeof(*VAR_2) - sizeof(VAR_2->lines) + 2*VAR_2->alloc_lines*sizeof(*VAR_3);
        if (!(VAR_2 = FUNC_2( FUNC_1(), 0, VAR_2, VAR_4 ))) return ((void*)0);
        VAR_2->alloc_lines *= 2;
        VAR_0->sections[VAR_1] = VAR_2;
    }
    VAR_3 = &VAR_2->lines[VAR_2->nb_lines++];
    VAR_3->first_field = VAR_0->nb_fields;
    VAR_3->nb_fields = 0;
    VAR_3->key_field = -1;
    return VAR_3;
}
