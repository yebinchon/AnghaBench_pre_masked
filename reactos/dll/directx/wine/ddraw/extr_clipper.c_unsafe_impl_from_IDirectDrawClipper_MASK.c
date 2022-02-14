
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ddraw_clipper {int dummy; } ;
struct TYPE_4__ {int * lpVtbl; } ;
typedef TYPE_1__ IDirectDrawClipper ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct ddraw_clipper* FUNC_1 (TYPE_1__*) ;

struct ddraw_clipper *FUNC_2(IDirectDrawClipper *VAR_1)
{
    if (!VAR_1)
        return ((void*)0);
    FUNC_0(VAR_1->lpVtbl == &VAR_0);

    return FUNC_1(VAR_1);
}
