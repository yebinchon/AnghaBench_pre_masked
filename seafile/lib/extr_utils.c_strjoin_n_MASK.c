
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* str; } ;
typedef TYPE_1__ GString ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char const*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (char*) ;

char* FUNC_3 (const char *VAR_1, int VAR_2, char **VAR_3)
{
    GString *VAR_4;
    int VAR_5;
    char *VAR_6;

    if (VAR_2 == 0)
        return ((void*)0);

    VAR_4 = FUNC_2 (VAR_3[0]);
    for (VAR_5 = 1; VAR_5 < VAR_2; ++VAR_5) {
        FUNC_0 (VAR_4, VAR_1);
        FUNC_0 (VAR_4, VAR_3[VAR_5]);
    }

    VAR_6 = VAR_4->str;
    FUNC_1 (VAR_4, VAR_0);
    return VAR_6;
}
