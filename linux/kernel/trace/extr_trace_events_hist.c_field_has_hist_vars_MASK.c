
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_field {int flags; struct hist_field** operands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct hist_field *VAR_3,
    unsigned int VAR_4)
{
 int VAR_5;

 if (VAR_4 > 3)
  return 0;

 if (!VAR_3)
  return 0;

 if (VAR_3->flags & VAR_0 ||
     VAR_3->flags & VAR_1)
  return 1;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  struct hist_field *VAR_6;

  VAR_6 = VAR_3->operands[VAR_5];
  if (FUNC_0(VAR_6, VAR_4 + 1))
   return 1;
 }

 return 0;
}
