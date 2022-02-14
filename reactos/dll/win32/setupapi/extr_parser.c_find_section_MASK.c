
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inf_file {unsigned int nb_sections; TYPE_1__** sections; } ;
typedef int WCHAR ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int const*,int ) ;

__attribute__((used)) static int FUNC_1( const struct inf_file *VAR_0, const WCHAR *VAR_1 )
{
    unsigned int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->nb_sections; VAR_2++)
        if (!FUNC_0( VAR_1, VAR_0->sections[VAR_2]->name )) return VAR_2;
    return -1;
}
