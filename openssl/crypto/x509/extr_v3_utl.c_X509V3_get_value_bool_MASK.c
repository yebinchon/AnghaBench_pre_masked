
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* value; } ;
typedef TYPE_1__ CONF_VALUE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

int FUNC_3(const CONF_VALUE *VAR_2, int *VAR_3)
{
    const char *VAR_4;

    if ((VAR_4 = VAR_2->value) == ((void*)0))
        goto err;
    if (FUNC_2(VAR_4, "TRUE") == 0
        || FUNC_2(VAR_4, "true") == 0
        || FUNC_2(VAR_4, "Y") == 0
        || FUNC_2(VAR_4, "y") == 0
        || FUNC_2(VAR_4, "YES") == 0
        || FUNC_2(VAR_4, "yes") == 0) {
        *VAR_3 = 0xff;
        return 1;
    }
    if (FUNC_2(VAR_4, "FALSE") == 0
        || FUNC_2(VAR_4, "false") == 0
        || FUNC_2(VAR_4, "N") == 0
        || FUNC_2(VAR_4, "n") == 0
        || FUNC_2(VAR_4, "NO") == 0
        || FUNC_2(VAR_4, "no") == 0) {
        *VAR_3 = 0;
        return 1;
    }
 err:
    FUNC_1(VAR_0,
              VAR_1);
    FUNC_0(VAR_2);
    return 0;
}
