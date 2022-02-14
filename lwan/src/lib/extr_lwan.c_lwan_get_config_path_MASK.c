
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,size_t,char*,char*) ;
 char* FUNC_3 (char*,char) ;

const char *FUNC_4(char *VAR_1, size_t VAR_2)
{
    char VAR_3[VAR_0];

    if (FUNC_1(FUNC_0(), VAR_3, sizeof(VAR_3)) < 0)
        goto out;

    char *VAR_4 = FUNC_3(VAR_3, '/');
    if (!VAR_4)
        goto out;
    int VAR_5 = FUNC_2(VAR_1, VAR_2, "%s.conf", VAR_4 + 1);
    if (VAR_5 < 0 || VAR_5 >= (int)VAR_2)
        goto out;

    return VAR_1;

out:
    return "lwan.conf";
}
