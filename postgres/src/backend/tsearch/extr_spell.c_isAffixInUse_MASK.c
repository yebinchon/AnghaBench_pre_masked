
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nAffixData; } ;
typedef TYPE_1__ IspellDict ;


 scalar_t__ FUNC_0 (TYPE_1__*,int,char*) ;

__attribute__((used)) static bool
FUNC_1(IspellDict *VAR_0, char *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nAffixData; VAR_2++)
  if (FUNC_0(VAR_0, VAR_2, VAR_1))
   return 1;

 return 0;
}
