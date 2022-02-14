
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct stat {int st_ino; int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 scalar_t__ FUNC_3 (int,int ,int*) ;

int FUNC_4(int VAR_5, bool VAR_6) {
        uint64_t VAR_7, VAR_8;
        struct stat VAR_9;

        FUNC_1(VAR_5 >= 0);

        if (FUNC_2(VAR_5, &VAR_9) < 0)
                return -VAR_4;

        if (!FUNC_0(VAR_9.st_mode) || VAR_9.st_ino != 256)
                return -VAR_3;

        if (FUNC_3(VAR_5, VAR_0, &VAR_7) < 0)
                return -VAR_4;

        if (VAR_6)
                VAR_8 = VAR_7 | VAR_2;
        else
                VAR_8 = VAR_7 & ~VAR_2;

        if (VAR_7 == VAR_8)
                return 0;

        if (FUNC_3(VAR_5, VAR_1, &VAR_8) < 0)
                return -VAR_4;

        return 0;
}
