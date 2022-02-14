
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ) ;
 char VAR_0 ;
 scalar_t__ FUNC_2 (char*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(char *VAR_2)
{
    char *VAR_3;
    int VAR_4, VAR_5 = 1;

    for ( ; ; ) {
        VAR_4 = 0;
        for (VAR_3 = VAR_2; *VAR_3 != '\0' && *VAR_3 != VAR_0; VAR_3++)
            continue;
        if (*VAR_3 == '\0')
            VAR_4 = 1;
        *VAR_3 = '\0';
        if (FUNC_2(VAR_2, -1) < 0) {
            FUNC_0(VAR_1, "Can't load %s into RNG\n", VAR_2);
            FUNC_1(VAR_1);
            VAR_5 = 0;
        }
        if (VAR_4)
            break;
        VAR_2 = VAR_3 + 1;
        if (*VAR_2 == '\0')
            break;
    }
    return VAR_5;
}
