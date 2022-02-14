
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 size_t FUNC_3 (char*,char*,int) ;
 scalar_t__ FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static int
FUNC_6(struct dirent *VAR_1, const char *VAR_2)
{
    char VAR_3[512];

    if (FUNC_4 (VAR_3, "/proc/%s/exe", VAR_1->d_name) < 0) {
        return -1;
    }

    char VAR_4[VAR_0];

    ssize_t VAR_5 = FUNC_3(VAR_3, VAR_4, VAR_0);

    if (VAR_5 < 0)
        return -1;
    VAR_4[VAR_5] = '\0';


    char *VAR_6 = FUNC_2(VAR_4);
    int VAR_7 = FUNC_5(VAR_6, VAR_2);
    FUNC_1(VAR_6);

    if (VAR_7 == 0)
        return FUNC_0(VAR_1->d_name);
    else
        return -1;
}
