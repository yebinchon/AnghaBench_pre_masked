
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int VAR_0 ;
 int FUNC_2 (char const*,struct stat*) ;
 int FUNC_3 (char const*,struct stat*) ;

int FUNC_4(const char* VAR_1, bool VAR_2) {
        struct stat VAR_3;
        int VAR_4;

        FUNC_1(VAR_1);

        if (VAR_2)
                VAR_4 = FUNC_3(VAR_1, &VAR_3);
        else
                VAR_4 = FUNC_2(VAR_1, &VAR_3);
        if (VAR_4 < 0)
                return -VAR_0;

        return !!FUNC_0(VAR_3.st_mode);
}
