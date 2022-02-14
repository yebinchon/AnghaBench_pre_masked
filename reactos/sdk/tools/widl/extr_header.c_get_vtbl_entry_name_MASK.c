
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int var_t ;
struct TYPE_4__ {char* name; } ;
typedef TYPE_1__ type_t ;


 char* FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,int const*) ;
 int FUNC_2 (char*,char*,char*,...) ;

__attribute__((used)) static char *FUNC_3(const type_t *VAR_0, const var_t *VAR_1)
{
  static char VAR_2[255];
  if (FUNC_1(VAR_0, VAR_1))
    FUNC_2(VAR_2, "%s_%s", VAR_0->name, FUNC_0(VAR_1));
  else
    FUNC_2(VAR_2, "%s", FUNC_0(VAR_1));
  return VAR_2;
}
