
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; scalar_t__ important; int value; } ;
typedef TYPE_1__ fz_css_property ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(fz_css_property *VAR_0)
{
 FUNC_1("\t%s: ", VAR_0->name);
 FUNC_0(VAR_0->value);
 if (VAR_0->important)
  FUNC_1(" !important");
 FUNC_1(";\n");
}
