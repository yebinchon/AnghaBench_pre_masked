
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int type; } ;
struct d_print_info {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (struct d_print_info*,char) ;
 int FUNC_1 (struct d_print_info*,char*) ;
 char FUNC_2 (struct d_print_info*) ;
 struct demangle_component* FUNC_3 (struct demangle_component*) ;
 int FUNC_4 (struct d_print_info*,int,struct demangle_component*) ;
 struct demangle_component* FUNC_5 (struct demangle_component*) ;

__attribute__((used)) static void
FUNC_6 (struct d_print_info *VAR_1, int VAR_2,
             struct demangle_component *VAR_3)
{
  switch (VAR_3->type)
    {
    case 138:
    case 137:
      FUNC_1 (VAR_1, " restrict");
      return;
    case 129:
    case 128:
      FUNC_1 (VAR_1, " volatile");
      return;
    case 146:
    case 145:
      FUNC_1 (VAR_1, " const");
      return;
    case 133:
      FUNC_1 (VAR_1, " transaction_safe");
      return;
    case 143:
      FUNC_1 (VAR_1, " noexcept");
      if (FUNC_5 (VAR_3))
 {
   FUNC_0 (VAR_1, '(');
   FUNC_4 (VAR_1, VAR_2, FUNC_5 (VAR_3));
   FUNC_0 (VAR_1, ')');
 }
      return;
    case 134:
      FUNC_1 (VAR_1, " throw");
      if (FUNC_5 (VAR_3))
 {
   FUNC_0 (VAR_1, '(');
   FUNC_4 (VAR_1, VAR_2, FUNC_5 (VAR_3));
   FUNC_0 (VAR_1, ')');
 }
      return;
    case 130:
      FUNC_0 (VAR_1, ' ');
      FUNC_4 (VAR_1, VAR_2, FUNC_5 (VAR_3));
      return;
    case 142:

      if ((VAR_2 & VAR_0) == 0)
 FUNC_0 (VAR_1, '*');
      return;
    case 139:

      FUNC_0 (VAR_1, ' ');

    case 140:
      FUNC_0 (VAR_1, '&');
      return;
    case 135:
      FUNC_0 (VAR_1, ' ');

    case 136:
      FUNC_1 (VAR_1, "&&");
      return;
    case 147:
      FUNC_1 (VAR_1, "complex ");
      return;
    case 144:
      FUNC_1 (VAR_1, "imaginary ");
      return;
    case 141:
      if (FUNC_2 (VAR_1) != '(')
 FUNC_0 (VAR_1, ' ');
      FUNC_4 (VAR_1, VAR_2, FUNC_3 (VAR_3));
      FUNC_1 (VAR_1, "::*");
      return;
    case 132:
      FUNC_4 (VAR_1, VAR_2, FUNC_3 (VAR_3));
      return;
    case 131:
      FUNC_1 (VAR_1, " __vector(");
      FUNC_4 (VAR_1, VAR_2, FUNC_3 (VAR_3));
      FUNC_0 (VAR_1, ')');
      return;

    default:


      FUNC_4 (VAR_1, VAR_2, VAR_3);
      return;
    }
}
