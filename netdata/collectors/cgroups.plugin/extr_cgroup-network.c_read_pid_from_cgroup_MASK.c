
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {scalar_t__ d_type; char* d_name; } ;
typedef scalar_t__ pid_t ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char const*) ;
 int * FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,char*,char const*,char*) ;

pid_t FUNC_6(const char *VAR_2) {
    pid_t VAR_3 = FUNC_3(VAR_2);
    if (VAR_3 > 0) return VAR_3;

    DIR *VAR_4 = FUNC_2(VAR_2);
    if (!VAR_4) {
        FUNC_1("cannot read directory '%s'", VAR_2);
        return 0;
    }

    struct dirent *VAR_5 = ((void*)0);
    while ((VAR_5 = FUNC_4(VAR_4))) {
        if (VAR_5->d_type == VAR_0
            && (
                    (VAR_5->d_name[0] == '.' && VAR_5->d_name[1] == '\0')
                    || (VAR_5->d_name[0] == '.' && VAR_5->d_name[1] == '.' && VAR_5->d_name[2] == '\0')
            ))
            continue;

        if (VAR_5->d_type == VAR_0) {
            char VAR_6[VAR_1 + 1];
            FUNC_5(VAR_6, VAR_1, "%s/%s", VAR_2, VAR_5->d_name);
            VAR_3 = FUNC_6(VAR_6);
            if(VAR_3 > 0) break;
        }
    }
    FUNC_0(VAR_4);
    return VAR_3;
}
