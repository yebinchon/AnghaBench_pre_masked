
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int arg; } ;
typedef TYPE_1__ DefElem ;


 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static char
FUNC_3(DefElem *VAR_4)
{
 char *VAR_5 = FUNC_1(VAR_4->arg);

 if (FUNC_2(VAR_5, "immutable") == 0)
  return VAR_1;
 else if (FUNC_2(VAR_5, "stable") == 0)
  return VAR_2;
 else if (FUNC_2(VAR_5, "volatile") == 0)
  return VAR_3;
 else
 {
  FUNC_0(VAR_0, "invalid volatility \"%s\"", VAR_5);
  return 0;
 }
}
