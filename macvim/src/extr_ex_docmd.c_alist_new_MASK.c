
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int al_refcount; scalar_t__ id; } ;
typedef TYPE_1__ alist_T ;
struct TYPE_6__ {TYPE_1__* w_alist; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 TYPE_3__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_2()
{
    VAR_0->w_alist = (alist_T *)FUNC_1((unsigned)sizeof(alist_T));
    if (VAR_0->w_alist == ((void*)0))
    {
 VAR_0->w_alist = &VAR_1;
 ++VAR_1.al_refcount;
    }
    else
    {
 VAR_0->w_alist->al_refcount = 1;
 VAR_0->w_alist->id = ++VAR_2;
 FUNC_0(VAR_0->w_alist);
    }
}
