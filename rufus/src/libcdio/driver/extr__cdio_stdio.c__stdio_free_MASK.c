
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ fd; struct TYPE_3__* const pathname; } ;
typedef TYPE_1__ _UserData ;


 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__* const) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
  _UserData *const VAR_1 = VAR_0;

  if (VAR_1->pathname)
    FUNC_1(VAR_1->pathname);

  if (VAR_1->fd)
    FUNC_0(VAR_0);

  FUNC_1(VAR_1);
}
