
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* grub_symbol_t ;
typedef int grub_err_t ;
typedef scalar_t__ grub_dl_t ;
struct TYPE_4__ {char const* name; struct TYPE_4__* next; scalar_t__ mod; void* addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 char const* FUNC_2 (char const*) ;
 unsigned int FUNC_3 (char const*) ;
 TYPE_1__** VAR_2 ;

grub_err_t
FUNC_4 (const char *VAR_3, void *VAR_4, grub_dl_t VAR_5)
{
  grub_symbol_t VAR_6;
  unsigned VAR_7;

  VAR_6 = (grub_symbol_t) FUNC_1 (sizeof (*VAR_6));
  if (! VAR_6)
    return VAR_1;

  if (VAR_5)
    {
      VAR_6->name = FUNC_2 (VAR_3);
      if (! VAR_6->name)
 {
   FUNC_0 (VAR_6);
   return VAR_1;
 }
    }
  else
    VAR_6->name = VAR_3;

  VAR_6->addr = VAR_4;
  VAR_6->mod = VAR_5;

  VAR_7 = FUNC_3 (VAR_3);
  VAR_6->next = VAR_2[VAR_7];
  VAR_2[VAR_7] = VAR_6;

  return VAR_0;
}
