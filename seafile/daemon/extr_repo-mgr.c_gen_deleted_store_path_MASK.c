
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int deleted_store; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 char* FUNC_1 (int ,char const*,char const*,int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char const*,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static char *
FUNC_4 (const char *VAR_2, const char *VAR_3)
{
    int VAR_4 = 1;
    char *VAR_5 = ((void*)0);
    char *VAR_6 = ((void*)0);

    VAR_5 = FUNC_1 (VAR_1->deleted_store, VAR_2, VAR_3, ((void*)0));
    while (FUNC_0(VAR_5, VAR_0) == 0 && VAR_4 < 10) {
        FUNC_2 (VAR_5);
        VAR_6 = FUNC_3 ("%s(%d)", VAR_3, VAR_4);
        VAR_5 = FUNC_1 (VAR_1->deleted_store, VAR_2, VAR_6, ((void*)0));
        FUNC_2 (VAR_6);
        ++VAR_4;
    }

    if (VAR_4 == 10) {
        FUNC_2 (VAR_5);
        return ((void*)0);
    }

    return VAR_5;
}
