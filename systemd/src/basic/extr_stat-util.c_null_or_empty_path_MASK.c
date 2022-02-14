
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int FUNC_1 (struct stat*) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;

int FUNC_3(const char *VAR_1) {
        struct stat VAR_2;

        FUNC_0(VAR_1);

        if (FUNC_2(VAR_1, &VAR_2) < 0)
                return -VAR_0;

        return FUNC_1(&VAR_2);
}
