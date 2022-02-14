
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lexret {int function; int proto; } ;
struct MacroDesc {scalar_t__ isBool; int fn; int arguments; int * alias; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static int FUNC_1(struct MacroDesc* VAR_3, const char* VAR_4, struct lexret* VAR_5, unsigned VAR_6)
{
    struct MacroDesc* VAR_7;

    for (VAR_7 = VAR_3; VAR_7->name && VAR_6 != 0; VAR_7++, VAR_6--)
    {
        if (FUNC_0(VAR_7->name, VAR_4) == 0 || (VAR_7->alias != ((void*)0) && FUNC_0(VAR_7->alias, VAR_4) == 0))
        {
            VAR_5->proto = VAR_7->arguments;
            VAR_5->function = VAR_7->fn;
            return VAR_7->isBool ? VAR_0 : VAR_2;
        }
    }
    return VAR_1;
}
