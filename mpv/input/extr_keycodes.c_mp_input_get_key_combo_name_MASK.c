
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* start; int member_0; } ;
typedef TYPE_1__ bstr ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int const) ;

char *FUNC_3(const int *VAR_0, int VAR_1)
{
    bstr VAR_2 = {0};
    while (VAR_1 > 0) {
        FUNC_2(&VAR_2, *VAR_0);
        if (--VAR_1 && *++VAR_0)
            FUNC_1(((void*)0), &VAR_2, FUNC_0("-"));
        else
            break;
    }
    return VAR_2.start;
}
