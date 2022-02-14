
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {unsigned int const st_mode; unsigned int const st_size; unsigned int const st_atime; unsigned int const st_mtime; unsigned int const st_ctime; } ;
typedef int lua_State ;


 int FUNC_0 (unsigned int const) ;
 int FUNC_1 (unsigned int const) ;
 char* FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,unsigned int const) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int,char const*) ;
 scalar_t__ FUNC_9 (char const*,struct stat*) ;

__attribute__((used)) static int FUNC_10(lua_State *VAR_0)
{
    const char *VAR_1 = FUNC_2(VAR_0, 1);

    struct stat VAR_2;
    if (FUNC_9(VAR_1, &VAR_2) != 0) {
        FUNC_6(VAR_0);
        FUNC_7(VAR_0, "error");
        return 2;
    }

    FUNC_3(VAR_0);

    const char * VAR_3[] = {
        "mode", "size",
        "atime", "mtime", "ctime", ((void*)0)
    };
    const unsigned int VAR_4[] = {
        VAR_2.st_mode,
        VAR_2.st_size,
        VAR_2.st_atime,
        VAR_2.st_mtime,
        VAR_2.st_ctime
    };


    for (int VAR_5 = 0; VAR_3[VAR_5]; VAR_5++) {
        FUNC_5(VAR_0, VAR_4[VAR_5]);
        FUNC_8(VAR_0, -2, VAR_3[VAR_5]);
    }


    FUNC_4(VAR_0, FUNC_1(VAR_2.st_mode));
    FUNC_8(VAR_0, -2, "is_file");

    FUNC_4(VAR_0, FUNC_0(VAR_2.st_mode));
    FUNC_8(VAR_0, -2, "is_dir");


    return 1;
}
