
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * LastSection; int * FirstSection; } ;
typedef TYPE_1__* PINFCACHE ;
typedef scalar_t__ HINF ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int *) ;

void
FUNC_2(HINF VAR_0)
{
  PINFCACHE VAR_1;

  VAR_1 = (PINFCACHE)VAR_0;

  if (VAR_1 == ((void*)0))
    {
      return;
    }

  while (VAR_1->FirstSection != ((void*)0))
    {
      VAR_1->FirstSection = FUNC_1(VAR_1->FirstSection);
    }
  VAR_1->LastSection = ((void*)0);

  FUNC_0(VAR_1);
}
