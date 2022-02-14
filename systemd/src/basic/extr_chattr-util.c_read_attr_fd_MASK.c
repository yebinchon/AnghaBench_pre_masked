
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 scalar_t__ FUNC_4 (int,int ,unsigned int*) ;

int FUNC_5(int VAR_3, unsigned *VAR_4) {
        struct stat VAR_5;

        FUNC_2(VAR_3 >= 0);

        if (FUNC_3(VAR_3, &VAR_5) < 0)
                return -VAR_2;

        if (!FUNC_0(VAR_5.st_mode) && !FUNC_1(VAR_5.st_mode))
                return -VAR_0;

        if (FUNC_4(VAR_3, VAR_1, VAR_4) < 0)
                return -VAR_2;

        return 0;
}
