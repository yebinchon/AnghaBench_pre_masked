
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct stat const*) ;

int FUNC_4(const struct stat *VAR_3) {
        FUNC_3(VAR_3);




        if (FUNC_0(VAR_3->st_mode))
                return -VAR_1;

        if (FUNC_1(VAR_3->st_mode))
                return -VAR_2;

        if (!FUNC_2(VAR_3->st_mode))
                return -VAR_0;

        return 0;
}
