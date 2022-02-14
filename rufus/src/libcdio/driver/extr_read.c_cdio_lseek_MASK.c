
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_4__ {int (* lseek ) (int ,int ,int) ;} ;
struct TYPE_5__ {int env; TYPE_1__ op; } ;
typedef TYPE_2__ CdIo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

off_t
FUNC_1 (const CdIo_t *VAR_2, off_t VAR_3, int VAR_4)
{
  if (!VAR_2) return VAR_0;

  if (VAR_2->op.lseek)
    return (VAR_2->op.lseek) (VAR_2->env, VAR_3, VAR_4);
  return VAR_1;
}
