
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* FirstSection; } ;
struct TYPE_3__ {int LineCount; struct TYPE_3__* Next; int Name; } ;
typedef TYPE_1__* PINFCACHESECTION ;
typedef TYPE_2__* PINFCACHE ;
typedef int * PCWSTR ;
typedef int LONG ;
typedef int * HINF ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

LONG
FUNC_2(HINF VAR_0,
                 PCWSTR VAR_1)
{
  PINFCACHE VAR_2;
  PINFCACHESECTION VAR_3;

  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
    {
      FUNC_0("Invalid parameter\n");
      return -1;
    }

  VAR_2 = (PINFCACHE)VAR_0;


  VAR_3 = VAR_2->FirstSection;
  while (VAR_3 != ((void*)0))
    {

      if (FUNC_1(VAR_3->Name, VAR_1) == 0)
        {
          return VAR_3->LineCount;
        }


      VAR_3 = VAR_3->Next;
    }

  FUNC_0("Section not found\n");

  return -1;
}
