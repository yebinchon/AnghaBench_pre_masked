
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_growable_string {char* buf; int alc; scalar_t__ allocation_failure; } ;


 int FUNC_0 (int,struct demangle_component*,int ,struct d_growable_string*) ;
 int VAR_0 ;
 int FUNC_1 (struct d_growable_string*,int) ;
 int FUNC_2 (char*) ;

char *
FUNC_3 (int VAR_1, struct demangle_component *VAR_2,
                      int VAR_3, size_t *VAR_4)
{
  struct d_growable_string VAR_5;

  FUNC_1 (&VAR_5, VAR_3);

  if (! FUNC_0 (VAR_1, VAR_2,
                                       VAR_0,
                                       &VAR_5))
    {
      FUNC_2 (VAR_5.buf);
      *VAR_4 = 0;
      return ((void*)0);
    }

  *VAR_4 = VAR_5.allocation_failure ? 1 : VAR_5.alc;
  return VAR_5.buf;
}
