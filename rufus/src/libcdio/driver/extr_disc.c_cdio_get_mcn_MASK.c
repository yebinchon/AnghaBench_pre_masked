
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* (* get_mcn ) (int ) ;} ;
struct TYPE_5__ {int env; TYPE_1__ op; } ;
typedef TYPE_2__ CdIo_t ;


 char* FUNC_0 (int ) ;

char *
FUNC_1 (const CdIo_t *VAR_0)
{
  if (VAR_0 && VAR_0->op.get_mcn) {
    return VAR_0->op.get_mcn (VAR_0->env);
  } else {
    return ((void*)0);
  }
}
