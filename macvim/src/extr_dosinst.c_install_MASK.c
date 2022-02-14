
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* installfunc ) (int) ;scalar_t__ active; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(void)
{
    int VAR_7;


    for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7)
 if (VAR_1[VAR_7].installfunc != ((void*)0) && VAR_1[VAR_7].active)
     (VAR_1[VAR_7].installfunc)(VAR_7);


    if (VAR_4
     || VAR_3
     || (VAR_6 && VAR_5)
     || !VAR_5)
 FUNC_1();






}
