
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwMask; int dwEffects; } ;
typedef TYPE_1__ CHARFORMAT2W ;


 int FUNC_0 (char*,char*,char const*,char*) ;

__attribute__((used)) static void FUNC_1(char **VAR_0, const char *VAR_1, const CHARFORMAT2W *VAR_2, int VAR_3)
{
  *VAR_0 += FUNC_0(*VAR_0, "%-22s%s\n", VAR_1, (VAR_2->dwMask & VAR_3) ? ((VAR_2->dwEffects & VAR_3) ? "YES" : "no") : "N/A");
}
