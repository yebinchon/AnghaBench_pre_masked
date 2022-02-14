
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ section; int * name; } ;
typedef TYPE_1__ CONF_VALUE ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(const CONF_VALUE *VAR_0, const CONF_VALUE *VAR_1)
{
    int VAR_2;

    if (VAR_0->section != VAR_1->section) {
        VAR_2 = FUNC_0(VAR_0->section, VAR_1->section);
        if (VAR_2)
            return VAR_2;
    }

    if ((VAR_0->name != ((void*)0)) && (VAR_1->name != ((void*)0))) {
        VAR_2 = FUNC_0(VAR_0->name, VAR_1->name);
        return VAR_2;
    } else if (VAR_0->name == VAR_1->name)
        return 0;
    else
        return ((VAR_0->name == ((void*)0)) ? -1 : 1);
}
