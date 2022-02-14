
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5 (const char *VAR_1)
{
    char *VAR_2 = FUNC_3 (VAR_1);
    if (!VAR_2)
        return -1;

    if (FUNC_0 (VAR_2, VAR_0)) {
        FUNC_1 (VAR_2);
        return 0;
    }

    if (FUNC_2 (VAR_2, 0777) < 0) {
        FUNC_4 ("Failed to create object parent path: %s.\n", VAR_2);
        FUNC_1 (VAR_2);
        return -1;
    }

    FUNC_1 (VAR_2);
    return 0;
}
