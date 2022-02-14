
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {double const st_mode; double const st_size; double const st_atime; double const st_mtime; double const st_ctime; } ;
typedef int js_State ;


 int FUNC_0 (double const) ;
 int FUNC_1 (double const) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int,char*) ;
 char* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char const**,double const*) ;
 int FUNC_8 (int ,int ,int *) ;
 scalar_t__ FUNC_9 (char const*,struct stat*) ;

__attribute__((used)) static void FUNC_10(js_State *VAR_0)
{
    const char *VAR_1 = FUNC_5(VAR_0, 1);

    struct stat VAR_2;
    if (FUNC_9(VAR_1, &VAR_2) != 0) {
        FUNC_6(VAR_0, "Cannot stat path");
        return;
    }

    FUNC_8(FUNC_2(VAR_0), 0, ((void*)0));

    const char * VAR_3[] = {
        "mode", "size",
        "atime", "mtime", "ctime", ((void*)0)
    };
    const double VAR_4[] = {
        VAR_2.st_mode,
        VAR_2.st_size,
        VAR_2.st_atime,
        VAR_2.st_mtime,
        VAR_2.st_ctime
    };

    FUNC_7(VAR_0, VAR_3, VAR_4);


    FUNC_3(VAR_0, FUNC_1(VAR_2.st_mode));
    FUNC_4(VAR_0, -2, "is_file");

    FUNC_3(VAR_0, FUNC_0(VAR_2.st_mode));
    FUNC_4(VAR_0, -2, "is_dir");
}
