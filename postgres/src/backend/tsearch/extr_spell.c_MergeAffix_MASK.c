
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nAffixData; char** AffixData; int lenAffixData; scalar_t__ flagMode; } ;
typedef TYPE_1__ IspellDict ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 char* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char**,int) ;
 int FUNC_3 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(IspellDict *VAR_1, int VAR_2, int VAR_3)
{
 char **VAR_4;

 FUNC_0(VAR_2 < VAR_1->nAffixData && VAR_3 < VAR_1->nAffixData);


 if (*VAR_1->AffixData[VAR_2] == '\0')
  return VAR_3;
 else if (*VAR_1->AffixData[VAR_3] == '\0')
  return VAR_2;

 while (VAR_1->nAffixData + 1 >= VAR_1->lenAffixData)
 {
  VAR_1->lenAffixData *= 2;
  VAR_1->AffixData = (char **) FUNC_2(VAR_1->AffixData,
            sizeof(char *) * VAR_1->lenAffixData);
 }

 VAR_4 = VAR_1->AffixData + VAR_1->nAffixData;
 if (VAR_1->flagMode == VAR_0)
 {
  *VAR_4 = FUNC_1(FUNC_4(VAR_1->AffixData[VAR_2]) +
        FUNC_4(VAR_1->AffixData[VAR_3]) +
        1 + 1 );
  FUNC_3(*VAR_4, "%s,%s", VAR_1->AffixData[VAR_2], VAR_1->AffixData[VAR_3]);
 }
 else
 {
  *VAR_4 = FUNC_1(FUNC_4(VAR_1->AffixData[VAR_2]) +
        FUNC_4(VAR_1->AffixData[VAR_3]) +
        1 );
  FUNC_3(*VAR_4, "%s%s", VAR_1->AffixData[VAR_2], VAR_1->AffixData[VAR_3]);
 }
 VAR_4++;
 *VAR_4 = ((void*)0);
 VAR_1->nAffixData++;

 return VAR_1->nAffixData - 1;
}
