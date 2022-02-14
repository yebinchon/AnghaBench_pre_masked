
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct label_it {int dummy; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 int * FUNC_1 (struct label_it*,struct aa_label*,struct aa_label*) ;

bool FUNC_2(struct aa_label *VAR_0, struct aa_label *VAR_1)
{
 struct label_it VAR_2 = { };

 FUNC_0(!VAR_0);
 FUNC_0(!VAR_1);

 if (VAR_1 == VAR_0)
  return 1;

 return FUNC_1(&VAR_2, VAR_0, VAR_1) == ((void*)0);
}
