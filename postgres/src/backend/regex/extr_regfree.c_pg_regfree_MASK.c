
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct fns {int (* free ) (TYPE_1__*) ;} ;
struct TYPE_4__ {scalar_t__ re_fns; } ;
typedef TYPE_1__ regex_t ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(regex_t *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 (*((struct fns *) VAR_0->re_fns)->free) (VAR_0);
}
