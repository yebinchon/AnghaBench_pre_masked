
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int grub_err_t ;
typedef TYPE_1__* grub_device_t ;
struct TYPE_4__ {scalar_t__ disk; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

grub_err_t
FUNC_2 (grub_device_t VAR_1)
{
  if (VAR_1->disk)
    FUNC_0 (VAR_1->disk);

  FUNC_1 (VAR_1);

  return VAR_0;
}
