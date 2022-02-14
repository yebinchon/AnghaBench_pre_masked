
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,void*,int ) ;
 scalar_t__ VAR_5 ;

uint8_t FUNC_4(void)
{
    if (VAR_3) {
        FUNC_0();
    }else{
        FUNC_2();
        int VAR_6 = (VAR_2) ? VAR_0 : 0;
        FUNC_3(&VAR_4[VAR_6],
               (void *)VAR_5, VAR_1);
        FUNC_1();
    }
    return 1;
}
