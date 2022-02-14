
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct dirent {char* d_name; } ;
typedef int js_State ;
typedef int DIR ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (void*,int *) ;
 int FUNC_3 (int *,int,char*,char const**,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int,int ) ;
 char* FUNC_9 (int *,int) ;
 int * FUNC_10 (char const*) ;
 int FUNC_11 (int *,char*) ;
 struct dirent* FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,int *) ;
 scalar_t__ FUNC_14 (char*,struct stat*) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 char* FUNC_16 (char*,char*,char const*,char*) ;
 char* FUNC_17 (void*,char*) ;

__attribute__((used)) static void FUNC_18(js_State *VAR_0, void *VAR_1)
{

    const char *VAR_2[] = {"all", "files", "dirs", "normal", ((void*)0)};
    const char *VAR_3 = FUNC_5(VAR_0, 1) ? "." : FUNC_9(VAR_0, 1);
    int VAR_4 = FUNC_3(VAR_0, 2, "normal", VAR_2, "listing filter");

    DIR *VAR_5 = FUNC_10(VAR_3);
    if (!VAR_5) {
        FUNC_11(VAR_0, "Cannot open dir");
        return;
    }
    FUNC_2(VAR_1, VAR_5);
    FUNC_13(FUNC_4(VAR_0), 0, ((void*)0));
    FUNC_6(VAR_0);
    char *VAR_6 = FUNC_17(VAR_1, "");
    struct dirent *VAR_7;
    int VAR_8 = 0;
    while ((VAR_7 = FUNC_12(VAR_5))) {
        char *VAR_9 = VAR_7->d_name;
        if (VAR_4) {
            if (FUNC_15(VAR_9, ".") == 0 || FUNC_15(VAR_9, "..") == 0)
                continue;
            if (VAR_6)
                VAR_6[0] = '\0';
            VAR_6 = FUNC_16(VAR_6, "%s/%s", VAR_3, VAR_9);
            struct stat VAR_10;
            if (FUNC_14(VAR_6, &VAR_10))
                continue;
            if (!(((VAR_4 & 1) && FUNC_1(VAR_10.st_mode)) ||
                  ((VAR_4 & 2) && FUNC_0(VAR_10.st_mode))))
            {
                continue;
            }
        }
        FUNC_7(VAR_0, VAR_9);
        FUNC_8(VAR_0, -2, VAR_8++);
    }
}
