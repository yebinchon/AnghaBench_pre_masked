
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int offset; scalar_t__ type; scalar_t__ name; } ;
typedef TYPE_1__ AVOption ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (void*,TYPE_1__ const*) ;
 int FUNC_1 (char*,char**,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, char **VAR_2)
{
    if (!*VAR_2 || (*VAR_2)[0] != '@' || !VAR_1)
        return;

    char *VAR_3 = ((void*)0);
    int VAR_4 = FUNC_1(*VAR_2 + 1, &VAR_3, 10);
    if (!VAR_3 || *VAR_3)
        return;

    const AVOption *VAR_5 = ((void*)0);
    int VAR_6 = -1;
    while (1) {
        VAR_5 = FUNC_0(VAR_1, VAR_5);
        if (!VAR_5)
            return;

        if (VAR_5->offset != VAR_6 && VAR_5->type != VAR_0)
            VAR_4--;
        if (VAR_4 < 0) {
            *VAR_2 = (char *)VAR_5->name;
            return;
        }
        VAR_6 = VAR_5->offset;
    }
}
