
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nAffixData; char** AffixData; scalar_t__ useFlagAliases; } ;
typedef TYPE_1__ IspellDict ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*,char**,int) ;

__attribute__((used)) static char *
FUNC_4(IspellDict *VAR_5, char *VAR_6)
{
 if (VAR_5->useFlagAliases && *VAR_6 != '\0')
 {
  int VAR_7;
  char *VAR_8;

  VAR_7 = FUNC_3(VAR_6, &VAR_8, 10);
  if (VAR_6 == VAR_8 || VAR_4 == VAR_0)
   FUNC_0(VAR_2,
     (FUNC_1(VAR_1),
      FUNC_2("invalid affix alias \"%s\"", VAR_6)));

  if (VAR_7 > 0 && VAR_7 < VAR_5->nAffixData)





   return VAR_5->AffixData[VAR_7];
  else if (VAR_7 > VAR_5->nAffixData)
   FUNC_0(VAR_2,
     (FUNC_1(VAR_1),
      FUNC_2("invalid affix alias \"%s\"", VAR_6)));
  return VAR_3;
 }
 else
  return VAR_6;
}
