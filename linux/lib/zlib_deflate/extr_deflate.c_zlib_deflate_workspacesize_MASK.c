
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int deflate_workspace ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

int FUNC_5(int VAR_1, int VAR_2)
{
    if (VAR_1 < 0)
        VAR_1 = -VAR_1;


    FUNC_0(VAR_2 < 1 || VAR_2 > VAR_0 || VAR_1 < 9 ||
       VAR_1 > 15);

    return sizeof(deflate_workspace)
        + FUNC_4(VAR_1)
        + FUNC_3(VAR_1)
        + FUNC_1(VAR_2)
        + FUNC_2(VAR_2);
}
