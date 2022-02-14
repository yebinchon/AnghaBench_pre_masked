
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * dpy; } ;
typedef TYPE_1__ xcursor_t ;
typedef int Display ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

xcursor_t *FUNC_2(Display *VAR_0)
{
 xcursor_t *VAR_1 = FUNC_0(sizeof(xcursor_t));

 VAR_1->dpy = VAR_0;
 FUNC_1(VAR_1);

 return VAR_1;
}
