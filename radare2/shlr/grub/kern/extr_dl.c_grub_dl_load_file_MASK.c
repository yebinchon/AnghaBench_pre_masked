
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ grub_ssize_t ;
typedef int * grub_file_t ;
typedef TYPE_1__* grub_dl_t ;
struct TYPE_4__ {scalar_t__ ref_count; } ;


 TYPE_1__* FUNC_0 (void*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (int *,void*,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (scalar_t__) ;

grub_dl_t
FUNC_7 (const char *VAR_0)
{
  grub_file_t VAR_1 = ((void*)0);
  grub_ssize_t VAR_2;
  void *VAR_3 = 0;
  grub_dl_t VAR_4 = 0;

  VAR_1 = FUNC_2 (VAR_0);
  if (! VAR_1)
    return 0;

  VAR_2 = FUNC_4 (VAR_1);
  VAR_3 = FUNC_6 (VAR_2);
  if (! VAR_3)
    {
      FUNC_1 (VAR_1);
      return 0;
    }

  if (FUNC_3 (VAR_1, VAR_3, VAR_2) != (int) VAR_2)
    {
      FUNC_1 (VAR_1);
      FUNC_5 (VAR_3);
      return 0;
    }




  FUNC_1 (VAR_1);

  VAR_4 = FUNC_0 (VAR_3, VAR_2);
  if (! VAR_4)
    {
      FUNC_5 (VAR_3);
      return 0;
    }

  VAR_4->ref_count = 0;
  return VAR_4;
}
