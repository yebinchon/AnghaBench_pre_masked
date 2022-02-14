
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statvfs {int f_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char const*,struct statvfs*) ;

int FUNC_3(const char *VAR_4) {
        struct statvfs VAR_5;

        FUNC_1(VAR_4);

        if (FUNC_2(VAR_4, &VAR_5) < 0)
                return -VAR_3;

        if (VAR_5.f_flag & VAR_1)
                return 1;




        if (FUNC_0(VAR_4, VAR_2) < 0 && VAR_3 == VAR_0)
                return 1;

        return 0;
}
