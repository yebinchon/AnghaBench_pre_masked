
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int grub_err_t ;
typedef TYPE_1__* grub_dl_t ;
typedef TYPE_2__* grub_dl_dep_t ;
struct TYPE_7__ {struct TYPE_7__* next; TYPE_1__* mod; } ;
struct TYPE_6__ {TYPE_2__* dep; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*) ;

grub_err_t
FUNC_4 (grub_dl_t VAR_2, char *VAR_3)
{
  while (1)
    {
      grub_dl_t VAR_4;
      grub_dl_dep_t VAR_5;

      VAR_3 += FUNC_3 (VAR_3) + 1;
      if (! *VAR_3)
 return VAR_0;

      VAR_4 = FUNC_0 (VAR_3);
      if (! VAR_4)
 return VAR_1;

      FUNC_1 (VAR_4);

      VAR_5 = (grub_dl_dep_t) FUNC_2 (sizeof (*VAR_5));
      if (! VAR_5)
 return VAR_1;

      VAR_5->mod = VAR_4;
      VAR_5->next = VAR_2->dep;
      VAR_2->dep = VAR_5;
    }
}
