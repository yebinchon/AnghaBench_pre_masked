
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int grub_err_t ;
typedef TYPE_1__* grub_dl_t ;
typedef TYPE_2__* grub_dl_list_t ;
struct TYPE_6__ {struct TYPE_6__* next; TYPE_1__* mod; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int) ;

grub_err_t
FUNC_3 (grub_dl_t VAR_4)
{
  grub_dl_list_t VAR_5;

  if (FUNC_0 (VAR_4->name))
    return FUNC_1 (VAR_0,
         "`%s' is already loaded", VAR_4->name);

  VAR_5 = (grub_dl_list_t) FUNC_2 (sizeof (*VAR_5));
  if (! VAR_5)
    return VAR_3;

  VAR_5->mod = VAR_4;
  VAR_5->next = VAR_2;
  VAR_2 = VAR_5;

  return VAR_1;
}
