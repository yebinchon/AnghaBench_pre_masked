
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_ino; int st_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int,struct stat*) ;

int FUNC_4(int VAR_1) {
        struct stat VAR_2;

        FUNC_1(VAR_1 >= 0);



        if (FUNC_3(VAR_1, &VAR_2) < 0)
                return -VAR_0;

        if (!FUNC_0(VAR_2.st_mode) || VAR_2.st_ino != 256)
                return 0;

        return FUNC_2(VAR_1);
}
