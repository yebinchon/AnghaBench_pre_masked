
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct stat const*) ;

int FUNC_3(const struct stat *VAR_2) {
        FUNC_2(VAR_2);

        if (FUNC_1(VAR_2->st_mode))
                return -VAR_0;

        if (!FUNC_0(VAR_2->st_mode))
                return -VAR_1;

        return 0;
}
