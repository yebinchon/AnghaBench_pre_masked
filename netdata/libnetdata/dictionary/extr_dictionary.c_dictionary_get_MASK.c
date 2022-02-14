
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* value; } ;
typedef TYPE_1__ NAME_VALUE ;
typedef int DICTIONARY ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 TYPE_1__* FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

void *FUNC_5(DICTIONARY *VAR_1, const char *VAR_2) {
    FUNC_0(VAR_0, "GET dictionary entry with name '%s'.", VAR_2);

    FUNC_2(VAR_1);
    NAME_VALUE *VAR_3 = FUNC_1(VAR_1, VAR_2, 0);
    FUNC_3(VAR_1);

    if(FUNC_4(!VAR_3)) {
        FUNC_0(VAR_0, "Not found dictionary entry with name '%s'.", VAR_2);
        return ((void*)0);
    }

    FUNC_0(VAR_0, "Found dictionary entry with name '%s'.", VAR_2);
    return VAR_3->value;
}
