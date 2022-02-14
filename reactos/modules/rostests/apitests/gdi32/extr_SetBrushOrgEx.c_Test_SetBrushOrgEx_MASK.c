
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ POINT ;
typedef TYPE_1__* LPPOINT ;
typedef scalar_t__ HDC ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_2 (scalar_t__,int,int,TYPE_1__*,int,int ) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (scalar_t__,int) ;

void FUNC_5()
{
    HDC VAR_1;
    POINT VAR_2;

    VAR_1 = FUNC_0(0);
    FUNC_3(VAR_1 != 0, "could not ceate DC\n");

    FUNC_2(0, 0, 0, ((void*)0), 0, VAR_0);
    FUNC_2(0, 0, 0, (LPPOINT)-1, 0, VAR_0);
    FUNC_2(0, 0, 0, &VAR_2, 0, VAR_0);
    FUNC_2(VAR_1, 1, 2, &VAR_2, 1, 0);
    FUNC_4(VAR_2.x, 0);
    FUNC_4(VAR_2.y, 0);
    FUNC_1(VAR_1, 0, 0, &VAR_2);
    FUNC_4(VAR_2.x, 1);
    FUNC_4(VAR_2.y, 2);

    VAR_2.x = 0; VAR_2.y = 0;
    FUNC_2(VAR_1, 1, 2, (LPPOINT)-1, -1, 0);
    FUNC_1(VAR_1, 0, 0, &VAR_2);
    FUNC_4(VAR_2.x, 0);
    FUNC_4(VAR_2.y, 0);


    FUNC_2(VAR_1, -10000, -20000000, &VAR_2, 1, 0);
    FUNC_4(VAR_2.x, 0);
    FUNC_4(VAR_2.y, 0);
    FUNC_1(VAR_1, 0, 0, &VAR_2);
    FUNC_4(VAR_2.x, -10000);
    FUNC_4(VAR_2.y, -20000000);


}
