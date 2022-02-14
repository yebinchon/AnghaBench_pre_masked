
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int gboolean ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dirent*,char const*) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (char*) ;
 struct dirent* FUNC_4 (int *) ;
 int VAR_2 ;

gboolean FUNC_5 (const char *VAR_3)
{
    DIR *VAR_4 = FUNC_3("/proc");
    if (!VAR_4) {
        FUNC_2 (VAR_2, "failed to open /proc/ dir\n");
        return VAR_0;
    }

    struct dirent *VAR_5 = ((void*)0);
    while ((VAR_5 = FUNC_4(VAR_4))) {
        char VAR_6 = VAR_5->d_name[0];

        if (VAR_6 > '9' || VAR_6 < '1')
            continue;
        int VAR_7 = FUNC_1(VAR_5, VAR_3);
        if (VAR_7 > 0) {
            FUNC_0(VAR_4);
            return VAR_1;
        }
    }

    FUNC_0(VAR_4);
    return VAR_0;
}
