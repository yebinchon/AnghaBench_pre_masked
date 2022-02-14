
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * (* get_cdtext_raw ) (int ) ;} ;
struct TYPE_5__ {int env; TYPE_1__ op; } ;
typedef TYPE_2__ CdIo ;


 int * FUNC_0 (int ) ;

uint8_t *
FUNC_1 (CdIo *VAR_0)
{
  if (VAR_0 == ((void*)0)) return ((void*)0);

  if (((void*)0) != VAR_0->op.get_cdtext_raw) {
    return VAR_0->op.get_cdtext_raw (VAR_0->env);
  } else {
    return ((void*)0);
  }
}
