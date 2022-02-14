
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (void*,void*,size_t) ;

void FUNC_4(uint8 VAR_1, size_t VAR_2, uint8 *VAR_3)
{
    size_t VAR_4 = VAR_2 >> 3;

    while(FUNC_0(FUNC_1(VAR_1)) & VAR_0);

    if (VAR_4 % 4) {


        VAR_4 += 4 - (VAR_4 % 4);
    }
    FUNC_3((void *)VAR_3, (void *)FUNC_2(VAR_1), VAR_4);
}
