
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d_growable_string {char* buf; int alc; scalar_t__ allocation_failure; } ;


 int FUNC_0 (char const*,int,int ,struct d_growable_string*) ;
 int VAR_0 ;
 int FUNC_1 (struct d_growable_string*,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3 (const char *VAR_1, int VAR_2, size_t *VAR_3)
{
  struct d_growable_string VAR_4;
  int VAR_5;

  FUNC_1 (&VAR_4, 0);

  VAR_5 = FUNC_0 (VAR_1, VAR_2,
                                VAR_0, &VAR_4);
  if (VAR_5 == 0)
    {
      FUNC_2 (VAR_4.buf);
      *VAR_3 = 0;
      return ((void*)0);
    }

  *VAR_3 = VAR_4.allocation_failure ? 1 : VAR_4.alc;
  return VAR_4.buf;
}
