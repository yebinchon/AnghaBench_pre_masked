
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct dirent {int d_name; } ;
typedef int DIR ;


 int FUNC_0 (void*,char**,int,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 char* FUNC_3 (void*,char*,int ) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (char**,int,int,int ) ;
 struct dirent* FUNC_6 (int *) ;
 int FUNC_7 (char*,struct stat*) ;

__attribute__((used)) static char **FUNC_8(void *VAR_1, char *VAR_2)
{
    char **VAR_3 = ((void*)0);
    int VAR_4 = 0;
    DIR *VAR_5 = FUNC_4(VAR_2);
    if (!VAR_5)
        return ((void*)0);
    struct dirent *VAR_6;
    while ((VAR_6 = FUNC_6(VAR_5))) {
        char *VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_6->d_name);
        struct stat VAR_8;
        if (!FUNC_7(VAR_7, &VAR_8) && FUNC_1(VAR_8.st_mode))
            FUNC_0(VAR_1, VAR_3, VAR_4, VAR_7);
    }
    FUNC_2(VAR_5);
    if (VAR_3)
        FUNC_5(VAR_3, VAR_4, sizeof(char *), VAR_0);
    FUNC_0(VAR_1, VAR_3, VAR_4, ((void*)0));
    return VAR_3;
}
