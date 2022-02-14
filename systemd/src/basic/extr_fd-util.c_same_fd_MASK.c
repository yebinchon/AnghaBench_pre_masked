
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; scalar_t__ st_dev; scalar_t__ st_ino; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int,struct stat*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int ,int,int) ;

int FUNC_8(int VAR_7, int VAR_8) {
        struct stat VAR_9, VAR_10;
        pid_t VAR_11;
        int VAR_12, VAR_13, VAR_14;

        FUNC_3(VAR_7 >= 0);
        FUNC_3(VAR_8 >= 0);
        if (VAR_7 == VAR_8)
                return 1;


        VAR_11 = FUNC_6();
        VAR_12 = FUNC_7(VAR_11, VAR_11, VAR_4, VAR_7, VAR_8);
        if (VAR_12 == 0)
                return 1;
        if (VAR_12 > 0)
                return 0;
        if (!FUNC_0(VAR_6, VAR_1, VAR_0, VAR_2))
                return -VAR_6;


        if (FUNC_5(VAR_7, &VAR_9) < 0)
                return -VAR_6;

        if (FUNC_5(VAR_8, &VAR_10) < 0)
                return -VAR_6;

        if ((VAR_9.st_mode & VAR_5) != (VAR_10.st_mode & VAR_5))
                return 0;





        if (FUNC_2(VAR_9.st_mode) || FUNC_1(VAR_9.st_mode))
                return 0;

        if (VAR_9.st_dev != VAR_10.st_dev || VAR_9.st_ino != VAR_10.st_ino)
                return 0;





        VAR_13 = FUNC_4(VAR_7, VAR_3);
        if (VAR_13 < 0)
                return -VAR_6;

        VAR_14 = FUNC_4(VAR_8, VAR_3);
        if (VAR_14 < 0)
                return -VAR_6;

        return VAR_13 == VAR_14;
}
