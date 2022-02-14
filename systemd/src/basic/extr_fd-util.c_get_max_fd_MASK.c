
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int rlim_max; int rlim_cur; } ;
typedef scalar_t__ rlim_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,struct rlimit*) ;

__attribute__((used)) static int FUNC_2(void) {
        struct rlimit VAR_5;
        rlim_t VAR_6;




        if (FUNC_1(VAR_2, &VAR_5) < 0)
                return -VAR_4;

        VAR_6 = FUNC_0(VAR_5.rlim_cur, VAR_5.rlim_max);
        if (VAR_6 < VAR_0)
                return VAR_0-1;

        if (VAR_6 == VAR_3 || VAR_6 > VAR_1)

                return VAR_1;

        return (int) (VAR_6 - 1);
}
