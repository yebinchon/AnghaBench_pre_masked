
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {scalar_t__ d_type; char* d_name; } ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char const*,...) ;
 int FUNC_2 (char*,char const*,...) ;
 int * FUNC_3 (char const*) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,int ,char*,char const*,char*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*) ;

int FUNC_9(const char *VAR_2, const char *VAR_3) {
    DIR *VAR_4 = FUNC_3(VAR_2);
    if(!VAR_4) {
        FUNC_1("Cannot read %s directory to be deleted '%s'", VAR_3?VAR_3:"", VAR_2);
        return -1;
    }

    int VAR_5 = 0;
    struct dirent *VAR_6 = ((void*)0);
    while((VAR_6 = FUNC_4(VAR_4))) {
        if(VAR_6->d_type == VAR_0
           && (
                   (VAR_6->d_name[0] == '.' && VAR_6->d_name[1] == '\0')
                   || (VAR_6->d_name[0] == '.' && VAR_6->d_name[1] == '.' && VAR_6->d_name[2] == '\0')
           ))
            continue;

        char VAR_7[VAR_1 + 1];
        FUNC_6(VAR_7, VAR_1, "%s/%s", VAR_2, VAR_6->d_name);

        if(VAR_6->d_type == VAR_0) {
            int VAR_8 = FUNC_9(VAR_7, VAR_3);
            if(VAR_8 > 0) VAR_5 += VAR_8;
            continue;
        }

        FUNC_2("Deleting %s file '%s'", VAR_3?VAR_3:"", VAR_7);
        if(FUNC_7(FUNC_8(VAR_7) == -1))
            FUNC_1("Cannot delete %s file '%s'", VAR_3?VAR_3:"", VAR_7);
        else
            VAR_5++;
    }

    FUNC_2("Deleting empty directory '%s'", VAR_2);
    if(FUNC_7(FUNC_5(VAR_2) == -1))
        FUNC_1("Cannot delete empty directory '%s'", VAR_2);
    else
        VAR_5++;

    FUNC_0(VAR_4);

    return VAR_5;
}
