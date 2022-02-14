
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_field {int flags; struct hist_field** operands; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct hist_field*) ;

__attribute__((used)) static void FUNC_1(struct hist_field *VAR_2,
          unsigned int VAR_3)
{
 unsigned int VAR_4;

 if (VAR_3 > 3)
  return;

 if (!VAR_2)
  return;

 if (VAR_2->flags & VAR_0)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_1(VAR_2->operands[VAR_4], VAR_3 + 1);

 FUNC_0(VAR_2);
}
