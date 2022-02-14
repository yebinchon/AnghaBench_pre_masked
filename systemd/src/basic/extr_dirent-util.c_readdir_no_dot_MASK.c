
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int d_name; } ;
typedef int DIR ;


 scalar_t__ FUNC_0 (int ) ;
 struct dirent* FUNC_1 (int *) ;

struct dirent* FUNC_2(DIR *VAR_0) {
        struct dirent* VAR_1;

        for (;;) {
                VAR_1 = FUNC_1(VAR_0);
                if (VAR_1 && FUNC_0(VAR_1->d_name))
                        continue;
                return VAR_1;
        }
}
