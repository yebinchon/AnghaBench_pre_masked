
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;


 int FUNC_0 (int ,int,int*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;

void
FUNC_2(void)
{
    INT VAR_3[3], VAR_4[3];


    FUNC_0(VAR_1, 0, VAR_3, 0);


    FUNC_1(FUNC_0(VAR_1, 0, VAR_4, 0) == 1);
    FUNC_1(FUNC_0(VAR_1, 1, VAR_4, 0) == 1);
    FUNC_1(FUNC_0(VAR_1, -1, VAR_4, 0) == 1);
    FUNC_1(FUNC_0(VAR_1, 0xdeadbeef, VAR_4, 0) == 1);


    VAR_4[0] = VAR_3[0] + 1;
    VAR_4[1] = VAR_3[1] - 1;
    VAR_4[2] = VAR_3[2] + 2;
    FUNC_0(VAR_2, 2, VAR_4, VAR_0);
    VAR_4[0] = VAR_4[1] = VAR_4[2] = 0;


    FUNC_0(VAR_1, 0, VAR_4, 0);


    FUNC_1(VAR_4[0] == VAR_3[0] + 1);
    FUNC_1(VAR_4[1] == VAR_3[1] - 1);
    FUNC_1(VAR_4[2] == VAR_3[2] + 2);




    FUNC_0(VAR_2, 0, VAR_3, VAR_0);
}
