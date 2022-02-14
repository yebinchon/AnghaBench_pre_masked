
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 char* FUNC_2 (char*,char*,scalar_t__,char*) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(char **VAR_1, char *VAR_2)
{
    if (FUNC_1(VAR_2, VAR_0) == FUNC_0(VAR_2)) {
        *VAR_1 = FUNC_3(*VAR_1, VAR_2);
    } else {

        *VAR_1 = FUNC_2(*VAR_1, "%%%zd%%%s", FUNC_0(VAR_2), VAR_2);
    }
}
