
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active; int * installfunc; int (* changefunc ) (size_t) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (size_t) ;
 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(void)
{
    if (VAR_2

     && FUNC_2("regedit.exe") != ((void*)0)

       )
    {
 VAR_1[VAR_0].changefunc = FUNC_1;
 VAR_1[VAR_0].installfunc = ((void*)0);
 VAR_1[VAR_0].active = 1;
 FUNC_1(VAR_0);
 ++VAR_0;
    }
    else
 FUNC_0();
}
