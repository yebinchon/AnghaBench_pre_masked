
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (struct stat*) ;

int FUNC_3(int VAR_1) {
        struct stat VAR_2;

        FUNC_0(VAR_1 >= 0);

        if (FUNC_1(VAR_1, &VAR_2) < 0)
                return -VAR_0;

        return FUNC_2(&VAR_2);
}
