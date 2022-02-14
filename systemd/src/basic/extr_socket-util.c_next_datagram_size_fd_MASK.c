
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int,int ,int*) ;
 scalar_t__ FUNC_2 (int,int *,int ,int) ;

ssize_t FUNC_3(int VAR_6) {
        ssize_t VAR_7;
        int VAR_8;







        VAR_7 = FUNC_2(VAR_6, ((void*)0), 0, VAR_3|VAR_4);
        if (VAR_7 < 0) {
                if (FUNC_0(VAR_5, VAR_1, VAR_0))
                        goto fallback;

                return -VAR_5;
        }
        if (VAR_7 == 0)
                goto fallback;

        return VAR_7;

fallback:
        VAR_8 = 0;




        if (FUNC_1(VAR_6, VAR_2, &VAR_8) < 0)
                return -VAR_5;

        return (ssize_t) VAR_8;
}
