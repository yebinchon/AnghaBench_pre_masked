
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char const*,struct stat*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

int FUNC_5(const char *VAR_2) {
    struct stat VAR_3;

    char VAR_4;
    const char *VAR_5 = VAR_2;
    while((VAR_4 = *VAR_5++)) {
        if(!( FUNC_2(VAR_4) || FUNC_1(VAR_4) )) {
            FUNC_0("invalid character in path '%s'", VAR_2);
            return -1;
        }
    }

    if(FUNC_4(VAR_2, "\\") && !FUNC_4(VAR_2, "\\x")) {
        FUNC_0("invalid escape sequence in path '%s'", VAR_2);
        return 1;
    }

    if(FUNC_4(VAR_2, "/../")) {
        FUNC_0("invalid parent path sequence detected in '%s'", VAR_2);
        return 1;
    }

    if(VAR_2[0] != '/') {
        FUNC_0("only absolute path names are supported - invalid path '%s'", VAR_2);
        return -1;
    }

    if (FUNC_3(VAR_2, &VAR_3) == -1) {
        FUNC_0("cannot stat() path '%s'", VAR_2);
        return -1;
    }

    if((VAR_3.st_mode & VAR_1) != VAR_0) {
        FUNC_0("path '%s' is not a directory", VAR_2);
        return -1;
    }

    return 0;
}
