
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static const char *FUNC_3(void)
{
    static char VAR_0[11] = "0000000000";
    static int VAR_1 = 0;
    char *VAR_2;

    if (VAR_0[VAR_1] == 'Z')
    {
        VAR_1++;
        if (VAR_1 > 9)
            FUNC_0("too many index names\n");
    }

    VAR_0[VAR_1]++;

    VAR_2 = FUNC_2(sizeof(VAR_0));
    FUNC_1(VAR_2, VAR_0);
    return VAR_2;
}
