
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* FirstField; int * Key; } ;
struct TYPE_4__ {int * Data; } ;
typedef int * PWCHAR ;
typedef int * PINFCONTEXT ;
typedef TYPE_2__* PINFCACHELINE ;
typedef int INFSTATUS ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int *) ;

INFSTATUS
FUNC_2(PINFCONTEXT VAR_2,
            PWCHAR *VAR_3,
            PWCHAR *VAR_4)
{
  PINFCACHELINE VAR_5;

  if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0))
    {
      FUNC_0("Invalid parameter\n");
      return VAR_0;
    }

  VAR_5 = FUNC_1(VAR_2);
  if (VAR_3 != ((void*)0))
    *VAR_3 = VAR_5->Key;

  if (VAR_4 != ((void*)0))
    {
      if (VAR_5->FirstField == ((void*)0))
        {
          *VAR_4 = ((void*)0);
        }
      else
        {
          *VAR_4 = VAR_5->FirstField->Data;
        }
    }

  return VAR_1;
}
