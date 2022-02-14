
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int grub_size_t ;
typedef TYPE_1__* grub_mm_region_t ;
struct TYPE_3__ {int first; struct TYPE_3__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (int *,int,int) ;

void *
FUNC_3 (grub_size_t VAR_4, grub_size_t VAR_5)
{
  grub_mm_region_t VAR_6;
  grub_size_t VAR_7 = ((VAR_5 + VAR_1 - 1) >> VAR_2) + 1;
  int VAR_8 = 0;

  VAR_4 = (VAR_4 >> VAR_2);
  if (VAR_4 == 0)
    VAR_4 = 1;

 again:

  for (VAR_6 = VAR_3; VAR_6; VAR_6 = VAR_6->next)
    {
      void *VAR_9;

      VAR_9 = FUNC_2 (&(VAR_6->first), VAR_7, VAR_4);
      if (VAR_9)
 return VAR_9;
    }


  switch (VAR_8)
    {
    case 0:

      FUNC_0 ();
      VAR_8++;
      goto again;

    case 1:


      VAR_8++;
      goto again;

    default:
      break;
    }

  FUNC_1 (VAR_0, "out of memory");
  return 0;
}
