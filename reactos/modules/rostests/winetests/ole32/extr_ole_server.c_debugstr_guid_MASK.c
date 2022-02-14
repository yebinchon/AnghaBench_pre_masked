
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; int guid; } ;
typedef int GUID ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int const*,int ) ;
 TYPE_1__* VAR_0 ;
 char const* FUNC_2 (int const*) ;

__attribute__((used)) static const char *FUNC_3(const GUID *VAR_1)
{
    int VAR_2;

    if (!VAR_1) return "(null)";

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
    {
        if (FUNC_1(VAR_1, VAR_0[VAR_2].guid))
            return VAR_0[VAR_2].name;
    }

    return FUNC_2(VAR_1);
}
