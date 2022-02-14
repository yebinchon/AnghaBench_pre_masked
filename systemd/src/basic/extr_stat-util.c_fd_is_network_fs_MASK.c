
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct statfs*) ;
 int FUNC_1 (struct statfs*) ;

int FUNC_2(int VAR_1) {
        struct statfs VAR_2;

        if (FUNC_0(VAR_1, &VAR_2) < 0)
                return -VAR_0;

        return FUNC_1(&VAR_2);
}
