
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_atoms {scalar_t__ nb_atoms; } ;



__attribute__((used)) static int FUNC_0(struct work_atoms *VAR_0, struct work_atoms *VAR_1)
{
 if (VAR_0->nb_atoms < VAR_1->nb_atoms)
  return -1;
 if (VAR_0->nb_atoms > VAR_1->nb_atoms)
  return 1;

 return 0;
}
