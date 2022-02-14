
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; char* start; } ;
typedef TYPE_1__ bstr ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__,char*) ;
 int FUNC_2 (TYPE_1__,int ,int) ;
 char* FUNC_3 (void*,char*,int ,char*) ;

__attribute__((used)) static char *FUNC_4(void *VAR_0, bstr VAR_1)
{
    if (VAR_1.len < 4 || VAR_1.start[VAR_1.len - 4] != '.')
        return ((void*)0);
    char *VAR_2 = FUNC_1(VAR_1, "IDX") ? "SUB" : "sub";
    return FUNC_3(VAR_0, "%.*s.%s", FUNC_0(FUNC_2(VAR_1, 0, -4)), VAR_2);
}
