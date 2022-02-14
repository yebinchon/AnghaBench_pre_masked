
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* op; } ;
struct TYPE_6__ {TYPE_2__ s_operator; } ;
struct demangle_component {scalar_t__ type; TYPE_3__ u; } ;
struct d_print_info {int pack_index; } ;
struct TYPE_4__ {char* code; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct d_print_info*,char) ;
 int FUNC_1 (struct d_print_info*,char*) ;
 struct demangle_component* FUNC_2 (struct demangle_component*) ;
 int FUNC_3 (struct d_print_info*,int,struct demangle_component*) ;
 int FUNC_4 (struct d_print_info*,int,struct demangle_component*) ;
 struct demangle_component* FUNC_5 (struct demangle_component*) ;

__attribute__((used)) static int
FUNC_6 (struct d_print_info *VAR_1, int VAR_2,
          struct demangle_component *VAR_3)
{
  struct demangle_component *VAR_4, *VAR_5, *VAR_6, *VAR_7;
  int VAR_8;

  const char *VAR_9 = FUNC_2 (VAR_3)->u.s_operator.op->code;
  if (VAR_9[0] != 'f')
    return 0;

  VAR_4 = FUNC_5 (VAR_3);
  VAR_5 = FUNC_2 (VAR_4);
  VAR_6 = FUNC_5 (VAR_4);
  VAR_7 = 0;
  if (VAR_6->type == VAR_0)
    {
      VAR_7 = FUNC_5 (VAR_6);
      VAR_6 = FUNC_2 (VAR_6);
    }


  VAR_8 = VAR_1->pack_index;
  VAR_1->pack_index = -1;

  switch (VAR_9[1])
    {

    case 'l':
      FUNC_1 (VAR_1, "(...");
      FUNC_3 (VAR_1, VAR_2, VAR_5);
      FUNC_4 (VAR_1, VAR_2, VAR_6);
      FUNC_0 (VAR_1, ')');
      break;


    case 'r':
      FUNC_0 (VAR_1, '(');
      FUNC_4 (VAR_1, VAR_2, VAR_6);
      FUNC_3 (VAR_1, VAR_2, VAR_5);
      FUNC_1 (VAR_1, "...)");
      break;


    case 'L':

    case 'R':
      FUNC_0 (VAR_1, '(');
      FUNC_4 (VAR_1, VAR_2, VAR_6);
      FUNC_3 (VAR_1, VAR_2, VAR_5);
      FUNC_1 (VAR_1, "...");
      FUNC_3 (VAR_1, VAR_2, VAR_5);
      FUNC_4 (VAR_1, VAR_2, VAR_7);
      FUNC_0 (VAR_1, ')');
      break;
    }

  VAR_1->pack_index = VAR_8;
  return 1;
}
