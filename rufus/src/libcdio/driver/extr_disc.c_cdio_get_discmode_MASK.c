
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int discmode_t ;
struct TYPE_4__ {int (* get_discmode ) (int ) ;} ;
struct TYPE_5__ {int env; TYPE_1__ op; } ;
typedef TYPE_2__ CdIo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

discmode_t
FUNC_1 (CdIo_t *VAR_2)
{
  if (!VAR_2) return VAR_0;

  if (VAR_2->op.get_discmode) {
    return VAR_2->op.get_discmode (VAR_2->env);
  } else {
    return VAR_1;
  }
}
