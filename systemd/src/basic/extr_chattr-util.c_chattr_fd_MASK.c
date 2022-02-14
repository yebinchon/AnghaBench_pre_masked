
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 scalar_t__ FUNC_4 (int,int ,unsigned int*) ;

int FUNC_5(int VAR_4, unsigned VAR_5, unsigned VAR_6, unsigned *VAR_7) {
        unsigned VAR_8, VAR_9;
        struct stat VAR_10;

        FUNC_2(VAR_4 >= 0);

        if (FUNC_3(VAR_4, &VAR_10) < 0)
                return -VAR_3;







        if (!FUNC_0(VAR_10.st_mode) && !FUNC_1(VAR_10.st_mode))
                return -VAR_0;

        if (VAR_6 == 0 && !VAR_7)
                return 0;

        if (FUNC_4(VAR_4, VAR_1, &VAR_8) < 0)
                return -VAR_3;

        VAR_9 = (VAR_8 & ~VAR_6) | (VAR_5 & VAR_6);
        if (VAR_9 == VAR_8) {
                if (VAR_7)
                        *VAR_7 = VAR_8;
                return 0;
        }

        if (FUNC_4(VAR_4, VAR_2, &VAR_9) < 0)
                return -VAR_3;

        if (VAR_7)
                *VAR_7 = VAR_8;

        return 1;
}
