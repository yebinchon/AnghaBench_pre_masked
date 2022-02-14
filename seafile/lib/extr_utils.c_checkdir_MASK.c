
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_mode; } ;
typedef TYPE_1__ SeafStat ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,TYPE_1__*) ;
 int FUNC_4 (char*) ;

int
FUNC_5 (const char *VAR_0)
{
    SeafStat VAR_1;
    if ((FUNC_3(VAR_0, &VAR_1) < 0) || !FUNC_0(VAR_1.st_mode))
        return -1;
    return 0;

}
