
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct section {unsigned int nb_lines; struct line* lines; } ;
struct line {int key_field; } ;
struct inf_file {int nb_sections; TYPE_1__* fields; struct section** sections; } ;
typedef int WCHAR ;
struct TYPE_2__ {int text; } ;


 int FUNC_0 (int const*,int ) ;

__attribute__((used)) static struct line *FUNC_1( struct inf_file *VAR_0, int VAR_1, const WCHAR *VAR_2 )
{
    struct section *VAR_3;
    struct line *VAR_4;
    unsigned int VAR_5;

    if (VAR_1 < 0 || VAR_1 >= VAR_0->nb_sections) return ((void*)0);
    VAR_3 = VAR_0->sections[VAR_1];
    for (VAR_5 = 0, VAR_4 = VAR_3->lines; VAR_5 < VAR_3->nb_lines; VAR_5++, VAR_4++)
    {
        if (VAR_4->key_field == -1) continue;
        if (!FUNC_0( VAR_2, VAR_0->fields[VAR_4->key_field].text )) return VAR_4;
    }
    return ((void*)0);
}
