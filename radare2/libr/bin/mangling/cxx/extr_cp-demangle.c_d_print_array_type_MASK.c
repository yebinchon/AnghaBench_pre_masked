
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demangle_component {int dummy; } ;
struct d_print_mod {TYPE_1__* mod; int printed; struct d_print_mod* next; } ;
struct d_print_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct d_print_info*,char) ;
 int FUNC_1 (struct d_print_info*,char*) ;
 int * FUNC_2 (struct demangle_component*) ;
 int FUNC_3 (struct d_print_info*,int,int *) ;
 int FUNC_4 (struct d_print_info*,int,struct d_print_mod*,int ) ;

__attribute__((used)) static void
FUNC_5 (struct d_print_info *VAR_1, int VAR_2,
                    struct demangle_component *VAR_3,
                    struct d_print_mod *VAR_4)
{
  int VAR_5;

  VAR_5 = 1;
  if (VAR_4 != ((void*)0))
    {
      int VAR_6;
      struct d_print_mod *VAR_7;

      VAR_6 = 0;
      for (VAR_7 = VAR_4; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
 {
   if (! VAR_7->printed)
     {
       if (VAR_7->mod->type == VAR_0)
  {
    VAR_5 = 0;
    break;
  }
       else
  {
    VAR_6 = 1;
    VAR_5 = 1;
    break;
  }
     }
 }

      if (VAR_6)
 FUNC_1 (VAR_1, " (");

      FUNC_4 (VAR_1, VAR_2, VAR_4, 0);

      if (VAR_6)
 FUNC_0 (VAR_1, ')');
    }

  if (VAR_5)
    FUNC_0 (VAR_1, ' ');

  FUNC_0 (VAR_1, '[');

  if (FUNC_2 (VAR_3) != ((void*)0))
    FUNC_3 (VAR_1, VAR_2, FUNC_2 (VAR_3));

  FUNC_0 (VAR_1, ']');
}
