
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nAffixData; char** AffixData; } ;
typedef TYPE_1__ IspellDict ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char**,char*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static bool
FUNC_3(IspellDict *VAR_1, int VAR_2, const char *VAR_3)
{
 char *VAR_4;
 char VAR_5[VAR_0];

 if (*VAR_3 == 0)
  return 1;

 FUNC_0(VAR_2 < VAR_1->nAffixData);

 VAR_4 = VAR_1->AffixData[VAR_2];

 while (*VAR_4)
 {
  FUNC_1(VAR_1, &VAR_4, VAR_5);

  if (FUNC_2(VAR_5, VAR_3) == 0)
   return 1;
 }


 return 0;
}
