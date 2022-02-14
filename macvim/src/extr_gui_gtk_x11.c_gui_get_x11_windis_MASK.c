
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ Window ;
struct TYPE_4__ {TYPE_1__* mainwin; } ;
struct TYPE_3__ {int * window; } ;
typedef int Display ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

int
FUNC_2(Window *VAR_3, Display **VAR_4)
{
    if (VAR_2.mainwin != ((void*)0) && VAR_2.mainwin->window != ((void*)0))
    {
 *VAR_4 = FUNC_0(VAR_2.mainwin->window);
 *VAR_3 = FUNC_1(VAR_2.mainwin->window);
 return VAR_1;
    }

    *VAR_4 = ((void*)0);
    *VAR_3 = 0;
    return VAR_0;
}
