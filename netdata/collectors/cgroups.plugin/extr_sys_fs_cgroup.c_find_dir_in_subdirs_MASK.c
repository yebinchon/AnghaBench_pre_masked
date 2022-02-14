
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {scalar_t__ d_type; char* d_name; } ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,char*,char const*,char const*) ;
 int VAR_3 ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (size_t) ;
 int * FUNC_6 (char const*) ;
 struct dirent* FUNC_7 (int *) ;
 int FUNC_8 (int ,char const*) ;
 int FUNC_9 (char*,int,char*,char const*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char const*) ;
 size_t FUNC_12 (char const*) ;

__attribute__((used)) static inline int FUNC_13(const char *VAR_4, const char *VAR_5, void (*VAR_6)(const char *)) {
    if(!VAR_5) VAR_5 = VAR_4;
    FUNC_2(VAR_1, "searching for directories in '%s' (base '%s')", VAR_5?VAR_5:"", VAR_4);

    size_t VAR_7 = FUNC_12(VAR_5), VAR_8 = FUNC_12(VAR_4);

    int VAR_9 = -1;
    int VAR_10 = -1;

    const char *VAR_11 = &VAR_5[VAR_8];
    if(!*VAR_11) VAR_11 = "/";

    DIR *VAR_12 = FUNC_6(VAR_5);
    if(!VAR_12) {
        FUNC_3("CGROUP: cannot read directory '%s'", VAR_4);
        return VAR_9;
    }
    VAR_9 = 1;

    VAR_6(VAR_11);

    struct dirent *VAR_13 = ((void*)0);
    while((VAR_13 = FUNC_7(VAR_12))) {
        if(VAR_13->d_type == VAR_0
            && (
                (VAR_13->d_name[0] == '.' && VAR_13->d_name[1] == '\0')
                || (VAR_13->d_name[0] == '.' && VAR_13->d_name[1] == '.' && VAR_13->d_name[2] == '\0')
                ))
            continue;

        if(VAR_13->d_type == VAR_0) {
            if(VAR_10 == -1) {
                const char *VAR_14 = VAR_11;
                if(*VAR_14 == '\0') VAR_14 = "/";


                int VAR_15 = FUNC_8(VAR_3, VAR_14);




                char VAR_16[VAR_2 + 1];
                FUNC_9(VAR_16, VAR_2, "search for cgroups under %s", VAR_14);
                VAR_16[VAR_2] = '\0';
                VAR_10 = FUNC_1("plugin:cgroups", VAR_16, VAR_15);
            }

            if(VAR_10) {
                char *VAR_17 = FUNC_5(VAR_7 + FUNC_12(VAR_13->d_name) + 2);
                FUNC_11(VAR_17, VAR_5);
                FUNC_10(VAR_17, "/");
                FUNC_10(VAR_17, VAR_13->d_name);
                int VAR_18 = FUNC_13(VAR_4, VAR_17, VAR_6);
                if(VAR_18 > 0) VAR_9 += VAR_18;
                FUNC_4(VAR_17);
            }
        }
    }

    FUNC_0(VAR_12);
    return VAR_9;
}
