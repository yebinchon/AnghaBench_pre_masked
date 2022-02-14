
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 unsigned short FUNC_1 (unsigned long long) ;
 unsigned long FUNC_2 (unsigned long long) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 unsigned long long FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 () ;

void FUNC_7(unsigned long *VAR_0, unsigned short *VAR_1)
{
        unsigned long long VAR_2 = 0;

        if(FUNC_0()) {
                VAR_2 = FUNC_5(FUNC_4(),
                                          FUNC_3());
                VAR_2 += FUNC_6();
        }

        *VAR_0 = FUNC_2(VAR_2);
        *VAR_1 = FUNC_1(VAR_2);

        return;
}
