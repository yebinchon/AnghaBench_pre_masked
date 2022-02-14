
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pool; } ;
typedef TYPE_1__ cmd_parms ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static const char *FUNC_1(cmd_parms *VAR_1, void *VAR_2, const char *VAR_3)
{
 if (VAR_0) {
  return "Only first PHPINIDir directive honored per configuration tree - subsequent ones ignored";
 }
 VAR_0 = FUNC_0(VAR_1->pool, VAR_3);
 return ((void*)0);
}
