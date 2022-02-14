
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct dirent*,char const*) ;
 int FUNC_2 (char*,int ) ;
 int * FUNC_3 (char*) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

int FUNC_6(const char *VAR_2)
{
    int VAR_3 = 0;
    DIR *VAR_4 = FUNC_3("/proc");
    if (!VAR_4) {
        FUNC_2 ("failed to open /proc/ :%s\n", FUNC_5(VAR_1));
        return VAR_0;
    }

    struct dirent *VAR_5 = ((void*)0);
    while ((VAR_5 = FUNC_4(VAR_4))) {
        char VAR_6 = VAR_5->d_name[0];

        if (VAR_6 > '9' || VAR_6 < '1')
            continue;
        if (FUNC_1(VAR_5, VAR_2) > 0) {
            VAR_3++;
        }
    }

    FUNC_0 (VAR_4);
    return VAR_3;
}
