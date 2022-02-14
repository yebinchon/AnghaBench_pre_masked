
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct label_it {int dummy; } ;
struct aa_profile {int dummy; } ;
struct aa_label {int size; int * vec; } ;


 int FUNC_0 (int) ;
 struct aa_profile* FUNC_1 (struct label_it*,struct aa_label*,struct aa_label*) ;
 int FUNC_2 (struct aa_profile*,int ) ;

__attribute__((used)) static int FUNC_3(struct aa_label *VAR_0, struct aa_label *VAR_1,
      struct aa_label *VAR_2)
{
 struct aa_profile *VAR_3 = ((void*)0);
 struct label_it VAR_4 = { };
 int VAR_5;

 FUNC_0(!VAR_0);
 FUNC_0(!VAR_1);
 FUNC_0(!VAR_2);

 for (VAR_5 = 0;
      VAR_5 < VAR_2->size && (VAR_3 = FUNC_1(&VAR_4, VAR_0, VAR_1));
      VAR_5++) {
  int VAR_6 = FUNC_2(VAR_3, VAR_2->vec[VAR_5]);

  if (VAR_6 != 0)
   return VAR_6;
 }

 if (VAR_3)
  return 1;
 else if (VAR_5 < VAR_2->size)
  return -1;
 return 0;
}
