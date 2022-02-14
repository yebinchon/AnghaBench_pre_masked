
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CGroupMask ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(CGroupMask *VAR_2) {
        CGroupMask VAR_3 = 0;
        int VAR_4;


        VAR_4 = FUNC_1();
        if (VAR_4 > 0)
                VAR_3 |= VAR_1;


        VAR_4 = FUNC_0();
        if (VAR_4 > 0)
                VAR_3 |= VAR_0;

        *VAR_2 = VAR_3;
        return 0;
}
