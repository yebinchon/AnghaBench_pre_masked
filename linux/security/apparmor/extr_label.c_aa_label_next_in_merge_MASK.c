
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct label_it {size_t i; size_t j; } ;
struct aa_profile {int dummy; } ;
struct aa_label {size_t size; struct aa_profile** vec; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct aa_profile*,struct aa_profile*) ;

struct aa_profile *FUNC_2(struct label_it *VAR_0,
       struct aa_label *VAR_1,
       struct aa_label *VAR_2)
{
 FUNC_0(!VAR_1);
 FUNC_0(!VAR_2);
 FUNC_0(!VAR_0);
 FUNC_0(VAR_0->i < 0);
 FUNC_0(VAR_0->i > VAR_1->size);
 FUNC_0(VAR_0->j < 0);
 FUNC_0(VAR_0->j > VAR_2->size);

 if (VAR_0->i < VAR_1->size) {
  if (VAR_0->j < VAR_2->size) {
   int VAR_3 = FUNC_1(VAR_1->vec[VAR_0->i], VAR_2->vec[VAR_0->j]);

   if (VAR_3 > 0)
    return VAR_2->vec[(VAR_0->j)++];
   if (VAR_3 == 0)
    (VAR_0->j)++;
  }

  return VAR_1->vec[(VAR_0->i)++];
 }

 if (VAR_0->j < VAR_2->size)
  return VAR_2->vec[(VAR_0->j)++];

 return ((void*)0);
}
