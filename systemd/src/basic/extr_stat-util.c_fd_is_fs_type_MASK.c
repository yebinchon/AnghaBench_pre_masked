
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int dummy; } ;
typedef int statfs_f_type_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,struct statfs*) ;
 int FUNC_1 (struct statfs*,int ) ;

int FUNC_2(int VAR_1, statfs_f_type_t VAR_2) {
        struct statfs VAR_3;

        if (FUNC_0(VAR_1, &VAR_3) < 0)
                return -VAR_0;

        return FUNC_1(&VAR_3, VAR_2);
}
