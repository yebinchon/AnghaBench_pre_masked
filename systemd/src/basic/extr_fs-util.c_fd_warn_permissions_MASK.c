
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char const*) ;

int FUNC_4(const char *VAR_1, int VAR_2) {
        struct stat VAR_3;

        if (FUNC_1(VAR_2, &VAR_3) < 0)
                return -VAR_0;


        if (!FUNC_0(VAR_3.st_mode))
                return 0;

        if (VAR_3.st_mode & 0111)
                FUNC_3("Configuration file %s is marked executable. Please remove executable permission bits. Proceeding anyway.", VAR_1);

        if (VAR_3.st_mode & 0002)
                FUNC_3("Configuration file %s is marked world-writable. Please remove world writability permission bits. Proceeding anyway.", VAR_1);

        if (FUNC_2() == 1 && (VAR_3.st_mode & 0044) != 0044)
                FUNC_3("Configuration file %s is marked world-inaccessible. This has no effect as configuration data is accessible via APIs without restrictions. Proceeding anyway.", VAR_1);

        return 0;
}
