
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;
typedef scalar_t__ cap_value_t ;
typedef int cap_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int) ;
 unsigned long FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int,scalar_t__*,int ) ;
 int VAR_2 ;

int FUNC_3(cap_t VAR_3, uint64_t VAR_4) {
        unsigned long VAR_5;




        for (VAR_5 = 0; VAR_5 <= FUNC_1(); VAR_5++) {

                if (VAR_4 & (FUNC_0(1) << VAR_5)) {
                        cap_value_t VAR_6;

                        VAR_6 = (cap_value_t) VAR_5;


                        if (FUNC_2(VAR_3, VAR_0, 1, &VAR_6, VAR_1) < 0)
                                return -VAR_2;
                }
        }

        return 0;
}
