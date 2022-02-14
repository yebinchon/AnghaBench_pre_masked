
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_label {int size; int node; int count; int ** vec; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct aa_label*,int ) ;
 int FUNC_3 (int *) ;

bool FUNC_4(struct aa_label *VAR_0, int VAR_1, gfp_t VAR_2)
{
 FUNC_0(!VAR_0);
 FUNC_0(VAR_1 < 1);

 if (FUNC_2(VAR_0, VAR_2) < 0)
  return 0;

 VAR_0->size = VAR_1;
 VAR_0->vec[VAR_1] = ((void*)0);
 FUNC_3(&VAR_0->count);
 FUNC_1(&VAR_0->node);

 return 1;
}
