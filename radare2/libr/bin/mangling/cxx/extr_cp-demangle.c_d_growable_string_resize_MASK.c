
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d_growable_string {int allocation_failure; int alc; char* buf; scalar_t__ len; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,size_t) ;

__attribute__((used)) static inline void
FUNC_2 (struct d_growable_string *VAR_0, size_t VAR_1)
{
  size_t VAR_2;
  char *VAR_3;

  if (VAR_0->allocation_failure)
    return;




  VAR_2 = VAR_0->alc > 0 ? VAR_0->alc : 2;
  while (VAR_2 < VAR_1)
    VAR_2 <<= 1;

  VAR_3 = (char *) FUNC_1 (VAR_0->buf, VAR_2);
  if (VAR_3 == ((void*)0))
    {
      FUNC_0 (VAR_0->buf);
      VAR_0->buf = ((void*)0);
      VAR_0->len = 0;
      VAR_0->alc = 0;
      VAR_0->allocation_failure = 1;
      return;
    }
  VAR_0->buf = VAR_3;
  VAR_0->alc = VAR_2;
}
