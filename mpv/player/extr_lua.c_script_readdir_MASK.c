
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct dirent {char* d_name; } ;
typedef int lua_State ;
typedef int DIR ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,char*,char const**) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int) ;
 int * FUNC_10 (char const*) ;
 struct dirent* FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (char*,struct stat*) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 char* FUNC_14 (char*,char*,char const*,char*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static int FUNC_16(lua_State *VAR_0)
{

    const char *VAR_1[] = {"all", "files", "dirs", "normal", ((void*)0)};
    const char *VAR_2 = FUNC_4(VAR_0, 1);
    int VAR_3 = FUNC_3(VAR_0, 2, "normal", VAR_1);
    DIR *VAR_4 = FUNC_10(VAR_2);
    if (!VAR_4) {
        FUNC_7(VAR_0);
        FUNC_8(VAR_0, "error");
        return 2;
    }
    FUNC_5(VAR_0);
    char *VAR_5 = ((void*)0);
    struct dirent *VAR_6;
    int VAR_7 = 0;
    while ((VAR_6 = FUNC_11(VAR_4))) {
        char *VAR_8 = VAR_6->d_name;
        if (VAR_3) {
            if (FUNC_13(VAR_8, ".") == 0 || FUNC_13(VAR_8, "..") == 0)
                continue;
            if (VAR_5)
                VAR_5[0] = '\0';
            VAR_5 = FUNC_14(VAR_5, "%s/%s", VAR_2, VAR_8);
            struct stat VAR_9;
            if (FUNC_12(VAR_5, &VAR_9))
                continue;
            if (!(((VAR_3 & 1) && FUNC_1(VAR_9.st_mode)) ||
                  ((VAR_3 & 2) && FUNC_0(VAR_9.st_mode))))
                continue;
        }
        FUNC_6(VAR_0, ++VAR_7);
        FUNC_8(VAR_0, VAR_8);
        FUNC_9(VAR_0, -3);
    }
    FUNC_2(VAR_4);
    FUNC_15(VAR_5);
    return 1;
}
