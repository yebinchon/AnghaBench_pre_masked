
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int atoOrig ;
struct TYPE_3__ {int cbSize; } ;
typedef TYPE_1__ ACCESSTIMEOUT ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;

void
FUNC_3(void)
{
    ACCESSTIMEOUT VAR_2, VAR_3;


    VAR_2.cbSize = sizeof(ACCESSTIMEOUT);
    FUNC_0(FUNC_1(VAR_0, 0, &VAR_2, 0) == 1);

    VAR_3.cbSize = sizeof(ACCESSTIMEOUT) - 1;
    FUNC_2(FUNC_1(VAR_0, 0, &VAR_3, 0) == 0);
    VAR_3.cbSize = sizeof(ACCESSTIMEOUT) + 1;
    FUNC_2(FUNC_1(VAR_0, 0, &VAR_3, 0) == 0);
    VAR_3.cbSize = sizeof(ACCESSTIMEOUT);
    FUNC_2(FUNC_1(VAR_0, 0, &VAR_3, 0) == 1);
    VAR_3.cbSize = sizeof(ACCESSTIMEOUT);
    FUNC_2(FUNC_1(VAR_0, 1, &VAR_3, 0) == 0);
    VAR_3.cbSize = sizeof(ACCESSTIMEOUT);
    FUNC_2(FUNC_1(VAR_0, -1, &VAR_3, 0) == 0);
    VAR_3.cbSize = sizeof(ACCESSTIMEOUT);
    FUNC_2(FUNC_1(VAR_0, sizeof(ACCESSTIMEOUT), &VAR_3, 0) == 1);
    VAR_3.cbSize = sizeof(ACCESSTIMEOUT);
    FUNC_2(FUNC_1(VAR_0, sizeof(ACCESSTIMEOUT)-1, &VAR_3, 0) == 0);
    VAR_3.cbSize = sizeof(ACCESSTIMEOUT);
    FUNC_2(FUNC_1(VAR_0, sizeof(ACCESSTIMEOUT)+1, &VAR_3, 0) == 0);


    FUNC_0(FUNC_1(VAR_1, sizeof(VAR_2), &VAR_2, 0) == 1);
}
