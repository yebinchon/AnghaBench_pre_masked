
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;

int FUNC_4(const char *VAR_1) {
        struct stat VAR_2;

        FUNC_2(VAR_1);

        if (FUNC_3(VAR_1, &VAR_2) < 0)
                return -VAR_0;

        return !!(FUNC_0(VAR_2.st_mode) || FUNC_1(VAR_2.st_mode));
}
