
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int szPath; } ;
typedef int LPTSTR ;
typedef int INT ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;

INT FUNC_5 (LPTSTR VAR_3)
{
    INT VAR_4 = 0;
    if (!FUNC_4(VAR_3, FUNC_2("/?"), 2))
    {
        FUNC_0(VAR_0);
        return 0;
    }

    if (VAR_2 == 0)
        return 1;

    VAR_4 = FUNC_3(VAR_1->szPath) != 0;
    FUNC_1 ();

    return VAR_4;
}
