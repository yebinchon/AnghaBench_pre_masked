
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,char*,char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char**) ;
 char* VAR_5 ;
 int FUNC_3 (char*,int ,char*,char*) ;
 int FUNC_4 (char*,struct stat*) ;

int FUNC_5() {
    if(!VAR_5)
        VAR_5 = "";

    if(!*VAR_5)
        return 0;

    char VAR_6[VAR_1 + 1];
    char *VAR_7 = VAR_5;
    char *VAR_8 = "unknown reason";
    VAR_4 = 0;

    struct stat VAR_9;
    if (FUNC_4(VAR_7, &VAR_9) == -1) {
        VAR_8 = "failed to stat()";
        goto failed;
    }

    if((VAR_9.st_mode & VAR_3) != VAR_2) {
        VAR_4 = VAR_0;
        VAR_8 = "is not a directory";
        goto failed;
    }

    VAR_7 = VAR_6;
    FUNC_3(VAR_7, VAR_1, "%s/proc", VAR_5);
    if(FUNC_2(VAR_7, &VAR_8) == -1)
        goto failed;

    FUNC_3(VAR_7, VAR_1, "%s/sys", VAR_5);
    if(FUNC_2(VAR_7, &VAR_8) == -1)
        goto failed;

    if(VAR_5 && *VAR_5)
        FUNC_1("Using host prefix directory '%s'", VAR_5);

    return 0;

failed:
    FUNC_0("Ignoring host prefix '%s': path '%s' %s", VAR_5, VAR_7, VAR_8);
    VAR_5 = "";
    return -1;
}
