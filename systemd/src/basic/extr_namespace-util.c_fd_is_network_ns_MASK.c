
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {scalar_t__ f_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,struct statfs*) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct statfs*,int ) ;
 scalar_t__ FUNC_3 (char*,struct statfs*) ;

int FUNC_4(int VAR_7) {
        struct statfs VAR_8;
        int VAR_9;
        if (FUNC_0(VAR_7, &VAR_8) < 0)
                return -VAR_6;

        if (!FUNC_2(&VAR_8, VAR_3)) {



                if (FUNC_2(&VAR_8, VAR_5)) {
                        struct statfs VAR_10;





                        if (FUNC_3("/proc/self/ns/net", &VAR_10) < 0)
                                return -VAR_6;

                        if (VAR_8.f_type == VAR_10.f_type)
                                return -VAR_2;
                }

                return 0;
        }

        VAR_9 = FUNC_1(VAR_7, VAR_4);
        if (VAR_9 < 0) {
                if (VAR_6 == VAR_1)
                        return -VAR_2;

                return -VAR_6;
        }

        return VAR_9 == VAR_0;
}
