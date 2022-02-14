
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int f_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int,struct statfs*) ;

int FUNC_3(int VAR_2) {
        struct statfs VAR_3;

        FUNC_1(VAR_2 >= 0);

        if (FUNC_2(VAR_2, &VAR_3) < 0)
                return -VAR_1;

        return FUNC_0(VAR_3.f_type, VAR_0);
}
