
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; } ;
typedef TYPE_1__* PWND ;
typedef scalar_t__ HWND ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static HWND FUNC_6( HWND VAR_3 )
{
    while (FUNC_2(VAR_3, VAR_1) & VAR_0)
    {
        PWND VAR_4;
        HWND VAR_5 = FUNC_1(VAR_3);
        if (!VAR_5) break;

        if (!FUNC_3(VAR_5)) break;

        VAR_4 = FUNC_5(VAR_5);

        if (!VAR_4 || !FUNC_4(VAR_4) || VAR_5 == FUNC_0()) break;

        if (!(VAR_4->state & VAR_2))
        {
            break;
        }

        VAR_3 = VAR_5;
    }

    return VAR_3;
}
