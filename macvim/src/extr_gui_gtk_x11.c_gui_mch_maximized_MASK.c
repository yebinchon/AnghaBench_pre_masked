
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* mainwin; } ;
struct TYPE_3__ {int * window; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__ VAR_1 ;

int
FUNC_1()
{
    return (VAR_1.mainwin != ((void*)0) && VAR_1.mainwin->window != ((void*)0)
     && (FUNC_0(VAR_1.mainwin->window)
            & VAR_0));
}
