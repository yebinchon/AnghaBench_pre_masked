
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* grub_file_t ;
typedef int grub_err_t ;
struct TYPE_7__ {scalar_t__ device; TYPE_1__* fs; } ;
struct TYPE_6__ {int (* close ) (TYPE_2__*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

grub_err_t
FUNC_3 (grub_file_t VAR_1)
{
  if (VAR_1->fs->close)
    (VAR_1->fs->close) (VAR_1);

  if (VAR_1->device)
    FUNC_0 (VAR_1->device);
  FUNC_1 (VAR_1);
  return VAR_0;
}
