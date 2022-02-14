
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct stat {int st_ino; int st_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 scalar_t__ FUNC_3 (int,int ,int*) ;

int FUNC_4(int VAR_4) {
        uint64_t VAR_5;
        struct stat VAR_6;

        FUNC_1(VAR_4 >= 0);

        if (FUNC_2(VAR_4, &VAR_6) < 0)
                return -VAR_3;

        if (!FUNC_0(VAR_6.st_mode) || VAR_6.st_ino != 256)
                return -VAR_2;

        if (FUNC_3(VAR_4, VAR_0, &VAR_5) < 0)
                return -VAR_3;

        return !!(VAR_5 & VAR_1);
}
